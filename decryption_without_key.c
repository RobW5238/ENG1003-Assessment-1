#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void rotationDecryption(char* Text, int key);

int main(void)
{

  int key;
  char Text[101];
  printf("\nrotation cipher decryption software\n\n" );
  printf(".\n.\n.\n\n");
  printf("Enter the message to be decrypted;\n\n");
  fgets(Text, sizeof(Text), stdin);
  printf("\nThe software will now attempt to crack the code\n\n" );
  //scanf("%d",&key);
  printf("\nthe decrypted message is:\n\n" );
  printf("%d",Text);
  //rotationDecryption(Text, key);
  //system("pause");
  return 0;
}
/*void rotationDecryption(char* Text, int key)
{
  int i=0;
  int val;
  char encTxt;

  while(Text[i] != '\0' && strlen(Text)-1 > i)
  {
    val = ((int)Text[i] - key);
    encTxt = (char)(val);
    printf ("%c", encTxt);
    i++;
  }
  printf("\n" );
}
*/
/*void codeCracker ()//this function will attempt to guess the key
{

}
*/
