#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char Text[100];
char c;

int main()
{
  printf("substitution cipher selected\n\n");
  printf("enter some text to be encrypted\n\n");
  scanf("%s",Text);
  printf("text received\n\n");
  printf("choose one of the folllowing:\n\n");
  printf("a) encrypt with rand key\n\n");
  printf("b) encrypt with specific key\n\n");
  //scanf("%c", &c);
  c= 97;
  printf("%c\n\n",c);

  switch(c)
    {
      case(97):
        printf("random key encryption selected\n");
        randSubEncrypt(Text);//call random encryption function
        break;
      case(98):
        printf("custom key encryption selected\n");
        //call custom encryption function
        break;
    }


}
randSubEncrypt()
{
  char c;
  char Text[100];
  printf("The coce has been encrypted with the following key:\n" );
  /* a = q
     b = w
     c = e
     d = r
     e = t
     f = y
     g = u
     h = i
     i = o
     j = p
     k = a
     l = s
     m = d
     n = f
     o = g
     p = h
     q = j
     r = k
     s = l
     t = z
     u = x
     v = c
     w = v
     x = b
     y = n
     z = m
  */
  c= Text[0];
  printf("%c",c);
}
