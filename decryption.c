#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void rotationCipher(char* Text, int key);
void bruteForce(char* enText);

int main(void)
{
  int key;
  char option;
  char enText[10100];
  printf("rotation cipher decryption software\n" );
  printf(" .\n");
  printf(" .\n");
  printf(" .\n");
  printf("Enter the message to be decrypted;\n\n");
  gets(enText);
  //scanf("enText");
  if(enText[0]<=32 && enText[0]>=0 )
  {
    printf("error\n");
    return 0;
  }
  printf("\nselect a) to enter a decryption key\n\nselect b) to attempt decryption without a key\n\n");
  scanf("%c",&option );
  switch (option)
  {
    case 97:
      printf("\nenter the value of the decryption key;\n" );
      scanf("%d",&key);
      printf("the software decrypted message:\n" );
      rotationCipher(enText, key);
      break;

    case 98:
      printf("\nyou have selected to attempt to automatically decrypt the message\n\n");
      printf("The decryption software will now present you with\n25 possible decryptions, select the correct one:\n\n");
      bruteForce(enText);
      break;
  }

  return 0;
  system("pause");
}

void rotationCipher(char* enText, int key)
{
  int i=0;
  int val;
  char deText;
  int intText;

    while(enText[i] != '\0' && strlen(enText) > i)
    {
      intText= enText[i];
      if(intText>=97 && intText-key<97) //rotates the key to keep the code working within the hindu arabic alphabet
      {
        intText=intText+26;
      }
      if(intText>=97 && intText<=150)//lower case
      {
        val = ((int)intText - key);
        deText = (char)(val);
        //deText;
        printf ("%c", deText);
        i++;
      }
      if(intText>=65 && intText-key<65)
      {
        //printf("rotated\n");
        intText=intText+26;
      }

      if(intText>=65 && intText<=150)//upper case
      {
        val = ((int)intText - key);
        deText = (char)(val);
        //deText;
        printf ("%c", deText);
        i++;
      }
      if(intText>=32 && intText<=64)
      {
        printf ("%c",intText);
        i++;
      }
    }
  printf("\n" );
}

void bruteForce(char* enText)
{
  int rKey=1;
  int i=0;
  int val;
  int intText=0;
  char deText;
  int counter=0;
  do
  { printf("%d) ",rKey);

    while(enText[i] != '\0' && strlen(enText) > i)
      {
        intText=enText[i];
        if(intText>=97 && intText-rKey<97) //rotates the key to keep the code working in the hindu arabic alphadet
        {
          intText= intText+26;

        }
        if(intText>=97 && intText<=150)//lower case
        {
          val = ((int)intText - rKey);
          deText = (char)(val);
          //deText;
          printf ("%c", deText);
          i++;
        }
        if(intText>=65 && intText-rKey<65)
        {
          //printf("rotated\n");
          intText=intText+26;
        }
        if(intText>=65 && intText<=97)//upper case
        {
          val = ((int)intText - rKey);
          deText = (char)(val);
          //deText;
          printf ("%c", deText);
          i++;
        }
        if(intText>=32 && intText<=64)
        {
          printf ("%c",intText);
          i++;
        }
        //printf("c\n");
      }
      counter=0;
      rKey++;
      i=0;

      printf("\n\n\n");
    } while(rKey<26);
  printf("\n" );
}
