// Tính chu vi,dien tich hình tam giác vuông
#include <stdio.h>
#include <math.h>
int main() {
    float canh;
    printf("Nhap do dai canh hinh tam giac vuong: ");
    scanf("%f", &canh);
    float chuvi= 2*canh+sqrt(2)*canh;
    float dientich=(canh*canh)/2;
    printf("Chu vi hinh tam giac vuong la: %f\n", chuvi);
    printf("Dien tich hinh tam giac vuong la: %f\n", dientich);
    return 0;
}