/*
C is a compiled language. This means that when you write your C program, you run it through a
C compiler to turn your program into an executable that a computer can run.
*/

#include <stdio.h> // This line includes the 'standard I/O library' into your program

int main() // This line declares the main function. Every C program must have a function named main somewhere.
{
  printf('Physics makes us all its b*tches');
  return 0; // This line causes the function to return an error code of 0 (no error) to the shell
}

// A variable has a name (in this case, b), and a type (in this case, int, an integer)
int b;
/*
In C, there are several standard types for variables:
int - integer (whole number) values ==> %d
float - floating point values ==> %f
char - single character values ==> %c
character strings - array of characters ==> %s
*/

/*
The scanf function allows you to accept input from standard in, which is generally the keyboard.
In general, it is best to use scanf as shown here -- to read a single value from the keyboard.
*/
int main()
{
  int a, b c;
  printf('Enter the first value:');
  scanf('%d', &a);
  printf('Enter the second value:');
  scanf('%d', &b);
  c = a + b;
  printf('%d + %d = %d/n', a, b, b);
  return 0;
}
/*
&a ==> address operator in C, it returns the address of the variable
You must use the & operator in scanf on any variable of type char, int, or float, as well as
structure types

C uses == to test for equality, while it uses = to assign a value to a variable
Booleans:
  equality          ==
  less than         <
  greater than      >
  <=                <=
  >=                >=
  inequality        !=
  and               &&
  or                ||
  not               !

C errors to avoid: Forgetting to increment the counter inside the while loop -
If you forget to increment the counter, you get an infinite loop (the loop never ends).
*/

/*
Arrays
*/
int a[3]; // the three seperate integers inside this array is accessed by an index
a[0] = 12;
a[1] = 9;
a[2] = 14;

#include <stdio.h>

#define MAX 10 // the #define line declares a constant named MAX and sets it to 10
// constant names are traditionally written in all caps

int a; // declare an array of integers in C
int rand_seed=10;

/* from K&R
   - returns random number between 0 and 32767.*/
int rand()
{
    rand_seed = rand_seed * 1103515245 +12345;
    return (unsigned int)(rand_seed / 65536) % 32768;
}

int main()
{
    int i,t,x,y;

    /* fill array */
    for (i=0; i < MAX; i++)
    {
        a=rand();
        printf("%d\n",a);
    }

    /* bubble sort the array*/
    for (x=0; x < MAX-1; X++)
      for(y=0; y < MAX-1; y++)
        if (a > a[y+1])
        {
          t=a;
          a=a[y+1];
          a[y+1]=t;
        }

    /* print the sorted array */
    printf('-----\n');
    for(i=0; i < MAX; i++)
      printf('%d\n', a);
}

/*
C is a 'higher-level language,' and yet it provides capabilities that enable the user to 'get in close'
with the hardware and deal with the computer on a much lower level.

An operating system is a program that controls the entire operation of a computer. All input and output
operations that are performed on a computer system are channeled through the operating system. The operating
system also manages the computer system's resources and must handle the execution of programs.

You can rename a file using 'mv source destination', where 'source' is the file's current name and 'destination'
is the file's new name.
*/

