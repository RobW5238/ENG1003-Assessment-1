#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void rotationCipher(char* Text, int key);

int main(void)
{
  int key;
  char Text[101];
  printf("rotation cipher decryption software\n" );
  printf(" .\n");
  printf(" .\n");
  printf(" .\n");
  printf("Enter the message to be decrypted;\n");
  fgets(Text, sizeof(Text), stdin);
  printf("enter the value of the decryption key;\n" );
  scanf("%d",&key);
  printf("the decrypted message is:\n" );
  rotationCipher(Text, key);
  return 0;
  system("pause");
}

void rotationCipher(char* Text, int key)
{
  int i=0;
  int val;
  char encTxt;

  while(Text[i] != '\0' && strlen(Text)-1 > i)
  {
    val = ((int)Text[i] - key); //% 26 + 65;
    encTxt = (char)(val);
    printf ("%c", encTxt);
    i++;
  }
printf("\n" );
}
