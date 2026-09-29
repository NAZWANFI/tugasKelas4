#include <stdio.h>
int main(void) {
 float tabel[3][2] = {
 {0.50, 218.5},
 {0.52, 219.0},
 {0.49, 220.2}
 };
 printf("Tegangan pengukuran ke-2: %.1f V\n", tabel[1][1]);
 return 0;
}