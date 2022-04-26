#include <stdio.h> 
// In this example, we take in a single int parameter, then multiply that parameter to get our result
void multiply (int x) {
  int result = x * 2;
  printf("%d\n", result);
}
// Here we send 1 to our function, and it prints 2 (1 * 2)
int main() { 
int myNumber = 1;
multiply(myNumber);
// Here we change our myNumber data, send it to our function again, and it prints 8 (4 * 2)
myNumber = 4;
multiply(myNumber);
}