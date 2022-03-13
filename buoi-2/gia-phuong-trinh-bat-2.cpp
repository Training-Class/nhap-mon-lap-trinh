#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, c, delta;
    float x1, x2;
    printf("Nhap a = ");
    scanf("%d", &a);
    printf("Nhap b = ");
    scanf("%d", &b);
    printf("Nhap c = ");
    scanf("%d", &c);
    if (a == 0)
    {
        // gia-phuong-trinh-bat-1.cpp
        if (b == 0)
        {
            if (c == 0)
            {
                printf("Phuong trinh vo so nghiem");
            }
            else
            {
                printf("Phuong trinh vo nghiem");
            }
        }
        else
        {
            x1 = -(float)c / b;
            printf("Phuong trinh co nghiem duy nhat la:%0.2f\n", x1);
        }
    }
    else
    {
        delta = b * b - 4 * a * c;
        if (delta < 0)
        {
            printf("Phuong trinh vo nghiem");
        }
        else if (delta == 0)
        {
            x1 = -(float)b / (2 * a);
            printf("Phuong trinh co nghiem kep: x1 = x2 = %0.2f\n", x1);
        }
        else
        {
            // gọi hàm sqrt() để tính căn bậc hai của x
            x1 = (-b + sqrt(delta)) / (2 * a);
            x2 = (-b - sqrt(delta)) / (2 * a);
            printf("Nghiem thu nhat x1 = %0.2f\n", x1);
            printf("Nghiem thu hai x2 = %0.2f\n", x2);
        }
    }
    return 0;
}