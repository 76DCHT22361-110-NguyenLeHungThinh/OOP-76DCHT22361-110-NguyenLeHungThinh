#include <iostream>
#include <vector>
#include <string>
using namespace std;

class NhanVien {
private:
    string maNV;
    string tenNV;
    double luongCB;
    double heSo;

public:
    void nhap() {
        cout << "Ma nhan vien: ";
        cin >> maNV;

        cin.ignore();
        cout << "Ten nhan vien: ";
        getline(cin, tenNV);

        cout << "Luong co ban: ";
        cin >> luongCB;

        cout << "He so: ";
        cin >> heSo;
    }

    void xuat() {
        cout << "Ma NV: " << maNV << endl;
        cout << "Ten NV: " << tenNV << endl;
        cout << "Luong co ban: " << luongCB << endl;
        cout << "He so: " << heSo << endl;
        cout << "Luong: " << luongCB * heSo << endl;
    }
};

int main() {
    int i;

    // CACH 1: DUNG MANG TINH
    
    cout << "\n========== CACH 1: MANG TINH ==========\n";

    NhanVien dsnv1[10];

    // Nhap 10 nhan vien
    for (i = 0; i < 10; i++) {
        cout << "\n=== NHAP THONG TIN NHAN VIEN THU "
             << i + 1 << " ===" << endl;
        dsnv1[i].nhap();
    }

    // Xuat 10 nhan vien
    cout << "\n========== DANH SACH NHAN VIEN ==========\n";

    for (i = 0; i < 10; i++) {
        cout << "\n=== NHAN VIEN THU " << i + 1 << " ===" << endl;
        dsnv1[i].xuat();
    }


    // CACH 2: DUNG MANG DONG - NEW
    
    cout << "\n========== CACH 2: MANG DONG ==========\n";

    NhanVien *dsnv2;

    // Cap phat mang dong 10 phan tu
    dsnv2 = new NhanVien[10];

    // Nhap 10 nhan vien
    for (i = 0; i < 10; i++) {
        cout << "\n=== NHAP THONG TIN NHAN VIEN THU "
             << i + 1 << " ===" << endl;
        dsnv2[i].nhap();
    }

    // Xuat 10 nhan vien
    cout << "\n========== DANH SACH NHAN VIEN ==========\n";

    for (i = 0; i < 10; i++) {
        cout << "\n=== NHAN VIEN THU " << i + 1 << " ===" << endl;
        dsnv2[i].xuat();
    }

    // Giai phong bo nho
    delete[] dsnv2;


    // CACH 3: DUNG VECTOR
    
    cout << "\n========== CACH 3: VECTOR ==========\n";

    vector<NhanVien> ds;

    // Nhap 10 nhan vien
    for (i = 0; i < 10; i++) {
        NhanVien nv;

        cout << "\n=== NHAP THONG TIN NHAN VIEN THU "
             << i + 1 << " ===" << endl;

        nv.nhap();

        // Them nhan vien vao vector
        ds.push_back(nv);
    }

    // Xuat 10 nhan vien
    cout << "\n========== DANH SACH NHAN VIEN ==========\n";

    for (i = 0; i < ds.size(); i++) {
        cout << "\n=== NHAN VIEN THU " << i + 1 << " ===" << endl;
        ds[i].xuat();
    }

    return 0;
}