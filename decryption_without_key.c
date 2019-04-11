#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void rotationDecryption(char* Text, int key);

int main(void)
{
  int x;
  int c = 1;//this is the second character of the entered text
  int key;
  char Text[101];
  printf("\nrotation cipher decryption software\n\n" );
  printf(".\n.\n.\n\n");
  printf("Enter the message to be decrypted;\n\n");
  gets(Text);
  printf("\nThe software will now attempt to crack the code\n\n" );
  printf("the ascii value of the 2nd letter is %d, therefore there is a\n", Text[c]);
  printf("good chance that one of the following messages makes sense\n");

  //printf("%s",Text);

  key = Text[c] - 97;
  printf("a) rotation value = %d\n",key);
  printf("message = \n");
  rotationCipher(Text, key);
  key = Text[c] - 101;
  printf("b) rotation value = %d\n",key);
  printf("message = \n");
  rotationCipher(Text, key);
  key = Text[c] - 105;
  printf("c) rotation value = %d\n",key);
  printf("message = \n");
  rotationCipher(Text, key);
  key = Text[c] - 111;
  printf("d) rotation value = %d\n",key);
  printf("message = \n");
  rotationCipher(Text, key);
  key = Text[c] - 117;
  printf("e) rotation value = %d\n",key);
  printf("message = \n");
  rotationCipher(Text, key);

}

void rotationCipher(char* Text, int key)
{
  int i=0;
  int val;
  char deTxt;

  while(Text[i] != '\0' && strlen(Text) > i)
  {
    val = ((int)Text[i] - key); //% 26 + 65;
    deTxt = (char)(val);
    printf ("%c", deTxt);
    i++;
  }
printf("\n" );
}


/*
  switch(Text[c])
  {
    case(97):
      printf("2nd letter is a vowel, a");
      break;
    case(101):
      printf("2nd letter is a vowel, e");
      break;
    case(105):
      printf("2nd letter is a vowel, i");
      break;
    case(111):
      printf("2nd letter is a vowel, o");
      break;
    case(117):
      printf("2nd letter is a vowel, u");
      break;
    default:
      printf("2nd letter (%c) is not a vowel and the decryption cannot proceed\n",Text[c] );
      return 0;
  }
  printf(" and the program will proceed as planned\n" );
*/


/*  //scanf("%d",&key);
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
