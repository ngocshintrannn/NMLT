#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n;

    cout << "Nhap so nguyen co 3 so: ";
    cin >> n;

    if (n >= 100 && n <= 999) {
        cout << "a.\n";
        if (n % 2 == 0) {
            cout << n << " la so chan\n";
        } else {
            cout << n << " la so le\n";
        }

        cout << "b.\n";
        bool coSoChan = false;
        int temp = n;
        while (temp > 0) {
            int so = temp % 10; // lấy chữ số cuối
            if (so % 2 == 0) {
            coSoChan = true;
            break;
            }
            temp /= 10; // xoá chữ số cuối
        }

        if (coSoChan) {
            cout << n << " co it nhat mot chu so chan\n";
        } else {
            cout << n << " khong co chu so chan\n";
        }

        cout << "c.\n";
        bool toanSoChan = true;
        temp = n;
        while (temp > 0) {
            int so = temp % 10; // lấy chữ số cuối
            if (so % 2 != 0) {
            toanSoChan = false;
            break;
            }
            temp /= 10; // xoá chữ số cuối
        }

        if (toanSoChan) {
            cout << n << " co toan chu so chan\n";
        } else {
            cout << n << " khong co toan chu so chan\n";
        }

        cout << "d.\n";
        int daoNguoc = 0, goc = n;
        while (n != 0) {
            int so1 = n % 10;
            daoNguoc = daoNguoc * 10 + so1;
            n /= 10;
        }

        if (goc == daoNguoc) {
            cout << goc << " la so ganh\n";
        } else {
            cout << goc << " khong phai la so ganh\n";
        }
    } else {
        cout << "Nhap du lieu khong dung";
    }
    return 0;
}