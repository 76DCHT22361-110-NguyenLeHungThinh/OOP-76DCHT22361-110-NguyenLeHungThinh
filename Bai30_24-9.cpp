#include <iostream>
#include <cmath>
using namespace std;

class SP1
{
private:
    float phanThuc;
    float phanAo;

public:
    SP1()
    {
        phanThuc = 0;
        phanAo = 0;
    }

    void nhap()
    {
        cin >> phanThuc >> phanAo;
    }

    void in()
    {
        cout << phanThuc;
        if (phanAo >= 0)
            cout << " + " << phanAo << "i";
        else
            cout << " - " << -phanAo << "i";
    }

    float module()
    {
        return sqrt(phanThuc * phanThuc + phanAo * phanAo);
    }
};

int main()
{
    SP1 sp;

    sp.nhap();
    sp.in();

    cout << "\nModule = " << sp.module();

    return 0;
}