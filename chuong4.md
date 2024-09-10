#### Bài 4-4

Giải:

```c
#include <iostream>
using namespace std;

int main() {
  int n;

  cout << "Nhap mot so: ";
  tryAgain:
  cin >> n;

  if ((n < 0) || (n > 100)) {
    cout << "Vui long nhap so tu 0 den 100: ";
    goto tryAgain;
  } else {
    for (int i = n; i <= 100; ++i) {
      cout << i << " ";
    }
  }

  return 0;
}
```

#### Bài 4-5

Giải:

```c
#include <iostream>
using namespace std;

int main() {
  
  for (int i = 1; i <= 100; ++i) {
    cout << i << " ";
  }

  return 0;
}
```

#### Bài 4-6

Giải:

```c
#include <iostream>
using namespace std;

int main() {
  
  for (int i = 100; i >= 1; --i) {
    cout << i << " ";
  }

  return 0;
}
```

#### Bài 4-7

Giải:

```c
#include <iostream>
using namespace std;

int main() {
  
  for (char i = 'A'; i <= 'Z'; ++i) {
    cout << i << " ";
  }

  return 0;
}
```

#### Bài 4-8

Giải:

```c
#include <iostream>
using namespace std;

int main() {
  int n, sum;

  cout << "Enter a number: ";
  cin >> n;
  
  for (int i = 1; i <= n; ++i) {
    sum += i;
  }
  
  cout << "Sum = " << sum << endl;

  return 0;
}
```

#### Bài 4-9

Giải:

```c
#include <iostream>
using namespace std;

int main() {
  int n;
  float sum;

  cout << "Enter a number: ";
  cin >> n;
  
  for (int i = 1; i <= n; ++i) {
    sum += 1 / (float)i;
  }

  cout << "Sum = " << sum << endl;

  return 0;
}
```

#### Bài 4-10

Giải:

```c
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
```

#### Bài 4-11

Giải:

```c
#include <iostream>
#include <cmath>

using namespace std;

int main() {
  int n;

  cout << "Nhập vào một số nguyên: ";
  cin >> n;

  // Kiểm tra số chính phương
  if (sqrt(n) == (int)sqrt(n)) {
      cout << n << " là số chính phương." << endl;
  } else {
      cout << n << " không phải là số chính phương." << endl;
  }

  return 0;
}
```

#### Bài 4-12

Giải:

```c
#include <iostream>

using namespace std;

int main() {
  int n, sum = 1;

  cout << "Nhập vào một số nguyên dương: ";
  cin >> n;

  // Tìm tổng các ước số thực sự của n
  for (int i = 2; i <= n / 2; ++i) {
      if (n % i == 0) {
          sum += i;
      }
  }

  // Kiểm tra xem tổng các ước số có bằng chính nó hay không
  if (sum == n && n != 1) {
      cout << n << " là số hoàn thiện." << endl;
  } else {
      cout << n << " không phải là số hoàn thiện." << endl;
  }

  return 0;
}
```

#### Bài 4-13

Giải:

```c
#include <iostream>

using namespace std;

int main() {
  int n, demSoNTo = 0;
  bool laSoNTo;

  cout << "Nhap vao mot so nguyen duong: ";
  cin >> n;

  for (int i = 2; i <= n; i++) {
    laSoNTo = true;
    for (int j = 2; j <= i / 2; j++) {
      if (i % j == 0) {
        laSoNTo = false;
        break;
      }
    }

    if (laSoNTo) {
      demSoNTo++;
    }
  }

  cout << "So luong so nguyen to tu 1 den " << n << " la: " << demSoNTo << endl;

  return 0;
}
```

#### Bài 4-14

Giải:

```c
#include <iostream>
#include <cmath>
using namespace std;

int main() {
  int n, demCPhuong = 0;

  cout << "Nhap vao mot so nguyen duong: ";
  cin >> n;

  for (int i = 1; i <= n; i++) {
    if (sqrt(i) == (int)sqrt(i)) {
      demCPhuong++;
    } 
  }

  cout << "So luong so chinh phuong tu 1 den " << n << " la: " << demCPhuong << endl;

  return 0;
}
```

#### Bài 4-15

Giải:

```c
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
            count++;
        }
    }

    cout << "Cac so hoan thien tu 1 den " << n << " la: " << count;

    return 0;
}
```

#### Bài 4-16

Giải:

```c
#include <iostream>

using namespace std;

int main() {
  int n, demSoNTo = 0;
  bool laSoNTo;

  cout << "Nhap vao mot so nguyen duong: ";
  cin >> n;

  for (int i = 2; i <= n; i++) {
    laSoNTo = true;
    for (int j = 2; j <= i / 2; j++) {
      if (i % j == 0) {
        laSoNTo = false;
        break;
      }
    }

    if (laSoNTo) {
      cout << i << " ";
      demSoNTo++;
    }
  }

  cout << endl;
  cout << "So luong so nguyen to tu 1 den " << n << " la: " << demSoNTo << endl;

  return 0;
}
```

#### Bài 4-17

Giải:

```c
#include <iostream>
#include <cmath>
using namespace std;

int main() {
  int n, demCPhuong = 0;

  cout << "Nhap vao mot so nguyen duong: ";
  cin >> n;

  for (int i = 1; i <= n; i++) {
    if (sqrt(i) == (int)sqrt(i)) {
      cout << i << " ";
      demCPhuong++;
    } 
  }

  cout << endl;
  cout << "So luong so chinh phuong tu 1 den " << n << " la: " << demCPhuong << endl;

  return 0;
}
```

#### Bài 4-18

Giải:

```c
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
```
