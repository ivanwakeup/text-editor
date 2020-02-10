#include <stdio.h>
#include <unistd.h>

int main() {
  char* c = "this";
  write(1, c, 3);
}

