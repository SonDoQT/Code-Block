#include <stdio.h>

int main()
{
    int x; // khai báo biến x
    x = 10; // gán giá trị vào biến
    int y = 15; // khai báo và gán giá trị

    int age = 25; // kiểu số nguyên
    float gpa = 2.05; // kiểu số thực
    char grade = 'C'; // kiểu char, khai báo ký tự đơn trong dấu '
    char name[] = "Son";// kiểu char, khai báo chuỗi dấu "
    double dan = 0.0151535;

    printf("Hello %s\n",name);
    printf("You are: %d year old\n",age);
    printf("Your averge grade is %c\n",grade);
    printf("Your gpa: %.2f\n",gpa);
    printf("dan:%lf\n");
    return 0;
}
