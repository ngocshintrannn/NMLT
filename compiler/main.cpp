#include <iostream>

using namespace std;

int main() {
    long long n;

    cout << "Nhập vào một số nguyên dương (tối đa 9 chữ số): ";
    cin >> n;

    // Kiểm tra số âm và số vượt quá giới hạn
    if (n <= 0 || n > 999999999) {
        cout << "Số không hợp lệ." << endl;
        return 1; // Thoát chương trình với mã lỗi
    }

    int soChuSo = 0;
    long long temp = n; 

    // Đếm số chữ số
    while (temp > 0) {
        temp /= 10;
        soChuSo++;
    }

    cout << "Số " << n << " có " << soChuSo << " chữ số." << endl;

    return 0;
}