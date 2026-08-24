#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class NhanVien
{
private:
    string maNV;
    string tenNV;
    double luongCB;
    double heSo;

public:
    // Constructor khong doi
    NhanVien()
    {
        maNV = "";
        tenNV = "";
        luongCB = 0;
        heSo = 0;
    }

    // Constructor co doi
    NhanVien(string ma, string ten, double luong, double hs)
    {
        maNV = ma;
        tenNV = ten;
        luongCB = luong;
        heSo = hs;
    }

    // Ham xuat
    void xuat()
    {
        cout << left
             << setw(15) << maNV
             << setw(25) << tenNV
             << setw(15) << luongCB
             << setw(10) << heSo
             << setw(15) << luongCB * heSo
             << endl;
    }
};

int main()
{
    int n;

    cout << "Nhap so luong nhan vien: ";
    cin >> n;

    // Cach 2: Su dung mang dong
    NhanVien *dsnv = new NhanVien[n];

    // Nhap n nhan vien
    for (int i = 0; i < n; i++)
    {
        string ma, ten;
        double luong, hs;

        cout << "\n=== NHAP NHAN VIEN THU " << i + 1 << " ===" << endl;

        cout << "Ma nhan vien: ";
        cin >> ma;

        cin.ignore();

        cout << "Ten nhan vien: ";
        getline(cin, ten);

        cout << "Luong co ban: ";
        cin >> luong;

        cout << "He so: ";
        cin >> hs;

        // Su dung constructor co doi
        dsnv[i] = NhanVien(ma, ten, luong, hs);
    }

    // Xuat danh sach theo cot
    cout << "\n\n================ DANH SACH NHAN VIEN ================\n";

    cout << left
         << setw(15) << "Ma NV"
         << setw(25) << "Ten NV"
         << setw(15) << "Luong CB"
         << setw(10) << "He so"
         << setw(15) << "Luong"
         << endl;

    cout << string(80, '-') << endl;

    for (int i = 0; i < n; i++)
    {
        dsnv[i].xuat();
    }

    // Giai phong bo nho
    delete[] dsnv;

    return 0;
}