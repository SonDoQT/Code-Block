#include <stdio.h>
#include <math.h>
 // nhập từ bàn phím các phép tính công và trừ, sau do nhập 2 số nguyen A và B rồi tính kết quả
 int main()
 {
     char pheptinh;
     int A;
     int B;
     int C;
     int D;
     printf("nhap phep tinh'+' or '-'\n");
     scanf("%c",&pheptinh);

     printf("nhap A:");
     scanf("%d",&A);

     printf("nhap B:");
     scanf("%d",&B);

   switch(pheptinh)
   {
    case '+':
     C = A + B;
    printf("kq la %d",C);
    break;

    case '-':
     D = A - B;
    printf("kq la %d",D);
    break;

    default:
    printf("%c ko phai phep tinh",pheptinh);
   }

        //  if(pheptinh == '+')
        //{
        // int C = A + B;
        // printf("kq la %d",C);
        //}
        //else if(pheptinh == '-')
        //{
        //   int D = A - B;
        //   printf("kq la %d",D);
        //}
         //else
        // {
        //printf("%c ko phải phep tinh",pheptinh);
         //}
    return 0;
 }
