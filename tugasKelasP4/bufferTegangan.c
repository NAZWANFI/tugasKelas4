#include <stdio.h>
int main(void) {
 float bufferTegangan[5] = {219.8, 220.1, 220.5, 219.9, 220.2};
 bufferTegangan[2] = 220.8;
 printf("Sampel 1: %.1f V\n", bufferTegangan[0]);
 printf("Sampel 2: %.1f V\n", bufferTegangan[1]);
 printf("Sampel 3: %.1f V\n", bufferTegangan[2]);
 printf("Sampel 4: %.1f V\n", bufferTegangan[3]);
 printf("Sampel 5: %.1f V\n", bufferTegangan[4]);
 return 0;
}