#include <iostream>
#include <string>
using namespace std;

class SinhVien
{
private:
    string hoTen;
    int namSinh;
    float diem[5];

public:
    // Ham nhap thong tin sinh vien
    void nhap()
    {
        cout << "Nhap ho ten: ";
        getline(cin, hoTen);

        cout << "Nhap nam sinh: ";
        cin >> namSinh;

        for (int i = 0; i < 5; i++)
        {
            cout << "Nhap diem mon " << i + 1 << ": ";
            cin >> diem[i];
        }

        cin.ignore();
    }

    // Ham xuat thong tin sinh vien
    void xuat()
    {
        cout << "Ho ten: " << hoTen << endl;
        cout << "Nam sinh: " << namSinh << endl;

        for (int i = 0; i < 5; i++)
        {
            cout << "Diem mon " << i + 1 << ": " << diem[i] << endl;
        }

        cout << "Diem trung binh: " << tinhDiemTB() << endl;
    }

    // Ham tinh diem trung binh
    float tinhDiemTB()
    {
        float tong = 0;

        for (int i = 0; i < 5; i++)
        {
            tong += diem[i];
        }

        return tong / 5;
    }

    // Ham kiem tra va in cac mon phai thi lai
    void thiLai()
    {
        bool coThiLai = false;

        for (int i = 0; i < 5; i++)
        {
            if (diem[i] < 5)
            {
                coThiLai = true;
                cout << "Mon " << i + 1
                     << " - Diem: " << diem[i] << endl;
            }
        }

        if (!coThiLai)
        {
            cout << "Khong co mon phai thi lai." << endl;
        }
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

    // In sinh vien phai thi lai
    cout << "\n===== SINH VIEN PHAI THI LAI =====\n";

    for (int i = 0; i < n; i++)
    {
        cout << "\n--- Sinh vien " << i + 1 << " ---\n";

        ds[i].thiLai();
    }

    return 0;
}