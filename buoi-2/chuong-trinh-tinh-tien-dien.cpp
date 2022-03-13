#include <stdio.h>
#define GIA100 1000
#define GIA200 1500
#define GIAVESAU 2500

int main()
{
    int kw;
    printf("Nhap = ");
    scanf("%d", &kw);

    int price;

    if (kw > 200)
    {
        price = GIA100 * 100 + GIA200 * (200 - 100) + GIAVESAU * (kw - 100 - (200 - 100));
    }
    else if ((kw <= 200) && (kw > 100))
    {
        price = GIA100 * 100 + (kw - 100) * GIA200;
    }
    else
    {
        price = GIA100 * kw;
    }

    printf("Tien = %d", price);
    return 0;
}