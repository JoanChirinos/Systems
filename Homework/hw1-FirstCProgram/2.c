#include <stdio.h>

int main() {
  int fibs[2] = {1, 1};
  int sum = 0;
  while (fibs[1] < 4000000) {
    if (fibs[1] % 2 == 0) sum += fibs[1];
    int temp = fibs[1];
    fibs[1] = fibs[0] + fibs[1];
    fibs[0] = temp;
  }
  printf("sum: %d\n", sum);
  return 0;
}
