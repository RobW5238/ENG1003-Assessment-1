#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main()
{
  printf("rotation cipher software v3.4.2\n\n");
  printf("select a function\n\n");
  printf("c) encrypt message\n\n");
  printf("b) decrypt message\n\n");
  printf("c) terminate program\n\n");

  char x;
  char a;
  char b;
  char c;
  scanf ("%c", &x);

  while (x>='a' && x<='c')
    {
      switch (x)
      {
        void rotationCipher(char* Text, int key);
        case 'a':
          printf("selected a\n");
          break;
        case 'b':
          printf("selected b\n");
          break;
        case 'c':
          printf("terminating program\n");
          return 0;
          break;



      }

      return 0;

    }
  return 0;
}
