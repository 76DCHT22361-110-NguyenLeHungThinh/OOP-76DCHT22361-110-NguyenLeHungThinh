#include <stdio.h>

struct nhanvien
{
    char MANV[20];
    char TENNV[50];
    float luongcoban;
    float heso;
};

int main()
{
    int n;
    struct nhanvien dsnv[100];

    printf("Nhap so luong nhan vien: ");
    scanf("%d", &n);

    return 0;
}