#include <stdio.h>

int main()
{
// các phép toán tử trong c
// + ( addition)
// -   subtraction
// *   multiplication
// /   division chia láy phần nguyên
// %   modulus chia lấy dư áp dụng cho số nguyên
// ++  increment tăng lên 1 giá trị
// --  decrement giảm đi 1 giá trị
 int x = 5;
 int y = 2;
 int z = x + y;
 int j = x - y;
 int k = x * y;
 float g = x/ (float) y; // có thể chia lấy nguyên thì khai báo int
 int f = x%y;// toán chia lấy dư để xác định số lẻ, chẵn
 x++;
 y--;

 printf("kq cong la %d\n",z);
 printf("kq tru la %d\n",j);
 printf("kq nhan %d\n",k);
 printf("kq chia %.2f\n",g);
 printf("kq lay du %d\n",f);
 printf("kq %d\n",x);
 printf("kq %d\n",y);
 return 0;
}
