#include <stdio.h>
#include <unistd.h>
#include <math.h>

void num1() {
  int a;
  a = 11;
  printf("value of a is %d\n", a);
}

void num2() {
  int b;
  //b is 11!
  printf("value of b is %d\n", b);
}
int main() {
  num1();
  num2();
}

