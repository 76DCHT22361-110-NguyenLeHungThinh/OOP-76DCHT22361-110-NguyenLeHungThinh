#include <iostream>
using namespace std;

class MaTran
{
private:
    int soHang;
    int soCot;
    int a[100][100];

public:
    // Phuong thuc nhap ma tran
    void nhap()
    {
        cout << "Nhap so hang: ";
        cin >> soHang;

        cout << "Nhap so cot: ";
        cin >> soCot;

        cout << "Nhap cac phan tu cua ma tran:\n";
        for (int i = 0; i < soHang; i++)
        {
            for (int j = 0; j < soCot; j++)
            {
                cout << "a[" << i << "][" << j << "] = ";
                cin >> a[i][j];
            }
        }
    }

    // Phuong thuc xuat ma tran
    void xuat()
    {
        cout << "Ma tran:\n";

        for (int i = 0; i < soHang; i++)
        {
            for (int j = 0; j < soCot; j++)
            {
                cout << a[i][j] << "\t";
            }
            cout << endl;
        }
    }
};

int main()
{
    MaTran A;

    cout << "===== NHAP MA TRAN =====\n";
    A.nhap();

    cout << "\n===== XUAT MA TRAN =====\n";
    A.xuat();

    return 0;
}