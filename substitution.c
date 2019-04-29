
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void randSubEncrypt();
void subEncrypt();
void customSubEncrypt();

char Text[100];
int c;


int main()
{
  printf("substitution cipher selected\n\n");
  printf("NOTE: substitution cipher requires use of an external file containing the key\n\n");
  printf("enter some text to be encrypted\n\n");
  scanf("%s",Text);
  printf("\ntext received\n\n");
  printf("choose one of the folllowing:\n\n");
  printf("a) encrypt with rand key\n\n");
  printf("b) encrypt with custom key\n\n");
  fflush(stdin);
  scanf("%c", &c);

  switch(c)
    {
      case(97):
        printf("random key encryption selected\n");
        randSubEncrypt(Text);//call random encryption function
        break;
      case(98):
        printf("custom key encryption selected\n");
        customSubEncrypt(Text);//call custom encryption function
        break;
    }


}

void randSubEncrypt(char* text)
{
  char c;
  char code[26] = {'q','w','e','r','t','y','u','i','o','p','a','s','d','f','g','h','j','k','l','z','x','c','v','b','n','m'};
  printf("The coce has been erencrypted with the following key:\na = q\nb = w\nc = e\nd = r\ne = t\nf = y\ng = u\nh = i\ni = o\nj = p\nk = a\nl = s\nm = d\nn = f\no = g\np = h\nq = j\nr = k\ns = l\nt = z\nu = x\nv = c\nw = v\nx = b\ny = n\nz = m\n");
//  printf("%s\n",code);
  printf("the encrypted text is:\n");
  subEncrypt(Text,code);
}

void customSubEncrypt(char *Text)
{
  char code[26];
  printf("you have selected to enter a custom encryption key\n");
  printf("enter the substitution key in alphabetical order of the letters being replaced\n");
  scanf("%s",code);
  printf("confirmation; the encryption key is: %s\n", code);
  subEncrypt(Text,code);

}

void subEncrypt(char *Text,char code[])
{
  int i=0;
  int length = strlen(Text);
  int intInd;
  while(Text[i] != '\0' && strlen(Text) > i)
  {
    char *encText= (char *) malloc(sizeof(char)*length);
    int encInd = tolower(Text[i]) - 'a';
    if(encInd>=0 && intInd <26 )
    {
      //encText[i] = code[encInd];
      printf("%c", code[encInd]);
    }
    else
    {
      printf("%c",Text[i]);
    }
    i++;
  }
}
