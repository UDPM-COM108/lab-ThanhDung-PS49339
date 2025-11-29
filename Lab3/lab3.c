#include <stdio.h>

int main() {
    double dtb;
    printf("Nhap diem trung binh cua sinh vien: ");
    scanf("%lf", &dtb);
    if(dtb>9) {
        printf("Hoc luc: Xuat sac\n");
    } 
    else if(dtb>=8&&dtb<9)
    {
         printf("Hoc luc: Gioi\n");
    }  
    else if(dtb>=7&&dtb<8)
    {
         printf("Hoc luc: Kha\n");
    }  
    else if(dtb>=5&&dtb<7)
    {
         printf("Hoc luc: Trung binh\n");
    }  
    else 
    {
         printf("Hoc luc: Yeu\n");
    }
    return 0;
}