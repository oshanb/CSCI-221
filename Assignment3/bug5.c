#include <stdlib.h>
int main() {
 int *p = malloc(sizeof(int) * 3);
 for (int i = 0; i < 5; i++) {
 p[i] = i * 2;
 }
 free(p);
 return 0;
}