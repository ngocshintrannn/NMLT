#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
  int a, b, c;

  cout << "Chieu dai canh a, b, c cua tam giac: ";
  cin >> a >> b >> c;

  float p = (a + b + c) / 2;
  float s = sqrt(p * (p - a) * (p - b) * (p - c));
  float r = s / p;
  float R = (a * b * c) / (4 * s);

  cout << fixed << setprecision(3);
  cout << "Chu vi tam giac: " << p << endl;
  cout << "Dien tich tam giac: " << s << endl;
  cout << "Ban kinh duong tron noi tiep tam giac: " << r << endl;
  cout << "Ban kinh duong tron ngoai tiep tam giac: " << R;
  
  return 0;
}