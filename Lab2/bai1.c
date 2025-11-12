#include <stdio.h>
int main() {
    int a, b, sum, hieu;
    printf("\nNhap 2 so nguyen");
    scanf("%d%d", &a, &b);
    sum = a + b;
    hieu = a - b;
    printf("\nTong cua 2 so nguyen la %d", sum);
    printf("\nHieu cua 2 so nguyen la %d", hieu);
    return 0;
}
