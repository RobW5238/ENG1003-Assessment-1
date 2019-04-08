/*
#include <stdio.h>

int main()
{
   char s[100];
   int c = 1;

   gets(s);

   while (s[c] != '\0') {
      printf("%c\n", s[c]);

   }

   return 0;
}
*/



#include <stdio.h>
int main()

{
    char text[101];
    printf("Enter a word: ");


    gets(text);
    int c = 1;

    printf("\n2nd letter is %c\n",text[c]);
    printf("\nascii value is %d\n",text[c]);

      switch(text[c])
      {
        case(97):
          printf("\n2nd letter is a vowel, a\n");
          break;
        case(101):
          printf("\n2nd letter is a vowel, e\n");
          break;
        case(105):
          printf("\n2nd letter is a vowel, i\n");
          break;
        case(111):
          printf("\n2nd letter is a vowel, o\n");
          break;
        case(117):
          printf("\n2nd letter is a vowel, u\n");
          break;
        default:
          printf("\nthe 2nd letter (%c) is not a vowel\n",text[c] );
          return 0;
      }
}
/*  if (c=105)
    printf("2nd letter is i");
    return 0;

  (void)
    printf ("2nd letter is not i");
}
*/
