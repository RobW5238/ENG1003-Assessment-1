#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void rotationDecryption(char* Text, int key);
void charIncrement();
void searchDic();

int main(void)
{

  int x;
  int length;
  int c = 1;//this is the second character of the entered text
  int key;
  char deText;

  char Text[101];
  printf("\nrotation cipher decryption software\n\n" );
  printf(".\n.\n.\n\n");
  printf("Enter the message to be decrypted;\n\n");
  gets(Text);
  length = strlen(Text);
  printf("the word has %d characters\n", length);
  charIncrement(Text, length);
//  searchDic(deText);
  printf("the decrypted message is %s", deText);

}

void charIncrement(char* Text, int length)
  {
    int test;
    int inc;
    int matchFound;
    int key;
    char deText;
    int val;
    int found = 0;
    int i = 0;
    if (Text[0]<122 && Text[0]>97)
    {
      printf("function activated\n" );
      key = 1;
      while(matchFound != 1)
      {
      val = ((int)Text[i] - 1);//% 26 + 65;
      deText = val;
      test++;
      printf("search dic function activated\n");
      searchDic(deText);
      key++;
      }
    }
    else
    {
      printf("input text is not valid\n");
    }
    if (matchFound>0)
      printf("%s\n",deText );

  }

void searchDic()
  {
    int matchFound = 0;
    int key = 1;
    int test =3;
    int boi =0;
    char string[50];
    int t = 0;
    char deText[100];
    FILE *filePointer = fopen("dictionary.txt", "r");
      printf("text received\n" );
    if (filePointer == NULL)
    {
      printf("cant open file\n");
    }
    printf("dic opened\n");
    //while (!feof(filePointer))
    //{
    while( fscanf(filePointer, "%s", string) ==1)
      {
        if(strstr(string, deText) !=0)
        {
          boi++;
        }
      }
      test++;
      printf("%d\n",test);
      printf("The word was found %d times\n", boi);
      if (boi>0)
      {
        printf("match found\n");
        matchFound = 1;

      }

  }



  /*for (
    Text = Text +1;
  printf ("%s", Text)
  //printf("%s",Text);
  */
/*
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
*/
