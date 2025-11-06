#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
  char input[100];
  FILE* fp;
  char c;
  
  fp = fopen("sample.txt", "r");
  
  while ((c = fgetc(fp)) != EOF) 
  {
        putchar(c);
  }
  
  system("PAUSE");	
  return 0;
}
