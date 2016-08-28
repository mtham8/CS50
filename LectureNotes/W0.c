/* Binary System: 2n --> 1 2 4 8 16 32 64 128

* 000 - represents zero. They are not in powers of 10, like decimals, but rather powers of 2.
* We get to 0 here because we have 4*0 + 2*0 + 1*0, which gives us 0.

* 001 - 4*0 + 2*0 + 1*1 = 1
* 010 - 4*0 + 2*1 + 1*0 = 2
* 011 - 4*0 + 2*1 + 1*1 = 3
* 100 - 4*1 + 2*0 + 1*0 = 4
* 101 - 4*1 + 2*0 + 1*1 = 5
* 110 - 4*1 + 2*1 + 1*0 = 6
* 111 - 4*1 + 2*1 + 1*1 = 7

 bits = binary digits. */

// Computational Thinking - Algorithms

// print 'hello world'

#include <stdio.h>

int main(void)
{
  printf("hello, world\n");
}
