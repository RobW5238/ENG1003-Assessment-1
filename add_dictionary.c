#include <stdio.h>

int main()
{
  int x;
  FILE *filePointer = fopen("dictionary.txt", "r");

  if (filePointer == NULL)
    {
      printf("cant open file\n");
    }
  char output[256];
  for (x=1; fgets(output, sizeof(output), filePointer) != NULL; x++)
    {
      printf("file ok");
      return 0;
    }

  fclose(filePointer);

  system("PAUSE");
  return 0;
}
