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
        void rotationCipher(char* Text, int key)
        case 'a':
        printf("you have selected to encrypt a message\n");
        int key;
        char Text[101];
        printf("rotation cipher encryption software\n\n" );
        printf(" .\n");
        printf(" .\n");
        printf(" .\n\n");
        printf("Enter the message to be encrypted;\n\n");
        fgets(Text, sizeof(Text), stdin);
        printf("\nenter the value of the encryption key;\n\n" );
        scanf("%d",&key);
        printf("\nthe encrypted message is:\n\n" );
        rotationCipher(Text, key);
        return 0;
        system("pause");



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

      }
      printf("unknown command, learn to read you drip\n" );

    }
  return 0;
}
