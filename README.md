# CS537 P1B: xv6 getiocount System Call

##### Table of Contents
* [Installation](#installation)
* [Implementation](#implementation)
* [Testing](#testing)
* [Acknowledgement](#acknowledgement)

## Installation
To compile and run the program, run:
<pre><code>make qemu</code></pre>
Then:
<pre><code>getiocount</code></pre>
To run a user program that tests the syscall implementation.

## Implementation
From the original xv6 code, I added a new system call called <code>getiocount</code> directed to a function with the same name in <code>sysfile.c</code>. It simply returns the global counter <code>getiocount</code> declared in <code>defs.h</code>. In the same file, I modified <code>read</code> and <code>write</code> to increase the counter wrapped by a <code>spinlock</code>.

## Testing
Run a user program called <code>getiocount</code> to test.

## Acknowledgement
This is an assignment for a class [Comp Sci. 537: Introduction to Operating Systems](https://pages.cs.wisc.edu/~remzi/Classes/537/Fall2021/) by [Remzi Arpaci-Dusseau](https://pages.cs.wisc.edu/~remzi/). Please refer to [this repo](https://github.com/remzi-arpacidusseau/ostep-projects/tree/master/initial-xv6) for more details about the assignment.
