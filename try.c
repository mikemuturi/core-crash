#include <stdio.h>
#include <stdlib.h>


int main() {

  int n = 4;
  
  int* ptr;

  ptr = (int*) malloc(n * sizeof(int));

  if (ptr == NULL) {
      printf("Memory cannot be allocated");
      return 0;
  }

  printf("Allocated Memory\n");
  for (int i = 0; i < n; ++i) {
      printf("%p\n", ptr + i);
  }

  n = 6;

  ptr = realloc (ptr, n * sizeof(int));

  printf("Newly Allocated Memory\n");
  for(int i = 0; i < n; ++i) {
      printf("%p\n", ptr + i);
  }

  return 0;
}
