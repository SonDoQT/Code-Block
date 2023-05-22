#include <stdio.h>
#include <math.h> // thư viện toán học

int main()
{
    double A = sqrt(9); // căn bậc 2 của 9
    double B = pow(2,4);// 2^4
    int C = round(3.18);// làm tròn số theo quy tắc 0.5
    int D = floor(3.99);// làm tròn xuống
    int E = ceil(3.12);// làm tròn lên
    int F = abs(-20); // trị tuyệt đối số nguyên
    double G = fabs(-50.3);// trị tuyệt đối số thực
    double I = log(3);// hàm logarit.
    double K = sin(45);
    double S = cos(45);
    double Z = tan(45);

    printf("kq la %.3lf\n",A);
    printf("kq la %.3lf\n",B);
    printf("kq la %d\n",C);
    printf("kq la %d\n",D);
    printf("kq la %d\n",E);
    printf("kq la %d\n",F);
    printf("kq la %lf\n",G);
    printf("kq la %lf\n",I);
    printf("kq la %lf\n",K);
    printf("kq la %lf\n",S);
    printf("kq la %lf\n", Z); // double thì kiểu định dạng %lf

    return 0;
}









