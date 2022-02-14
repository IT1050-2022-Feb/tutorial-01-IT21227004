/*Exercise 4 - Functions

Implement the three functions minimum(), maximum() and multiply() below the main() function.

Do not change the code given in the main() function when you are implementing your solution.*/

#include <stdio.h>

// function declration
int minimum(int x1, int x2);
int maximum(int y1, int y2);
int multiply(int z1, int z2);

int main() {
   int no1, no2;
   printf("Enter a value for no 1 : ");
   scanf("%d", &no1);
   printf("Enter a value for no 2 : ");
   scanf("%d", &no2);
   printf("%d ", minimum(no1, no2));
   printf("%d ", maximum(no1, no2));
   printf("%d ", multiply(no1, no2));
   return 0;
}

int minimum(int x1, int x2) // function implementation
{
  int x;
  
  if(x1 > x2)
    x = x2;

  else
    x = x1;

  return x;    
}

int maximum(int y1, int y2) // function implementation
{
  int y; 

  if(y1 > y2)
    y = y1;

  else 
    y = y2;

  return y;    
}

int multiply(int z1, int z2) // function implementation
{
  int z;
  z = z1 * z2;
  return z;
}