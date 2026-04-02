#include <stdio.h>
void swap_endian(int * x){
  unsigned char *p = (unsigned char*)x;
  unsigned char temp:

    temp = p[0];
    p[0] = p[3];
    p[3] = temp;

    temp = p[1];
    p[1] = p[2];
    p[2] = temp;
}

int main() {
  int x = 0x12345678;
  printf("Before swap: %x\n", x);
  swap_endian(&x);
  printf("After swap: %x\n", x);

  return 0;
}
