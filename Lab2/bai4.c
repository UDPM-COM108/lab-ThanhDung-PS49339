#include <stdio.h>
int main() {
    float toan, ly, hoa, dtb;
    printf("Nhap diem toan: ");
    scanf("%f", &toan);
    printf("Nhap diem ly: ");
    scanf("%f", &ly);
    printf("Nhap diem hoa: ");
    scanf("%f", &hoa);
    dtb = (toan + ly + hoa) / 3;
    printf("Diem trung binh cua 3 mon la: %.2f\n", dtb);
    return 0;
}