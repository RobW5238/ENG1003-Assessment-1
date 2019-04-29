#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void rotationCipher(char* Text, int key);

int main(void)
{
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
  //system("pause");
}

void rotationCipher(char* Text, int key)
{
  int i=0;
  int intText=0;
  int val=0;
  char deText;
  while(Text[i] != '\0' && strlen(Text) > i)
  {
    intText= Text[i];
    if(intText>=97 && intText+key>122) //rotates the key to keep the code working within the hindu arabic alphabet
    {
      intText=intText-26;
      printf(".\n");
    }
    if(intText>=97 && intText<=150)//lower case
    {
      val = ((int)intText + key);
      deText = val;//(char)(val);
      //deText;
      printf ("%c", deText);
      i++;
    }
    if(intText>=65 && intText+key>90)
    {
      //printf("rotated\n");
      intText=intText-26;
    }

    if(intText>=65 && intText<=90)//upper case
    {
      val = ((int)intText + key);
      deText = (char)(val);
      //deText;
      printf ("%c", deText);
      i++;
    }
    if(intText>=32 && intText<=64)
    {
      printf ("%c",intText);
      i++;
      printf("char\n" );
    }
  }
  printf("\n\n" );
}
