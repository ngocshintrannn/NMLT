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
    case 0: cout << "Khong"; break;
    case 1: cout << "Mot"; break;
    case 2: cout << "Hai"; break;
    case 3: cout << "Ba"; break;
    case 4: cout << "Bon"; break;
    case 5: cout << "Nam"; break;
    case 6: cout << "Sau"; break;
    case 7: cout << "Bay"; break;
    case 8: cout << "Tam"; break;
    case 9: cout << "Chin"; break;
    default: cout << "Vui long nhap so nguyen tu 0 - 9: ";
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
#include <iostream>

using namespace std;

int main() {
  int thang, nam;

  // Nhập tháng và năm
  cout << "Nhap vao thang: ";
  cin >> thang;
  cout << "Nhap vao nam: ";
  cin >> nam;

  // Kiểm tra tháng hợp lệ
  if (thang < 1 || thang > 12) {
    cout << "Thang khong hop le!" << endl;
    return 1; // Thoát chương trình với mã lỗi 1
  }

  // Xác định mùa trong năm
  string mua;
  switch (thang) {
    case 12:
    case 1:
    case 2:
      mua = "Mua Dong";
      break;
    case 3:
    case 4:
    case 5:
      mua = "Mua Xuan";
      break;
    case 6:
    case 7:
    case 8:
      mua = "Mua Ha";
      break;
    case 9:
    case 10:
    case 11:
      mua = "Mua Thu";
      break;
  }

  // In ra màn hình kết quả
  cout << "Thang " << thang << " nam " << nam << " thuoc " << mua << endl;

  return 0;
}
```

#### Bài 3-9
Giải:
```c
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  int chiSoCu, chiSoMoi;
  float donGia;

  cout << "Nhap vao chi so cu (KW): ";
  cin >> chiSoCu;

  cout << "Nhap vao chi so moi (KW): ";
  cin >> chiSoMoi;

  int soKwTieuThu = chiSoMoi - chiSoCu;

  if (soKwTieuThu <= 50) {
    donGia = 1.750;
  } else if (soKwTieuThu <= 100) {
    donGia = 2.225;
  } else if (soKwTieuThu <= 200) {
    donGia = 2.750;
  } else {
    donGia = 3.250;
  }

  cout << fixed << setprecision(3);
  float tienDien = soKwTieuThu * donGia;
  cout << "So KW da tieu thu: " << soKwTieuThu << "KW" << endl;
  cout << "So tien dien phai tra: " << tienDien << "VND";

  return 0;
}
```

#### Bài 3-10
Giải:
```c
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    // Khai báo các biến lưu tọa độ của các điểm A, B, C
    double x1, y1, x2, y2, x3, y3;

    // Nhập tọa độ của các điểm
    cout << "Nhap toa do diem A (x1, y1): ";
    cin >> x1 >> y1;
    cout << "Nhap toa do diem B (x2, y2): ";
    cin >> x2 >> y2;
    cout << "Nhap toa do diem C (x3, y3): ";
    cin >> x3 >> y3;

    // Tính độ dài các cạnh AB, BC, CA của tam giác bằng công thức khoảng cách giữa hai điểm.
    double AB = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    double BC = sqrt(pow(x3 - x2, 2) + pow(y3 - y2, 2));
    double CA = sqrt(pow(x3 - x1, 2) + pow(y3 - y1, 2));

    // Kiểm tra xem ba điểm có tạo thành một tam giác không bằng cách kiểm tra điều kiện tổng độ dài hai cạnh bất kỳ luôn lớn hơn độ dài cạnh còn lại.
    if (AB + BC > CA && AB + CA > BC && BC + CA > AB) {
        // Xác định loại tam giác
        if (AB == BC && BC == CA) {
            cout << "Ba diem tao thanh mot tam giac deu." << endl; //Tam giác đều: Cả ba cạnh bằng nhau.
        } else if (AB == BC || BC == CA || CA == AB) {
            cout << "Ba diem tao thanh mot tam giac can." << endl; //Tam giác cân: Có hai cạnh bằng nhau.
        } else {
            cout << "Ba diem tao thanh mot tam giac thuong." << endl; //Tam giác thường: Không có cạnh nào bằng nhau.
        }

        // Tính diện tích tam giác bằng công thức Heron
        double s = (AB + BC + CA) / 2; // Nửa chu vi của tam giác
        double area = sqrt(s * (s - AB) * (s - BC) * (s - CA)); // Diện tích tam giác
        cout << "Dien tich tam giac la: " << area << endl;
    } else {
        cout << "Ba diem khong tao thanh mot tam giac." << endl;
    }

    return 0;
}
```
