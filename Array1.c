// Program to take 5 values from the user and store them in an array
// Print the elements stored in the array
#include <stdio.h>

int main() {
  int values[100], n;
  printf("Enter how many integers you want to display:");
  scanf("%d", &n);
  printf("Enter %d integers:", n);

  // taking input and storing it in an array
  for(int i = 0; i < n; ++i) {
     scanf("%d", &values[i]);
  }

  printf("Displaying integers:");

  // printing elements of an array
  for(int i = 0; i < n; ++i) {
     printf("%d ", values[i]);
  }
  return 0;
}