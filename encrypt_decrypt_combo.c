#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void RtationCipher(char* Text, int key);

int main()
{
  printf("rotation cipher software v3.4.2\n\n");
  printf("select a function\n\n");
  printf("a) encrypt message\n\n");
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
        case 'a':
          printf("\nselected encryption\n");
          exRotationCipher();
          break;
        case 'b':
          printf("selected b\n");
          return 0;
          break;
        case 'c':
          printf("terminating program\n");
          return 0;
          break;
        }
    }
  printf("\ninvalid input\n");
  return 0;
}


int exRotationCipher()
{
  fflush(stdin);
  int key;
  char Text[101];
  printf("\nrotation cipher encryption software\n\n" );
  printf(" .\n");
  printf(" .\n");
  printf(" .\n\n");
  printf("Enter the message to be encrypted;\n\n");
  fgets(Text, sizeof(Text), stdin);
  printf("\nenter the value of the encryption key;\n\n" );
  scanf("%d",&key);
  printf("\nthe encrypted message is:\n\n" );
  rotationCipher(Text, key);
  system("pause");
}

void rotationCipher(char* Text, int key)
{
  int i=0;
  int val;
  char encTxt;
  while(Text[i] != '\0' && strlen(Text)-1 > i)
    {
      val = ((int)Text[i] + key);
      encTxt = (char)(val);
      printf ("%c", encTxt);
      i++;
    }
  printf("\n\n" );
}
