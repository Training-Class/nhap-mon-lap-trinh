#include <stdio.h>

int main()
{
    // Nhap so chiec ao can mua
    // Tien mot chiec ao
    // In So tien
    int soAo, tien;
    printf("Nhap so ao can mua = ");
    scanf("%d", &soAo);
    printf("Tien mot chiec ao = ");
    scanf("%d", &tien);

    int gia = soAo * tien;
    printf("Gia = %d\n", gia);

    return 0;
}