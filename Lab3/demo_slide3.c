#include <stdio.h>

int main() {
    double diem;
    printf("Nhập điểm của bạn: ");
    scanf("%lf", &diem);
 /*   if(diem>=5){
        printf("Đậu!!!!\n");
    } else 
    {
        printf("Rớt$$$$$\n");
    
    if(diem>=9)
    {
        printf("Xuất sắc\n");
    }
    else if(diem>=8&&diem<9)
    {
        printf("Giỏi\n");  
    }
    else if(diem>=7&&diem<8)
    {
        printf("Khá\n");
    }
    else if(diem>=5&&diem<7)
    {
        printf("Trung bình\n");
    }
    else 
    {
        printf("Yếu\n");
    }   
    return 0;*/
    printf("Viet Nam co bao nhieu dan toc anh em:/n");
    printf("a.52\b.53\nc.54\nd.55\n");
    printf("Nhap dap an cua ban: ");
    char dapAn;
    scanf(" %s", &dapAn);
    switch (dapAn)
    {
        case 'a': printf("Ban da chon sai\n");
        break;
        case 'b': printf("Ban da chon sai\n");
        break;
        case 'c': printf("Ban da chon dung\n");
        break;
        case 'd': printf("Ban da chon sai\n");
        break;
        default:
            printf("Ban chon khong dung bo dap an (a,b,c,dn");
    }
}