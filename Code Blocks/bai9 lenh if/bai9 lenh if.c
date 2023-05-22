#include <stdio.h>
#include <math.h>
 // bai toan: nhập tuoi tư bàn phím. xét dkien từ 18 tuoi làm thẻ ngan hàng.dưới 18 ko lam duoc
 int main()
 {
     int tuoi;
     printf("nhap tuoi:");
     scanf("%d",&tuoi);

     if(tuoi >= 18)
     {
         printf("lam the ngan hang");
     }

     else if (tuoi < 0)
     {
         printf("ban chua tung sinh ra");
     }
     else
     {
         printf("ko lam duoc the ngan hang");
     }
    return 0;
 }
