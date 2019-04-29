
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void randSubEncrypt();
void subEncrypt();

char Text[100];
int c;
//str fileName;

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
  //c= 97;
  //printf("%c\n\n",c);
  //fflush(stdin);

  switch(c)
    {
      case(97):
        printf("random key encryption selected\n");
        //filename =
        randSubEncrypt(Text);//call random encryption function
        break;
      case(98):
        printf("custom key encryption selected\n");
        //call custom encryption function
        break;
    }


}
/*readfile()
{
  FILE *filePointer = fopen("subkey", "r");
}*/
void randSubEncrypt(char* text)
{
  char c;
  char code[26] = {'q','w','e','r','t','y','u','i','o','p','a','s','d','f','g','h','j','k','l','z','x','c','v','b','n','m'};

  printf("The coce has been erencrypted with the following key:\na = q\nb = w\nc = e\nd = r\ne = t\nf = y\ng = u\nh = i\ni = o\nj = p\nk = a\nl = s\nm = d\nn = f\no = g\np = h\nq = j\nr = k\ns = l\nt = z\nu = x\nv = c\nw = v\nx = b\ny = n\nz = m\n");
  printf("the encrypted text is:\n");
  subEncrypt(Text,code);

  /*c= Text[0];
  printf("%c",c);*/
}

void subEncrypt(char *Text,char code[])
{
  int i=0;
  int length = strlen(Text);
  int intInd;
  while(Text[i] != '\0' && strlen(Text) > i)
  {
    char *encText = (char *) malloc(sizeof(char)*length);
    int encInd = tolower(Text[i]) - 'a';
    if(encInd >= 0 && intInd <26 )
    {
      encText[i] = code[encInd];
    }
    else
    {
      encText[i]= Text[i];
    }
    printf("%c",encText[i]);
    i++;
  }
}
