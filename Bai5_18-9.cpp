#include <iostream>
#include <string>
using namespace std;

class Nguoi {
protected:
    string hoTen;
    int namSinh;

public:
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
    void nhap() {
        Nguoi::nhap();

        cout << "Nhap ma sinh vien: ";
        getline(cin, maSV);

        cout << "Nhap diem trung binh: ";
        cin >> diemTB;
        cin.ignore();
    }

    void xuat() {
        Nguoi::xuat();
        cout << "Ma sinh vien: " << maSV << endl;
        cout << "Diem trung binh: " << diemTB << endl;
    }

    string getMaSV() {
        return maSV;
    }

    string getHoTen() {
        return hoTen;
    }
};

int main() {
    int n;
    SinhVien ds[100];

    cout << "Nhap so luong sinh vien: ";
    cin >> n;
    cin.ignore();

    for (int i = 0; i < n; i++) {
        cout << "\n--- Sinh vien thu " << i + 1 << " ---\n";
        ds[i].nhap();
    }

    cout << "\n===== DANH SACH SINH VIEN =====\n";
    for (int i = 0; i < n; i++) {
        cout << "\n--- Sinh vien thu " << i + 1 << " ---\n";
        ds[i].xuat();
    }

    int luaChon;
    string tuKhoa;
    bool timThay = false;

    cout << "\n===== TIM KIEM =====\n";
    cout << "1. Tim theo ma sinh vien\n";
    cout << "2. Tim theo ho ten\n";
    cout << "Nhap lua chon: ";
    cin >> luaChon;
    cin.ignore();

    cout << "Nhap thong tin can tim: ";
    getline(cin, tuKhoa);

    for (int i = 0; i < n; i++) {
        if (luaChon == 1 && ds[i].getMaSV() == tuKhoa) {
            ds[i].xuat();
            timThay = true;
        }

        if (luaChon == 2 && ds[i].getHoTen() == tuKhoa) {
            ds[i].xuat();
            timThay = true;
        }
    }

    if (!timThay) {
        cout << "Khong tim thay sinh vien!" << endl;
    }

    return 0;
}