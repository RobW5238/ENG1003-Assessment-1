#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void rotationCipher(char* Text, int key);

int main(void)
{
  int key;
  char enText[1010];
  printf("rotation cipher decryption software\n" );
  printf(" .\n");
  printf(" .\n");
  printf(" .\n");
  printf("Enter the message to be decrypted;\n");
  gets(enText);
  //scanf("enText");
  if(enText[0]<=32 && enText[0]>=0 )
  {
    printf("error");
  }
  printf("enter the value of the decryption key;\n" );
  scanf("%d",&key);
  printf("the software decrypted message:\n" );
  rotationCipher(enText, key);
  return 0;
  system("pause");
}

void rotationCipher(char* enText, int key)
{
  int i=0;
  int val;
  char deText;

  while(enText[i] != '\0' && strlen(enText) > i)
  {
    if(enText[i]>=97 && enText[i]-key<97)
    {
      //printf("rotated\n");
      enText[i]=enText[i]+26;
    }
    if(enText[i]>=97 && enText[i]<=123)
    {
      val = ((int)enText[i] - key);
      deText = (char)(val);
      //deText;
      printf ("%c", deText);
      i++;
    }
    if(enText[i]>=65 && enText[i]-key<65)
    {
      //printf("rotated\n");
      enText[i]=enText[i]+26;
    }
    if(enText[i]>=65 && enText[i]<=91)
    {
      val = ((int)enText[i] - key);
      deText = (char)(val);
      //deText;
      printf ("%c", deText);
      i++;
    }
    if(enText[i]>=32 && enText[i]<=64)
    {
      printf ("%c",enText[i]);
      i++;
    }
  }
printf("\n" );
}
