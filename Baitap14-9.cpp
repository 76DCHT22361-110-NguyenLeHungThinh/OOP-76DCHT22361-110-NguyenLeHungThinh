#include <iostream>
#include <string>
using namespace std;

class Nguoi {
protected:
    string hoTen;
    int namSinh;

public:
    Nguoi() {
        hoTen = "";
        namSinh = 0;
    }

    Nguoi(string hoTen, int namSinh) {
        this->hoTen = hoTen;
        this->namSinh = namSinh;
    }

    void nhap() {
        cout << "Nhap ho ten: ";
        getline(cin, hoTen);

        cout << "Nhap nam sinh: ";
        cin >> namSinh;
        cin.ignore();
    }

    void xuat() {
        cout << "Ho ten: " << hoTen << endl;
        cout << "Nam sinh: " << namSinh << endl;
    }
};

class SinhVien : public Nguoi {
private:
    string maSV;
    double diemTB;

public:
    SinhVien() : Nguoi() {
        maSV = "";
        diemTB = 0;
    }

    SinhVien(string hoTen, int namSinh, string maSV, double diemTB)
        : Nguoi(hoTen, namSinh) {
        this->maSV = maSV;
        this->diemTB = diemTB;
    }

    void nhap() {
        cout << "Nhap ma sinh vien: ";
        getline(cin, maSV);

        Nguoi::nhap();

        cout << "Nhap diem trung binh: ";
        cin >> diemTB;
        cin.ignore();
    }

    void xuat() {
        cout << "Ma sinh vien: " << maSV << endl;
        Nguoi::xuat();
        cout << "Diem trung binh: " << diemTB << endl;
    }

    double getDiemTB() {
        return diemTB;
    }
};

int main() {
    // Test ham tao co doi
    SinhVien sv1("Nguyen Van Minh", 2005, "SV001", 8.5);

    cout << "===== SINH VIEN TAO BANG HAM TAO CO DOI =====" << endl;
    sv1.xuat();

    // Nhap danh sach sinh vien
    int n;
    cout << "\nNhap so luong sinh vien: ";
    cin >> n;
    cin.ignore();

    SinhVien ds[100];

    for (int i = 0; i < n; i++) {
        cout << "\n===== NHAP SINH VIEN " << i + 1 << " =====" << endl;
        ds[i].nhap();
    }

    // Sap xep giam dan theo diem trung binh
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (ds[i].getDiemTB() < ds[j].getDiemTB()) {
                SinhVien temp = ds[i];
                ds[i] = ds[j];
                ds[j] = temp;
            }
        }
    }

    // Xuat danh sach
    cout << "\n===== DANH SACH SINH VIEN GIAM DAN THEO DIEM =====" << endl;

    for (int i = 0; i < n; i++) {
        cout << "\n===== SINH VIEN " << i + 1 << " =====" << endl;
        ds[i].xuat();
    }

    return 0;
}