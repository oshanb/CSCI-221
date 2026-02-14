#include <stdlib.h>
#include <stdio.h>
int main() {
 int *p = malloc(sizeof(int));
 *p = 10;
 free(p);
 printf("%d\n", *p);
 return 0;
}