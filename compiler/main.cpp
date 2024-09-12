#include <iostream>
#include <algorithm>

using namespace std;

int main() {
  int a, b, c;

  // Nhập ba số nguyên từ người dùng
  cout << "Nhap ba so nguyen: ";
  cin >> a >> b >> c;

  // Cách 1: Sử dụng vòng lặp for
  cout << "Cach 1: Vong lap for" << endl;
  for (int i = 0; i < 2; ++i) {
    if (a > b) swap(a, b);
    if (b > c) swap(b, c);
  }
  cout << a << " " << b << " " << c << endl;

  // Cách 2: Sử dụng vòng lặp while
  cout << "Cach 2: Vong lap while" << endl;
  int i = 0;
  while (i < 2) {
    if (a > b) swap(a, b);
    if (b > c) swap(b, c);
    i++;
  }
  cout << a << " " << b << " " << c << endl;

  // Cách 3: Sử dụng vòng lặp do while
  cout << "Cach 3: Vong lap do while" << endl;
  i = 0;
  do {
    if (a > b) swap(a, b);
    if (b > c) swap(b, c);
    i++;
  } while (i < 2);
  cout << a << " " << b << " " << c << endl;

  return 0;
}