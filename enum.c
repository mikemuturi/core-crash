#include <stdio.h>

enum Size
{
	Small,
	Medium,
	Large,
	ExtraLarge
};
int main()
{
  enum Size ShoeSize;

  ShoeSize = Large;

  printf("%d \n", ShoeSize);

  return 0;
}

