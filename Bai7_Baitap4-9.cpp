#include <iostream>
#include <string>
using namespace std;

class SinhVien
{
private:
    string hoTen;
    int namSinh;
    float diem[4];

public:
    // Ham nhap
    void nhap()
    {
        cout << "Nhap ho ten: ";
        getline(cin, hoTen);

        cout << "Nhap nam sinh: ";
        cin >> namSinh;

        for (int i = 0; i < 4; i++)
        {
            cout << "Nhap diem mon " << i + 1 << ": ";
            cin >> diem[i];
        }

        cin.ignore();
    }

    // Ham tinh diem trung binh
    float tinhDiemTB()
    {
        float tong = 0;

        for (int i = 0; i < 4; i++)
        {
            tong += diem[i];
        }

        return tong / 4;
    }

    // Ham xuat
    void xuat()
    {
        cout << "Ho ten: " << hoTen << endl;
        cout << "Nam sinh: " << namSinh << endl;

        for (int i = 0; i < 4; i++)
        {
            cout << "Diem mon " << i + 1 << ": "
                 << diem[i] << endl;
        }

        cout << "Diem trung binh: "
             << tinhDiemTB() << endl;
    }

    // Kiem tra dieu kien thi tot nghiep
    bool thiTotNghiep()
    {
        // Kiem tra diem trung binh
        if (tinhDiemTB() < 7)
        {
            return false;
        }

        // Kiem tra co mon nao duoi 5
        for (int i = 0; i < 4; i++)
        {
            if (diem[i] < 5)
            {
                return false;
            }
        }

        return true;
    }
};

int main()
{
    int n;

    cout << "Nhap so luong sinh vien: ";
    cin >> n;
    cin.ignore();

    SinhVien ds[100];

    // Nhap danh sach sinh vien
    cout << "\n===== NHAP THONG TIN SINH VIEN =====\n";

    for (int i = 0; i < n; i++)
    {
        cout << "\n--- Sinh vien " << i + 1 << " ---\n";
        ds[i].nhap();
    }

    // Xuat danh sach sinh vien
    cout << "\n===== DANH SACH SINH VIEN =====\n";

    for (int i = 0; i < n; i++)
    {
        cout << "\n--- Sinh vien " << i + 1 << " ---\n";
        ds[i].xuat();
    }

    // In sinh vien du dieu kien thi tot nghiep
    cout << "\n===== SINH VIEN DU DIEU KIEN THI TOT NGHIEP =====\n";

    bool coSinhVien = false;

    for (int i = 0; i < n; i++)
    {
        if (ds[i].thiTotNghiep())
        {
            coSinhVien = true;

            cout << "\n--- Sinh vien " << i + 1 << " ---\n";
            ds[i].xuat();
        }
    }

    if (!coSinhVien)
    {
        cout << "Khong co sinh vien nao du dieu kien thi tot nghiep.\n";
    }

    return 0;
}