#include <stdio.h>
#include <unistd.h>

int main() {
  struct mine {
    int num;
    int num2;
  };
  struct mine m;
  m.num = 1;
  m.num2 = 2;
  printf("%p\n", &m);
  printf("%p\n", &m.num);
  printf("%p\n", &m.num2);
}

