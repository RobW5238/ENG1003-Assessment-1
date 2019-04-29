#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>


void bruteForce(char* enText);
void decrypt();
void encrypt();
void rotationEncryption();
void rotationDecryption();
void substitutionEncryption();
void DecRotateKey();
void bruteForceRot();
void randSubEncrypt();
void subEncrypt();
void customSubEncrypt();
void substitutionDecryption();
void subDecrypt();
void dicSearchFunction();


int main(void)
{
  printf("Cipher software v3.4.2\n\n");
  printf("select a function\n\n");
  printf("a) encrypt message\n\n");
  printf("b) decrypt message\n\n");
  printf("c) terminate program\n\n");

  char x;
  char a;
  char b;
  char c;
  scanf ("%c", &x);

  while (x>='a' && x<='c')
    {
      switch (x)
      {
        case 'a':
          printf("\nselected encryption\n");
          encrypt();
          break;
        case 'b':
          printf("selected decrypt\n");
          decrypt();
          break;
        case 'c':
          printf("terminating program\n");
          return 0;
          break;
        }
    }
  printf("\ninvalid input\n");
  return 0;
}


void encrypt()
  {
    fflush(stdin); //fflush clears any remaining value from the std input, \n is problematic when working with layered menus
    int key;
    char m;
    char Text[101];
    printf("\ncipher encryption software\n\n" );
    printf(".\n.\n.\n\n");
    printf("Enter the message to be encrypted;\n\n");
    fgets(Text, sizeof(Text), stdin); // allows the user to enter a message to be encrypted using standard input
    printf("choose encryption method:\n\na)rotation\nb)substitution\n\n");
    scanf("%c",&m);
    switch(m)
      {
        case(97):
          rotationEncryption(Text);//calls the roatation encryption function
          break;

        case(98):
          substitutionEncryption(Text);//calls the substitution encryption function
      }
  }

void decrypt ()
  {
    fflush(stdin);//again, clears the standard input, i ended up using this lots because it sometimes solved problems
    int key;
    char m;
    char option;
    char enText[10100];
    printf("cipher decryption software\n" );
    printf(" .\n");
    printf(" .\n");
    printf(" .\n");

    printf("\nis the text encrypted with a:\n a) rotation cipher \n\n b) substitution cipher\n");
    scanf("%c",&m );

    switch (m)
    {
      case 97:
        printf("rotation cipher decryption selected\n");
        fflush(stdin);
        rotationDecryption();
        break;
      case 98:
        printf("substitution cipher decryption selected\n");
        substitutionDecryption();
        break;
    }


  }
void rotationDecryption()
  {
    int key;
    char option;
    char enText[10100];
    printf("rotation cipher decryption software\n" );
    printf(" .\n");
    printf(" .\n");
    printf(" .\n");
    printf("Enter the message to be decrypted;\n\n");
    gets(enText);//user input
    //scanf("enText");
    if(enText[0]<=32 && enText[0]>=0 )//prints error if the user enteres something that isnt a letter, number or character
    {
      printf("error\n");
      main();
    }
    printf("\nselect a) to enter a decryption key\n\nselect b) to attempt decryption without a key\n\n");
    scanf("%c",&option );
    switch (option)
    {
      case 97:
        printf("\nenter the value of the decryption key;\n" );
        scanf("%d",&key);
        printf("the software decrypted message:\n" );
        DecRotateKey(enText, key);//calls the rotation cipher decryption function
        break;

      case 98:
        printf("\nyou have selected to attempt to automatically decrypt the message\n\n");
        printf("The decryption software will now present you with\n25 possible decryptions, select the correct one:\n\n");
        bruteForceRot(enText);//calls for a brute force attack on the rotation cipher
        break;
    }


    system("pause");
  }
void rotationEncryption(char* Text)
  {
    int i=0;
    int val;
    char encTxt;
    int key;
    printf("\nrotation encryption selected\n.\nenter the value of the rotation encryption key;\n\n" );
    scanf("%d",&key);
    printf("\nthe encrypted message is:\n\n" );
    while(Text[i] != '\0' && strlen(Text)-1 > i)
      {
        val = ((int)Text[i] + key);
        encTxt = (char)(val);
        printf ("%c", encTxt);
        i++;
      }
    printf("\n\n" );
    printf("returning to main menu\n");
    fflush(stdin);
    main();
  }

