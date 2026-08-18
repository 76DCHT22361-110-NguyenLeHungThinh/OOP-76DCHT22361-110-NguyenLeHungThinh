#include <stdio.h>

struct nhanvien
{
    char MANV[20];
    char TENNV[50];
    float luongcoban;
    float heso;
};

typedef struct nhanvien nv;

void nhap(nv *x)
{
    printf("Nhap ma nhan vien: ");
    scanf("%s", x->MANV);

    printf("Nhap ten nhan vien: ");
    scanf(" %[^\n]", x->TENNV);

    printf("Nhap luong co ban: ");
    scanf("%f", &x->luongcoban);

    printf("Nhap he so: ");
    scanf("%f", &x->heso);
}

void xuat(nv *x)
{
    printf("Ma nhan vien: %s\n", x->MANV);
    printf("Ten nhan vien: %s\n", x->TENNV);
    printf("Luong co ban: %.2f\n", x->luongcoban);
    printf("He so: %.2f\n", x->heso);
}

int main()
{
    int n;
    nv dsnv[100];

    printf("Nhap so nhan vien: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("\n--- Nhan vien thu %d ---\n", i + 1);
        nhap(&dsnv[i]);
    }

    printf("\n===== DANH SACH NHAN VIEN =====\n");

    for (int i = 0; i < n; i++)
    {
        xuat(&dsnv[i]);
    }

    return 0;
}