// Compiler: A piece of software that takes source code and produces object code from it.

int counter = 0;
while (true) {
  printf("%i\n", counter);
  counter++;
}

// giving you access to a library of functions -- header file, standard library
#include <cs50.h>
#include <stdio.h>

int main(void)
{
  string s = GetString();
  // '%s' ==> put the string here
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
  printf("%f\n", 1.0/10.0);
}
