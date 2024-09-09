#include <iostream>
using namespace std;

int main() {
  int n;
  bool laSoNguyenTo = true;

  cout << "Nhap mot so: ";
  cin >> n;
  
  if (n <= 1) {
    laSoNguyenTo = false;
  } else {
    for (int i = 2; i <= n / 2; i++) {
      if (n % i == 0) {
        laSoNguyenTo = false;
        break;
      }
    }
  }

  if (laSoNguyenTo) {
    cout << n << " la so nguyen to" << endl;
  } else {
    cout << n << " khong phai la so nguyen to" << endl;
  }

  return 0;
}