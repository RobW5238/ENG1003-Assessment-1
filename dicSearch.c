#include <stdio.h>
#include <string.h>

int length;

int main()
{
  char * deText;
  char word;
  FILE *filePointer = fopen("dictionary.txt", "r");
  if (filePointer == NULL)
  {
    printf("cant open file\n");
  }
  printf("dictionary opened\n" );
  printf("\nenter a word to search the dic\n");
  fgets(deText, sizeof(deText), stdin);
  printf("%c", deText);
  while (!feof(filePointer))
  {
    int c = fgetc(filePointer);
    if (EOF == c) break;
    printf("looking\n");
    if (c == deText[0])
    {

    printf("\nfound\n");
    char word[1000];
      int index = 0;
      do
      {
        word[index++] = c;
        c = fgetc(filePointer);
      } while (!feof(filePointer) && index < length && index < 1000);
      word[index] = '\0';
      if (0==strcmp(word, deText))
      break;
    }
  }
  printf("didnt start looking");
  return 0;
  system("pause");
}
