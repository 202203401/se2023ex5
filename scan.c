#include <stdio.h>

int main(void) {
  int r;
  printf("Please input your favorite naturalnumber (not over 100)");
  scanf("%d", &r);
  printf("area: %d\n", r * r * 3);
  printf("circumference: %d\n", 2 * r * 3);
}