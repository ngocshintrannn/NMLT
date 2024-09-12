# Buổi 1

#### Bài 1

```c
#include <iostream>

using namespace std;

int main() {
  int a, b;

  cout << "Nhap vao a, b: ";
  cin >> a >> b;

  (a > b) ? cout << "a lon hon b" : cout << "b lon hon a";

  return 0;
}
```

#### Bài 2

```c
#include <iostream>

using namespace std;

int main() {
  int thang;

  cout << "Nhap vao thang: ";
  cin >> thang;

  if (thang >= 3 && thang <= 5) {
        cout << "Hien dang la mua xuan" << endl;
  } else if (thang >= 6 && thang <= 8) {
      cout << "Hien dang la mua he" << endl;
  } else if (thang >= 9 && thang <= 11) {
      cout << "Hien dang la mua thu" << endl;
  } else if (thang == 12 || thang == 1 || thang == 2) {
      cout << "Hien dang la mua dong" << endl;
  } else {
      cout << "Thang khong hop le" << endl;
  }

  return 0;
}
```

#### Bài 3

```c
#include <iostream>

using namespace std;

int main() {
  int tongKet;

  cout << "Nhap vao diem tong ket mon: ";
  cin >> tongKet;

  if (tongKet >= 5) {
      cout << "Dat" << endl;
  } else {
      cout << "Rot" << endl;
  }

  return 0;
}
```

#### Bài 4

```c
#include <iostream>

using namespace std;

int main() {
  int n;

  cout << "Nhap vao mot so: ";
  cin >> n;

  if (n > 0) {
      cout << "So duong" << endl;
  } else if (n < 0) {
      cout << "So am" << endl;
  } else {
      cout << "So khong" << endl;
  }

  return 0;
}
```

#### Bài 5

```c
#include <iostream>

using namespace std;

int main() {
  int a, b;

  cout << "Nhap vao hai so: ";
  cin >> a >> b;

  if (a == b) {
      cout << "Bang nhau" << endl;
  } else if (a > b) {
      cout << a << " lon hon " << b << endl;
  } else {
      cout << a << " nho hon " << b << endl;
  }

  return 0;
}
```

#### Bài 6

```c
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
  int a, b, c, d;

  cout << "Nhap vao bon so: ";
  cin >> a >> b >> c >> d;

  int min1 = min({a, b, c, d});

  cout << "So nho nhat la: " << min1 << endl;

  return 0;
}
```

#### Bài 7

```c
#include <iostream>

using namespace std;

int main() {
  int a, b;

  cout << "Nhap vao hai so: ";
  cin >> a >> b;

  if (b % a == 0) {
      cout << "b la boi so cua a" << endl;
  } else {
      cout << "b khong phai boi so cua a" << endl;
  }

  return 0;
}
```

#### Bài 8

```c
#include <iostream>

using namespace std;

int main() {
  int a;

  cout << "Nhap vao mot so: ";
  cin >> a;

  if (a % 2 == 0) {
      cout << "chan" << endl;
  } else {
      cout << "le" << endl;
  }

  return 0;
}
```

#### Bài 9

```c
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
  int a, b, c;

  cout << "Nhap vao ba so: ";
  cin >> a >> b >> c;

  int max1 = max({a, b, c});

  cout << "So lon nhat la: " << max1 << endl;

  return 0;
}
```

#### Bài 10

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

#### Bài 11

```c
#include <iostream>

using namespace std;

int main() {
  int a, b;

  cout << "Nhap vao hai so: ";
  cin >> a >> b;

  if ((a != 0 && b != 0) && (a > 0 && b > 0)) {
      cout << "cung duong" << endl;
  } else if ((a != 0 && b != 0) && (a < 0 && b < 0)) {
      cout << "cung am" << endl;
  } else {
      cout << "khong cung dau" << endl;
  }

  return 0;
}
```

#### Bài 12

```c
#include <iostream>

using namespace std;

#define PI 3.14

int main() {
  int r1, r2;

  cout << "Nhap vao hai ban kinh duong tron: ";
  cin >> r1 >> r2;

  float s1 = PI * (float)r1 * r1;
  float s2 = PI * (float)r2 * r2;

  if (s1 > s2) {
      cout << "Dien tich s1 lon hon s2" << endl;
  } else {
      cout << "Dien tich s2 lon hon s1" << endl;
  }

  return 0;
}
```

#### Bài 13

```c
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
```

# Buổi 2

#### Bài 1

```c
#include <iostream>

using namespace std;

int main() {
  int a, b;

  cin >> a >> b;

  if (a > b) {
      cout << a;
      cout << b;
  } else {
      cout << b;
      cout << a
  }

  return 0;
}
```

#### Bài 2

```c
#include <iostream>

using namespace std;

int main() {
  int a, b;

  cin >> a >> b;

  if (a == b) {
      cout << a;
  } else {
      cout << a+b;
  }

  return 0;
}
```

#### Bài 3

```c
#include <iostream>

using namespace std;

int main() {
  float a, b;

  cin >> a >> b;

  if (a/b == 0.5) {
      cout << 1;
  } else {
      cout << 2;
  }

  return 0;
}
```

#### Bài 4

