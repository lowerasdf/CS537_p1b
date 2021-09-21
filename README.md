# CS537 P1B: xv6 getiocount System Call

##### Table of Contents
* [Installation](#installation)
* [Implementation](#implementation)
* [Data Structures](#data-structures)
  * [Hash Table](#hash-table)
  * [Linked Lists](#linked-lists)
* [Acknowledgement](#acknowledgement)

## Installation
To compile and run the program, run:
<pre><code>make qemu</code></pre>
Then:
<pre><code>getiocount</code></pre>
To run a user program that tests the syscall implementation.

## Implementation
The program stores the data in a text file called <code>database.txt</code> in the same directory. To run the program, you do not have to provide the <code>database.txt</code>. It will automatically create one if it does not exist.

## Data Structures
The program makes use of a <b>hash table</b> with <b>linked lists</b> to hold the conflicting keys.

#### Hash Table
The hash function is simple: it takes the modulo of the given key by the pre-defined <code>hash-capacity</code> (1000 key-value pairs by default). With that being said, it does <b>not</b> mean that the hash table can only hold 1000 key-value pairs. The <code>hash-capacity</code> is solely used for the hash function to determine index.

#### Linked Lists
A single linked list node represents a key-value pair where each value is dynamically allocated. Each node is also dynamically allocated.

## Acknowledgement
This is an assignment for a class [Comp Sci. 537: Introduction to Operating Systems](https://pages.cs.wisc.edu/~remzi/Classes/537/Fall2021/) by [Remzi Arpaci-Dusseau](https://pages.cs.wisc.edu/~remzi/). Please refer to [this repo](https://github.com/remzi-arpacidusseau/ostep-projects/tree/master/initial-xv6) for more details about the assignment.
