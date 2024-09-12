#include <iostream>

using namespace std;

int main() {
    float chuyenCan, tbKiemTra, diemThi;

    cout << "Nhap vao diem chuyen can, tb kiem tra va diem thi: ";
    cin >> chuyenCan >> tbKiemTra >> diemThi;

    float tongKet = chuyenCan * 0.1 + tbKiemTra * 0.4 + diemThi * 0.5;

    if (tongKet >= 5) {
        cout << "Dau" << endl;
    } else {
        cout << "Rot" << endl;
    }

    return 0;
}