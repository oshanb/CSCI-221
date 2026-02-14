#include <stdlib.h>
int main() {
 int *p = malloc(sizeof(int) * 10);
 p[0] = 42;
 return 0;
}