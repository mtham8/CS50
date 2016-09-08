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

