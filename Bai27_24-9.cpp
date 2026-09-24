#include <iostream>
using namespace std;

class PS1
{
private:
    int tu, mau;

public:
    void nhap()
    {
        cin >> tu;
        do
        {
            cin >> mau;
        } while (mau == 0);
    }

    void in()
    {
        cout << tu << "/" << mau;
    }

    void toiGian()
    {
        int a = tu, b = mau;

        while (b != 0)
        {
            int r = a % b;
            a = b;
            b = r;
        }

        if (a < 0)
            a = -a;

        tu /= a;
        mau /= a;

        if (mau < 0)
        {
            tu = -tu;
            mau = -mau;
        }
    }
};

int main()
{
    PS1 ps;

    ps.nhap();
    ps.toiGian();
    ps.in();

    return 0;
}