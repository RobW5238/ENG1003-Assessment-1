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
