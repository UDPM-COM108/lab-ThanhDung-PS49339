#include <stdio.h>
int main() {
    int r;
    float chuvi, dientich, pi = 3.14;
    const float pi = 3.14;
    printf("\nNhap ban kinh hinh tron: ");
    scanf("%f", &r);
    chuvi = 2 * pi * r;
    dientich = pi * r * r;
    printf("\nChu vi hinh tron la: %f", chuvi);
    printf("\nDien tich hinh tron la: %f", dientich);
    return 0;
}