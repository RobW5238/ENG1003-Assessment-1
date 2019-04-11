#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main()
{
  int key = 1;
  int test;
  int val =0;
  char string[50];
  int t = 0;
  char deText[100];
  FILE *filePointer = fopen("dictionary.txt", "r");
  printf("enter text to search dic\n" );
  //gets(&deText);
  scanf("%s", deText);
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
        val++;
      }
    }
  printf("The word was found %d times\n", val);
  printf("end");
  system("PAUSE");
}
