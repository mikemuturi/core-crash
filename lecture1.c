#include <stdio.h>

int main() {

  FILE* fptr;

  fptr = fopen("newFile.txt", "w");

  fputs("New message 1\n", fptr);
  fputs("New message 2", fptr);

  fclose(fptr);

  return 0;
}
