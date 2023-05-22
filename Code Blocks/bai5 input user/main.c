#include <stdio.h>

int main()
{
char ten[10];
printf("ten cua ban?\n");
          //scanf("%s",&ten);
          // scanf là chuyển vào địa chỉ biến

          // scanf xem dấu cách là kết thuc. nếu nhập do son thì đến do là dấu cánh hết chương trình.
          // khắc phục: lệnh gets(ten); or fgets
gets(ten);
          //fgets(ten,25,stdin);

          //printf("ten cua ban la %s\n",ten);
int tuoi;
printf("nhap tuoi?\n");
scanf("%d",&tuoi); // scanf là chuyển vào địa chỉ biến

                   // scanf xem dấu cách là kết thuc
printf("ten cua ban la %s,",ten);
printf(" ban %d tuoi", tuoi);
return 0;
}
