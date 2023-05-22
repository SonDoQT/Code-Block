#include <stdio.h>
#include <ctype.h> // thư viện chứa hàm đổi chũ cái thường thành hoa

int main()
{
    char donvi; // khai bao bien don vi nhiêt do
    float nhietdo;//khai bao biên nhiet do


    printf("nhap don vi nhiet do hien tai la C hay F\n");
    scanf("%c",&donvi);
    //nếu người dùng nhập kí tự thường thì sao. khắc phục dùng hàm đổi ký tự thường thành hoa trong thư viện ctype.h
    donvi = toupper(donvi);

    if(donvi == 'C')
    {
        printf("don vi nhiet do hien tai la C\n");
        printf("nhiet do hien tai la:");
        scanf("%f.2",&nhietdo);
        nhietdo = (nhietdo * 1.8)+32;//đổi C sang F
        printf("nhiet do la %.2f F",nhietdo);
    }
    else if(donvi == 'F')
    {
        printf("don vi nhiet do hien tai la F\n");
        printf("nhiet do hien tai la:");
        scanf("%f.2",&nhietdo);
        nhietdo = (nhietdo -32)* 0.555;//đổi F sang C
        printf("nhiet do la %.2f C",nhietdo);
    }
    else
    {
        printf("%c khong phai don vi nhiet do",donvi);
    }
    return 0;
}

