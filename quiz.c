#include <stdio.h>
#include <string.h>

int main() {

  char food1[20];
  char food2[20];
  
  printf("Enter the first food: ");
  fgets(food1, sizeof(food1), stdin);
  
  printf("Enter the second food: ");
  fgets(food2, sizeof(food2), stdin);
  
  if (strlen(food1) > strlen(food2)) {
      printf("Longest Food Name: %s", food1);
  }
  else {
      printf("Longest Food Name: %s\n", food2);
  }
  
  return 0;
}
