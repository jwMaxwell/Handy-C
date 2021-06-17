#include <stdio.h>
#include "pipe.h"
#include "map.h"
#include <stdlib.h>

int main() {

  // This will work on default settings with GCC compiler
  // For those who are using standard C, put these functions
  // outside of main
  int add(int x){ return x + 5; };
  int mult(int x){ return x * 3; };
  int div(int x){ return x / 6; };

  int (*funcs[])(int) = {&add, &mult, &div, NULL};

  int (*doStuff)(int) = (int*)pipe(funcs);
  printf("result: %d\n", doStuff(4));

  // ~~~
  int a[] = {1, 2, 3, 4, 5, NULL};
  int *b = malloc(sizeof(int) * 6);
  b = imap(a, &mult);

  for (int i = 0; i < 5; ++i)
    printf("%d\n", b[i]);
    
  return 0;
}

