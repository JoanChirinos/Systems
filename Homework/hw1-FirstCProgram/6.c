#include <stdio.h>

int main() {
  long sumOfSquares = 0;
  long sum;

  int i;
  for (i = 1; i <= 100; i++) {
    sumOfSquares += i * i;
    sum += i;
  }
  long squareOfSums = sum * sum;

  printf("sum of squares: %li\nsquare of sums: %li\ndifference: abs(%li)\n", sumOfSquares, squareOfSums, (sumOfSquares - squareOfSums));
  return 0;
}
