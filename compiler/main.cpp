#include <iostream>

using namespace std;

// Hàm kiểm tra số hoàn thiện
bool laSoHoanThien(int n) {
    if (n <= 1) {
        return false; // 1 và các số nhỏ hơn không phải số hoàn thiện
    }

    int sum = 1;
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) {
            sum += i;
            if (i * i != n) {
                sum += n / i; 
            }
        }
    }

    return (sum == n);
}

int main() {
    int n, count = 0;

    cout << "Nhap vao so nguyen duong n: ";
    cin >> n;

    for (int i = 1; i <= n; ++i) {
        if (laSoHoanThien(i)) {
          cout << i << " ";
            count++;
        }
    }

    cout << endl;
    cout << "Cac so hoan thien tu 1 den " << n << " la: " << count;

    return 0;
}