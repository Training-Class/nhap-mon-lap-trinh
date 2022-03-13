#include <stdio.h>
// Giải phương trình bật nhất bx+c = 0
int main()
{
    int b, c;
    printf("Nhap b = ");
    scanf("%b", &b);

    printf("Nhap c = ");
    scanf("%c", &c);

    if (b == 0)
    {
        if (c == 0)
            printf("Phuong trinh vo so nghiem");
        else
            printf("Phuong trinh vo nghiem ");
    }
    else
    {
        double nghiem = (double)-b / c;
        printf("Phuong trinh co nghiem la: ", nghiem);
    }
    return 0;
}