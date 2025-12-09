#include <stdio.h>
int main() {
    int dai, rong, chuvi, dientich;
    printf("\nNhap chieu dai va chieu rong hinh chu nhat: ");
    scanf("%d%d", &dai, &rong);
    chuvi = (dai + rong) * 2;
    dientich = dai * rong;
    printf("\nChu vi hinh chu nhat la: %d", chuvi);
    printf("\nDien tich hinh chu nhat la: %d", dientich);
    return 0;
}
 