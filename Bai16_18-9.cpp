#include <iostream>
#include <string>
using namespace std;

class MonHoc {
protected:
    string tenMonHoc;
    double CC, KT, DT;

public:
    void nhap() {
        cout << "Nhap ten mon hoc: ";
        getline(cin, tenMonHoc);

        cout << "Nhap diem chuyen can: ";
        cin >> CC;

        cout << "Nhap diem kiem tra: ";
        cin >> KT;

        cout << "Nhap diem thi: ";
        cin >> DT;
        cin.ignore();
    }

    void xuat() {
        cout << "Ten mon hoc: " << tenMonHoc << endl;
        cout << "Diem chuyen can: " << CC << endl;
        cout << "Diem kiem tra: " << KT << endl;
        cout << "Diem thi: " << DT << endl;
    }

    double tinhDiemHocPhan() {
        return CC * 0.1 + KT * 0.2 + DT * 0.7;
    }
};

class SinhVien : public MonHoc {
private:
    string hoTen;
    string lop;
    string maSV;

public:
    void nhap() {
        cout << "Nhap ho ten: ";
        getline(cin, hoTen);

        cout << "Nhap lop: ";
        getline(cin, lop);

        cout << "Nhap ma sinh vien: ";
        getline(cin, maSV);

        MonHoc::nhap();
    }

    void xuat() {
        cout << "Ho ten: " << hoTen << endl;
        cout << "Lop: " << lop << endl;
        cout << "Ma sinh vien: " << maSV << endl;

        MonHoc::xuat();

        cout << "Diem hoc phan: " << tinhDiemHocPhan() << endl;
    }

    bool biCamThi() {
        return CC < 5 || KT == 0;
    }
};

int main() {
    int n;
    SinhVien ds[100];

    cout << "Nhap so luong sinh vien: ";
    cin >> n;
    cin.ignore();

    for (int i = 0; i < n; i++) {
        cout << "\n===== SINH VIEN THU " << i + 1 << " =====\n";
        ds[i].nhap();
    }

    cout << "\n===== DANH SACH SINH VIEN BI CAM THI =====\n";

    bool coSinhVien = false;

    for (int i = 0; i < n; i++) {
        if (ds[i].biCamThi()) {
            ds[i].xuat();
            cout << "--------------------------\n";
            coSinhVien = true;
        }
    }

    if (!coSinhVien) {
        cout << "Khong co sinh vien bi cam thi!" << endl;
    }

    return 0;
}