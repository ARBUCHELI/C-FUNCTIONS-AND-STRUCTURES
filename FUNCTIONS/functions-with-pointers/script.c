#include <stdio.h>

// Write your code below
void incrementAge(int* agePointer)
{
  *agePointer += 1;
}

int main(void) {
  int age = 46;
  incrementAge(&age);
  printf("%i\n", age);
}