```c
#include <iostream>

using namespace std;

int main() {
  int n, soChan = 0, soLe = 0;

  // Nhập số n trong khoảng từ 10000 đến 99999
  do {
    cout << "Nhap n (10000 <= n <= 99999): ";
    cin >> n;
  } while (n < 10000 || n > 99999);

  // Cách 1: Sử dụng biểu thức điều kiện
  for (int i = 10000; i <= n; ++i) {
    if (i % 2 == 0) {
      soChan++;
    } else {
      soLe++;
    }
  }

  cout << "Cach 1: Su dung bieu thuc dieu kien" << endl;
  cout << "So luong so chan: " << soChan << endl;
  cout << "So luong so le: " << soLe << endl;

  // Reset lại biến đếm
  soChan = 0;
  soLe = 0;

  // Cách 2: Không sử dụng biểu thức điều kiện
  for (int i = 10000; i <= n; ++i) {
    soChan += (1 - (i % 2)); // Tăng soChan nếu i là chẵn (i % 2 = 0)
    soLe += (i % 2);         // Tăng soLe nếu i là lẻ (i % 2 = 1)
  }

  cout << "\nCach 2: Khong su dung bieu thuc dieu kien" << endl;
  cout << "So luong so chan: " << soChan << endl;
  cout << "So luong so le: " << soLe << endl;

  return 0;
}
```

#### Bài 5

```c
#include <iostream>

using namespace std;

int main() {
  int nam;

  cout << "Nhap nam: ";
  cin >> nam;

  if ((nam % 4 == 0) && (nam % 100 != 0 || nam % 400 == 0)) {
    cout << "Nam " << nam << " la nam nhuan" << endl;
  } else {
    cout << "Nam " << nam << " khong phai la nam nhuan" << endl;
  }

  return 0;
}
```

#### Bài 6

```c
#include <iostream>

using namespace std;

int main() {
  int soLuong, thanhTien;

  cout << "Nhap so luong san pham: ";
  cin >> soLuong;

  if (soLuong >= 30) {
    thanhTien = soLuong * 5 * 0.1;
    cout << "So tien phai tra: " << thanhTien << endl;
  } else if (soLuong >= 50) {
    thanhTien = soLuong * 5 * 0.15;
    cout << "So tien phai tra: " << thanhTien << endl;
  } else {
    thanhTien = soLuong * 5;
    cout << "So tien phai tra: " << thanhTien << endl;
  }

  return 0;
}
```

#### Bài 7

```c
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
  float a, b, c;

  cout << "Nhap a, b, c: ";
  cin >> a >> b >> c;

  float congThuc = (-b + sqrt(pow(b,2) - 4 * a * c)) / (2 * a);

  if (a == 0) {
    cout << "Mau = 0, KHONG tinh duoc";
  } else if (isnan(congThuc)) {
    cout << "Can am, KHONG tinh duoc";
  } else {
    cout << fixed << setprecision(3);
    cout << "Nghiem cua phuong trinh la: " << congThuc << endl; 
  }
  
  return 0;
}
```

#### Bài 8

```c
#include <iostream>

using namespace std;

int main() {
  int a, b, c, d, maxAm;

  // Nhập bốn số nguyên a, b, c, d
  cout << "Nhap a: "; cin >> a;
  cout << "Nhap b: "; cin >> b;
  cout << "Nhap c: "; cin >> c;
  cout << "Nhap d: "; cin >> d;

  // Khởi tạo maxAm là một giá trị rất nhỏ
  maxAm = -2147483647; 

  // Kiểm tra từng số và cập nhật maxAm nếu cần
  if (a < 0 && a > maxAm) maxAm = a;
  if (b < 0 && b > maxAm) maxAm = b;
  if (c < 0 && c > maxAm) maxAm = c;
  if (d < 0 && d > maxAm) maxAm = d;

  // In kết quả
  if (maxAm != -2147483647) {
    cout << "Gia tri am lon nhat la: " << maxAm << endl;
  } else {
    cout << "Khong co gia tri am nao" << endl;
  }

  return 0;
}
```

#### Bài 9

```c
#include <iostream>

using namespace std;

int main() {
  int n, soDaoNguoc = 0;

  // Nhập số có 5 chữ số từ người dùng
  do {
    cout << "Nhap so co 5 chu so: ";
    cin >> n;
  } while (n < 10000 || n > 99999);

  // Đảo ngược số sử dụng vòng lặp for
  for (int temp = n; temp > 0; temp /= 10) { 
    soDaoNguoc = soDaoNguoc * 10 + temp % 10;
  }

  // Kiểm tra xem số đảo ngược có bằng số ban đầu không
  if (n == soDaoNguoc) {
    cout << n << " la so doi xung." << endl;
  } else {
    cout << n << " khong phai la so doi xung." << endl;
  }

  return 0;
}
```

#### Bài 10

```c
#include <iostream>

using namespace std;

int main() {
  int a, b;

  cout << "Nhap 2 so nguyen: ";
  cin >> a >> b;

  if ((a % 2 == 0) && (b % 2 == 0)) {
    cout << "a va b la 2 so chan" << endl;
  } else if (((a % 2 == 0) && (b % 2 != 0)) || ((a % 2 != 0) && (b % 2 == 0))) {
    cout << "chi co mot so chan" << endl;
  } else {
    cout << "a, b la hai so le" << endl;
  }

  return 0;
}
```

#### Bài 11

```c
#include <iostream>

using namespace std;

int main() {
  int a, b, c, maxChan;

  // Nhập ba số nguyên từ người dùng
  cout << "Nhap ba so nguyen: ";
  cin >> a >> b >> c;

  // Khởi tạo maxChan là một giá trị âm chẵn rất nhỏ
  maxChan = -2147483648;

  // Tìm số chẵn lớn nhất
  if (a % 2 == 0 && a > maxChan) {
    maxChan = a;
  }
  if (b % 2 == 0 && b > maxChan) {
    maxChan = b;
  }
  if (c % 2 == 0 && c > maxChan) {
    maxChan = c;
  }

  // In kết quả
  if (maxChan != -2147483648) {
    cout << maxChan << endl;
  } else {
    cout << "Khong co" << endl;
  }

  return 0;
}
```

#### Bài 12

```c
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
```
