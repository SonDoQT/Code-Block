#include <stdio.h>
#include <math.h>

int main()
{
    const float PI = 3.14159;
    int R;

    printf("Nhap R:");
    scanf("%d",&R);

    float CV = 2* PI* R;
    float Dt = PI*R*R;

    printf("kq chu vi la: %f\n",CV);
    printf("kq dien tich là: %f\n",Dt);

    return 0;

}
