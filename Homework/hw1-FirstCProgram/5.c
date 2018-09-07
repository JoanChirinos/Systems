#include <stdio.h>

int main() {
  int mult = 1;
  int done = 0;
  while (done == 0) {
    int i;
    for (i = 1; i <= 20; i++) {
      if (mult % i != 0) {
        mult += 1;
        break;
      }
      else if (i == 20 && mult % i == 0) {
        done = 1;
      }
    }
  }
  printf("multiple: %d\n", mult);
  return 0;
}
