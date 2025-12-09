// Bài 1: Xd chương trình đếm nguyên âm và phụ âm của chuỗi
//---- Nguyên âm: a, i, e, u, o -----
#include <stdio.h>
#include <string.h>

/* int main() {
    char s[100];
    printf("Xin nhap chuoi: ");
    gets(s);
    int i=0;
    int n=0;      //bien de dem so nguyen am
    int p=0;      //bien de dem so phu am
//Khi gia tri cuoi cung cua mang != null
    while(s[i++]!='\0')
    {
        if(s[i] == 'a' || s[i]=='i' || s[i]== 'e' || s[i]== 'u' || s[i]== 'o')
        {
            n++;
        }else{
            p++;
        }       
    }
    printf("Chuoi '%s' co chua: %d nguyen am && %d phu am.", s,n,p);
    return 0;
}*/

// Bài 2: Xđ chương trình đăng nhập username and password
int main(){
char s1_true[100] = "Gonguen";
char s2_true[100] = "123123";
char s1[100];
char s2[100];
printf("Nhap username: ");
scanf("%s", &s1);
printf("\nNhap password: ");
scanf("%s", &s2);
    while (strstr(s1,s2) == 0)
    {
        if(strcmp(s1,s1_true)==0 && strcmp(s2,s2_true)==0){
        printf("\ndang nhap thanh cong");
        }else
        {
            printf("Sai tk hoac MK");
        }  
        return 0;
    }
}
