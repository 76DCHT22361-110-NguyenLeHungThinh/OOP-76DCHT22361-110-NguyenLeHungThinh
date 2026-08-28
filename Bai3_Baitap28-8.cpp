#include <iostream>
using namespace std;

class MaTran
{
private:
    int soHang;
    int soCot;
    int a[100][100];

public:
    // Ham nhap
    void nhap()
    {
        cout << "Nhap so hang: ";
        cin >> soHang;

        cout << "Nhap so cot: ";
        cin >> soCot;

        cout << "Nhap cac phan tu:\n";
        for (int i = 0; i < soHang; i++)
        {
            for (int j = 0; j < soCot; j++)
            {
                cin >> a[i][j];
            }
        }
    }

    // Ham xuat
    void xuat()
    {
        for (int i = 0; i < soHang; i++)
        {
            for (int j = 0; j < soCot; j++)
            {
                cout << a[i][j] << "\t";
            }
            cout << endl;
        }
    }

    // Ham ban cong hai ma tran
    friend MaTran operator+(MaTran A, MaTran B);
};

// Dinh nghia ham ban
MaTran operator+(MaTran A, MaTran B)
{
    MaTran C;

    C.soHang = A.soHang;
    C.soCot = A.soCot;

    for (int i = 0; i < A.soHang; i++)
    {
        for (int j = 0; j < A.soCot; j++)
        {
            C.a[i][j] = A.a[i][j] + B.a[i][j];
        }
    }

    return C;
}

int main()
{
    MaTran A, B, C;

    cout << "===== NHAP MA TRAN A =====" << endl;
    A.nhap();

    cout << "\n===== NHAP MA TRAN B =====" << endl;
    B.nhap();

    // Cong hai ma tran bang ham ban
    C = A + B;

    cout << "\n===== MA TRAN A =====" << endl;
    A.xuat();

    cout << "\n===== MA TRAN B =====" << endl;
    B.xuat();

    cout << "\n===== MA TRAN A + B =====" << endl;
    C.xuat();

    return 0;
}