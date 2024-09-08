#### Bài 3-3
Giải:
```c
#include <iostream>
using namespace std;

int main() {
  int n;

  cout << "Nhap mot so nguyen duong: ";
  cin >> n;

  if (n % 2 == 0) {
    cout << n << " la so chan";
  } else {
    cout << n << " la so le";
  }

  return 0;
}
```

#### Bài 3-4
Giải:
```c
#include <iostream>
using namespace std;

int main() {
  int n1,n2,n3;

  cout << "Nhap ba so nguyen duong: ";
  cin >> n1 >> n2 >> n3;

  if (n1 > n2 && n1 > n3) {
    cout << n1 << " la so lon nhat";
  } else if (n2 > n3) {
    cout << n2 << " la so lon nhat";
  } else {
    cout << n3 << " la so lon nhat";
  }

  return 0;
}
```

#### Bài 3-5
Giải:
```c
#include <iostream>
#include <limits>

using namespace std;

int main() {
  int n;

  cout << "Nhap mot so tu 0 - 9: ";
  try_again:
  while (!(cin >> n)) { // Kiểm tra xem người dùng có nhập số nguyên hay không
    cin.clear(); // Xóa trạng thái lỗi của cin
    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Loại bỏ dữ liệu không hợp lệ khỏi bộ đệm
    cout << "Vui long nhap so nguyen tu 0 - 9: ";
  }

  switch (n) {
    case 0:
      cout << "Khong";
      break;
    case 1:
      cout << "Mot";
      break;
    case 2:
      cout << "Hai";
      break;
    case 3:
      cout << "Ba";
      break;
    case 4:
      cout << "Bon";
      break;
    case 5:
      cout << "Nam";
      break;
    case 6:
      cout << "Sau";
      break;
    case 7:
      cout << "Bay";
      break;
    case 8:
      cout << "Tam";
      break;
    case 9:
      cout << "Chin";
      break;
    default:
      cout << "Vui long nhap so nguyen tu 0 - 9: ";
      goto try_again;
  }
  return 0;
}
```

#### Bài 3-6
Giải:
```c
#include <iostream>
using namespace std;

int main() {
  int a, b, c, temp;

  cout << "Nhap 3 so nguyen: ";
  cin >> a >> b >> c;

  // Sắp xếp 3 số theo thứ tự tăng dần
  if (a > b) {
    temp = a;
    a = b;
    b = temp;
  }
  if (a > c) {
    temp = a;
    a = c;
    c = temp;
  }
  if (b > c) {
    temp = b;
    b = c;
    c = temp;
  }

  // In ra 3 số theo thứ tự tăng dần
  cout << "Thu tu tang dan: " << a << " " << b << " " << c << endl;

  return 0;
}
```

#### Bài 3-7
Giải:
```c
#include <iostream>
#include <cmath>

using namespace std;

int main() {
  double a, b, c;

  cout << "Nhap vao 3 canh cua tam giac: ";
  cin >> a >> b >> c;

  // Kiểm tra xem có phải tam giác hợp lệ
  if (a + b > c && a + c > b && b + c > a) {
    // Tính chu vi
    double chuVi = a + b + c;

    // Tính diện tích (Công thức Heron)
    double p = chuVi / 2; // Nửa chu vi
    double dienTich = sqrt(p * (p - a) * (p - b) * (p - c));

    // Xác định loại tam giác
    if (a == b && b == c) {
      cout << "Tam giac deu" << endl;
    } else if (a == b || a == c || b == c) {
      cout << "Tam giac can" << endl;
    } else if (a*a + b*b == c*c || a*a + c*c == b*b || b*b + c*c == a*a) {
      cout << "Tam giac vuong" << endl;
    } else {
      cout << "Tam giac thuong" << endl;
    }

    // In kết quả
    cout << "Chu vi: " << chuVi << endl;
    cout << "Dien tich: " << dienTich << endl;
  } else {
    cout << "Ba canh da cho khong tao thanh tam giac." << endl;
  }

  return 0;
}
```

#### Bài 3-8
Giải:
```c
```

#### Bài 3-9
Giải:
```c
```

#### Bài 3-10
Giải:
```c
```
