#include <stdio.h>
#include <string.h>

void caesarCipher(char* encryptedText, int key);

int main(void)
{
  int key;
  char encryptedText[101];
  printf("Rotation cipher decryption software v2.2.3\n");
  printf("Enter the message to be decrypted\n");
  fgets(encryptedText, sizeof(encryptedText), stdin);
  printf("enter the value of the decryption key (eg.+7)\n");
  scanf("%d",key );
  printf("the decypted message is:\n" );
  caesarCipher(encryptedText, key);
  return 0;
  system("pause");
}

void caesarCipher(char* encryptedText, int key)
{
  int i=0;
  int cypherValue;
  char cypher;

  while(encryptedText[i] != '\0' && strlen(encryptedText)+1 > i)
  {
    cypherValue = ((int)encryptedText[i] - key);
    cypher = (char)(cypherValue);
    printf ("%c", cypher);
    i++;
  }
printf("\n" );
}