void DecRotateKey(char* enText, int key)
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

        if(intText>=65 && intText<=97)//upper case
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

void bruteForceRot(char* enText)
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
    return;
  }

void substitutionEncryption(char*Text)
  {
    //char Text[100];
    int c;

    printf("substitution cipher selected\n\n");
    printf("choose one of the folllowing methods of encryption:\n\n");
    printf("a) encrypt with rand key\n\n");
    printf("b) encrypt with custom key\n\n");
    fflush(stdin);
    c=0;
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

void randSubEncrypt(char* Text)
  {
//  char Text;
    char c;
    char code[26] = {'q','w','e','r','t','y','u','i','o','p','a','s','d','f','g','h','j','k','l','z','x','c','v','b','n','m'};
    printf("The code has been erencrypted with the following key:\na = q\nb = w\nc = e\nd = r\ne = t\nf = y\ng = u\nh = i\ni = o\nj = p\nk = a\nl = s\nm = d\nn = f\no = g\np = h\nq = j\nr = k\ns = l\nt = z\nu = x\nv = c\nw = v\nx = b\ny = n\nz = m\n");
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
  subEncrypt(Text,code);
  printf("returning to the main menu\n");
  fflush(stdin);
  main();

  }

void subEncrypt(char *Text,char *code)
  {
    int i=0;
    int length = strlen(Text);
    int intInd;
    printf("confirmation; the encryption key is: %s\n", code);
    printf("the encrypted message is:\n");
    while(Text[i] != '\0' && strlen(Text) > i)//the code will loop whilever its not at the end of the string, indicated by \0
    {
      char *encText= (char *) malloc(sizeof(char)*length);
      int encInd = tolower(Text[i]) - 'a'; // a very simple way of making all the letters lowercase and easy to work with, requires the ctype library
      if(encInd>=0 && intInd <26 )
      {
        printf("%c", code[encInd]);
      }
      else
      {
        printf("%c",Text[i]);
      }
      i++;
    }
  }

void substitutionDecryption()
  {
    char *encText;
    char code[26];
    printf("enter the message to be decrypted\n");

    fgets(encText, sizeof(encText), stdin);
    printf("you have selected to decrypt a substitution cipher.\n");
    printf("enter the substitution key in alphabetical order of the letters being replaced\nwith no spaces etc eg, abcdefg...\n");
    scanf("%s",&code);
    printf("decryption code stored\n");
  //  fflush(stdin);
    subDecrypt(encText,code);
    printf("returning to the main menu\n");
    fflush(stdin);
    main();
  }

void subDecrypt(char *encText,char *code)
  {
    printf("confirmation; the decryption key is: %s\n", code);
    int i=0;
    printf("1\n");
    char Text;
    printf("2\n");
    printf("3\n");
    int intInd;
    printf("the encrypted message is:\n");
    while(encText[i] != '\0' && strlen(encText) > i)
    {
      printf("entered while loop\n");
      char *Text= (char *) malloc(sizeof(char)*strlen(encText));
      int encInd = tolower(encText[i]) - 'a';
      if(encInd>=0 && intInd <26 )
      {
        //encText[i] = code[encInd];
        printf("%c", code[encInd]);
      }
    else
      {
        printf("%c",encText[i]);
      }
      i++;
    }
  }

int dicSearchFunction(*char deText)/* intended for this to cross reference the decrypted messages from
                                      the brute force attack with words in a basic dictionary, ran out of time */
  {
    int key = 1;
    int test;
    int val =0;
    char string[50];
    int t = 0;
    char deText[100];
    FILE *filePointer = fopen("dictionary.txt", "r"); //opens the file called dictionary.txt in the 'read' format
    printf("text received\n" );
    if (filePointer == NULL)
    {
      printf("cant open file\n");// if the file is missing, this should print
    }
    printf("dic opened\n");

    while( fscanf(filePointer, "%s", string) ==1)
      {
        if(strstr(string, deText) !=0)// this compares the strings, looking for a match
        {
          val++;//this counts the number of times that 'deText' appears in the provided dictionary
        }
      }
    printf("The word was found %d times\n", val);/*if the value is more than 0, then there is a good chance that the roation key has been cracked
    */

  }
