#include <iostream>
#include <cmath>
using namespace std;

int main() {
  float x, fx;

  cout << "Nhap mot so thuc: ";
  cin >> x;

  if (x > 0) {
    fx = pow(x, 2) + (3 * x) + 5;
    cout << "f(" << x << ") = " << fx << endl;
  } else {
    fx = -pow(x, 2) - (3 * x) - 5;
    cout << "f(" << x << ") = " << fx << endl;
  }

  return 0;
}