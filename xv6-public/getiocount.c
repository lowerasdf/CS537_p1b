#include "types.h"
#include "stat.h"
#include "user.h"

void test1(void) {
  int x1 = getiocount();
  int x2 = getiocount();
  char buf[100];
  (void) read(4, buf, 1);
  int x3 = getiocount();
  int i;
  for (i = 0; i < 1000; i++) {
    (void) read(4, buf, 1);
  }
  int x4 = getiocount();
  printf(1, "XV6_TEST_OUTPUT %d %d %d\n", x2-x1, x3-x2, x4-x3);
  //printf(1, "x1:%d, x2:%d, x3:%d, x4:%d\n", x1, x2, x3, x4);
}

void test2(void) {
  int x1 = getiocount();

  int rc = fork();

  int total = 0;
  int i;
  for (i = 0; i < 100000; i++) {
    char buf[100];
    (void) read(4, buf, 1);
  }
  // https://wiki.osdev.org/Shutdown
  // (void) shutdown();

  if (rc > 0) {
    (void) wait();
    int x2 = getiocount();
    total += (x2 - x1);
    printf(1, "XV6_TEST_OUTPUT %d\n", total);
  }
  exit();
}

int main(void) 
{
  test1();
  test2();
  //printf(1, "I/O count after kernel boot: %d\n", getiocount());
  exit();
}