#include <iostream>

using namespace std;

int main() {
  int n, countBay = 0;

  cin >> n;

  while (true) {
    int temp = n % 10;
    if (temp == 7) {
      countBay++;
    }
    n /= 10;
    if (n == 0) {
      break;
    }
  }

  cout << "Co " << countBay << " so bay";

  return 0;
}