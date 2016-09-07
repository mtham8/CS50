// Compiler: A piece of software that takes source code and produces object code from it.

int counter = 0;
while (true) {
  printf("%i\n", counter);
  counter++;
}

// giving you access to a library of functions -- header file, standard library
#include <cs50.h>
#include <stdio.h>

// your first function has to be called main
int main(void)
{
  string s = GetString();
  // '%s' ==> put the string here
  // printf is a function whose purpose in life is to print a formatted string
  printf("hello, %s\n", s);
}

// 'clang hello.c' ==> compiles your c file, use 'make' instead
// './a.out' ==> runs your program

// 'clang -o hello hello.c' ==> sets your output to be hello

// 'make hello' ==> looks for a file named 'hello' and runs the file

int main(void)
{
  // ask for user input
  printf("Give me an integer: ");
  int x = GetInt();
  printf("Give me another integer: ");
  int y = GetInt();

  // do math
  printf("The sum of %i and %i is %i\n", x, y, x+y);
}

int main(void)
{
  // ask user for an integer
  printf("I'd like to get an integer please: ");
  int n = GetInt();

  // analyze user's input
  if(n > 0)
  {
    printf("You picked a positive number\n");
  }
  else
  {
    printf("You picked a negative number\n");
  }
}

int main(void)
{
  // %f grabs a float integer
  printf("%.10f\n", 1.0/10.0);
}


int main(void)
{
  printf("state your name\n");
  string s = GetString();
  PrintName(s);
}

// abstraction, function decompositoin ==> breaking up functions into modules
void PrintName(string name)
{
  printf("hello, %s\n", name)
}

// Types
// bool (cs50), char, double (twice as big as a float), float (32 bit value), int, long long (64 bits), string (cs50)

// Format Codes
/* %c
* %i ==> print out an integer
* %f ==> floating point value or a double
* %lld ==> long long decimal value */

// escape sequences
// \n, \r, \t, \', \'', \\, \0

// switches
switch(expression)
{
  case i:
    // do this
    break;
  case j:
    // do that
    break;
  default:
    // do this other thing
    break;
}

int main(void)
{
  int n = GetPositiveInt();
  printf("Thanks for the %i\n", n);
}

int GetPositiveInt(void)
{
  int n;
  do
  {
    printf("Give me a positive int: ");
    n = GetInt();
  }
  while(n < 1);
  return n;
}

int cube(int n)
{
  return n*n*n;
}
