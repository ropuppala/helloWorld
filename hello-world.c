#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
  int i = 0; // iterator
  int n = 5; //max

  // repeat n times
  for (i = 0; i<atoi(argv[1]); i++)
  {  
  printf("Hello World!\n");
  }

  printf("argc = %d\n", argc);

  return EXIT_SUCCESS; 
}
