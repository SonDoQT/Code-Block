#include <stdio.h>

int main()
{
 char loai;
 printf("nhap loai:");
 scanf("%c",&loai);

 switch(loai) // khác giữa switch case và if e
 {
 case 'A':
    printf("ban loai tot");
    break;
 case 'B':
    printf("ban loai kha");
    break;
 case 'C':
    printf("ban loai trung binh");
    break;
 case 'D':
    printf("ban loai yeu");
    break;
 default:
    printf("khong tim thay");
 }
return 0;
}
