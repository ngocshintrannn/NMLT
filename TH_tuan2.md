# Buổi 1

#### Bài 1

Giải:

```c
#include <iostream>
using namespace std;

int main() {
  int a, b;

  cout << "Nhap a, b voi b khac 0: ";
  cin >> a >> b;

  int tong = a + b;
  int hieu = a - b;
  long long tich = (long long)a + b;
  float thuong = (float)a / b;
  int du = a % b;

  cout << "Tong: " << tong << endl;
  cout << "Hieu: " << hieu << endl;
  cout << "Tich: " << tich << endl;
  cout << "Thuong: " << thuong << endl;
  cout << "Du: " << du << endl;

  return 0;
}
```

#### Bài 2

Giải:

```c
#include <iostream>
using namespace std;

int main() {
  int a;

  cout << "Nhap a: ";
  cin >> a;

  cout << "Thuc hien a++ va a--\n";

  cout << a++ << endl;
  cout << a << endl;
  cout << a-- << endl;
  cout << a << endl;

  cout << "Thuc hien ++a va --a\n";

  cout << ++a << endl;
  cout << a << endl;
  cout << --a << endl;
  cout << a << endl;

  return 0;
}
```

#### Bài 3

Giải:

```c
#include <iostream>
using namespace std;

int main() {
  int n;

  cout << "Nhap so nguyen n: ";
  cin >> n;

  for (int i = 1; i <= 10; ++i) {
    cout << n << " " << "*" << " " << i << " = " << n * i << "\n";
  }

  return 0;
}
```

#### Bài 4

Giải:

```c
#include <iostream>
using namespace std;

int main() {
  int a, b;

  cout << "Nhap chieu dai va chieu rong HCN: ";
  cin >> a >> b;

  int chuVi = (a + b) * 2;
  int dienTich = a * b;

  cout << "Chu vi HCN: " << chuVi << endl;
  cout << "Dien tich HCN: " << dienTich << endl;

  return 0;
}
```

#### Bài 5

Giải:

```c
#include <iostream>
using namespace std;

int main() {
  float x1, y1, x2, y2;

  cout << "Nhap x1, y1, x2, y2: ";
  cin >> x1 >> y1 >> x2 >> y2;

  float A = (x1 + x2) / 2;
  float B = (y1 + y2) / 2;

  cout << "TD(" << A << "," << B << ")";

  return 0;
}
```

#### Bài 6

Giải:

```c
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  float canNang, chieuCao;

  cout << "Nhap can nang va chieu cao: ";
  cin >> canNang >> chieuCao;

  float BMI = canNang / (chieuCao * chieuCao);

  cout << fixed << setprecision(1);
  cout << "BMI = " << BMI;

  return 0;
}
```

#### Bài 7

Giải:

```c
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  int n;

  cout << "Nhap mot so co ba chu so: ";
  cin >> n;

  int hangTram = n / 100;
  int hangChuc = (n % 100 ) / 10; int hangDonVi = n % 10;

  float tbCong = (float)(hangTram + hangChuc + hangDonVi) / 3;  
  cout << fixed << setprecision(2);
  cout << "Trung binh cong: " << tbCong;

  return 0;
}
```

#### Bài 8

Giải:

```c
#include <iostream>
using namespace std;

int main() {
  int giay;

  cout << "Nhap so giay: ";
  cin >> giay;

  int gio = giay / 3600;
  int du = giay % 3600;
  int phut = du / 60;
  int giayConLai = du % 60;

  cout << "Gio: " << gio << " Phut: " << phut << " Giay: " << giayConLai;

  return 0;
}
```

#### Bài 9

Giải:

```c
#include <iostream>
using namespace std;

int main() {
  int n;

  cout << "Nhap day so co 5 chu so: ";
  cin >> n;

  int hangChucNgan = n / 10000;
  int hangNgan = (n % 10000) / 1000;
  int hangTram = (n % 1000) / 100;
  int hangChuc = (n % 100) / 10;
  int hangDonVi = n % 10;

  int tong = hangChucNgan + hangNgan + hangTram + hangChuc + hangDonVi;
  cout << han ChucNgan << " + " << hangNgan << " + " << hangTram << " + " << hangChuc << " + " << hangDonVi << " = " << tong;

  int soNut = tong % 10;
  cout << "\nSo nut la: " << soNut;

  return 0;
}
```

#### Bài 10

Giải:

```c
#include <iostream>
using namespace std;

int main() {
  int tien;

  cout << "Nhap so tien: ";
  cin >> tien;

  int muoiNgan = tien / 10000;
  tien %= 10000;
  int namNgan = tien / 5000;
  tien %= 5000;
  int haiNgan = tien / 2000;
  tien %= 2000;
  int motNgan = tien / 1000;  

  cout << "So to muoi ngan: " << muoiNgan << endl;
  cout << "So to nam ngan: " << namNgan << endl;
  cout << "So to hai ngan: " << haiNgan << endl;
  cout << "So to mot ngan: " << motNgan << endl;

  return 0;
}
```

#### Bài 11

Giải:

```c
#include <iostream>
using namespace std;

int main() {
  float x1, x2, t1, t2;

  cout << "Nhap x1, x2, t1, t2: ";
  cin >> x1 >> x2 >> t1 >> t2;

  float v = (x2 - x1) / (t2 - t1);

  if ((x2 > x1 >= 0) && (t2 > t1 >= 0)) {
    cout << "V = " << v;
  }
  else {
    cout << "Dieu kien khong thoa man";
  }

  return 0;
}
```

# Buổi 2

#### Bài 1

Giải:

```c
#include <iostream>
using namespace std;

int main() {
  cout << "Xin chao ";
  cout << "Tan sinh vien CNTT";

  return 0;
}
```

#### Bài 2

Giải:

```c
#include <iostream>
using namespace std;

int main() {
  cout << "LY LICH SINH VIEN";
  cout << "Ho Ten SV: Tran Van Ngoc";
  cout << "Ngay sinh: 21/10/2006";
  cout << "MSSV: 0306241131";
  cout << "Lop: CD CNTT 24B";

  return 0;
}
```

#### Bài 3

Giải:

```c
#include <iostream>
using namespace std;

int main() {
  int canh;

  cout << "Nhap canh hinh vuong: ";
  cin >> canh;

  int chuVi = canh * 4;

  cout << "Chu vi hinh vuong la: " << chuVi << endl;

  return 0;
}
```

#### Bài 4

Giải:

```c
#include <iostream>
using namespace std;

int main() {
  float canh;

  cout << "Nhap canh hinh vuong: ";
  cin >> canh;

  float chuVi = canh * 4;

  cout << "Chu vi hinh vuong la: " << chuVi << endl;

  return 0;
}
```

#### Bài 5

Giải:

```c
#include <iostream>
using namespace std;

int main() {
  float dai, rong;

  cout << "Nhap chieu dai , rong: ";
  cin >> dai >> rong;

  float dienTich = dai * rong;
  float chuVi = (dai + rong) * 2;

  cout << "Chu vi HCN la: " << chuVi << endl;
  cout << "Dien tich HCN la: " << dienTich << endl;

  return 0;
}
```

#### Bài 6

Giải:

```c
#include <iostream>
using namespace std;

int main() {
  int n;

  cout << "Nhap mot so: ";
  cin >> n;

  int hangChuc = n / 10;
  int hangDonVi = n % 10;
  cout << hangDonVi << hangChuc << endl;

  return 0;
}
```

#### Bài 7

Giải:

```c
#include <iostream>
using namespace std;

int main() {
  int n;

  cout << "Nhap mot so: ";
  cin >> n;

  int hangTram = n / 100;
  int hangChuc = (n % 100) / 10;
  int hangDonVi = n % 10;
  cout << hangDonVi << hangChuc << hangTram << endl;

  return 0;
}
```

#### Bài 8

Giải:

```c
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  int gioThue, gioTra, phutThue, phutTra;

  cout << "Nhap gio thue, phut thue, gio tra, phut tra: ";
  cin >> gioThue >> phutThue >> gioTra >> phutTra;

  float gioDaThue = (gioTra - gioThue) + (float)(phutTra - phutThue) / 60;
  float donGia = gioDaThue * 3000;

  cout << fixed << setprecision(2);
  cout << "Gio da thue: " << gioDaThue << endl;
  cout << "Don gia: " << donGia << endl;

  return 0;
}
```

#### Bài 9

Giải:

```c
#in lude <iostream>
#include <iomanip>
using namespace std;

int main() {
  float tu1, mau1, tu2, mau2;

  cout << "Nhap hai phan so: ";
  cin >> tu1 >> mau1 >> tu2 >> mau2;

  float tongHaiPS = ((tu1 * mau2) / (mau1 * mau2)) + ((tu2 * mau1) / (mau2 * mau1));

  cout << fixed << setprecision(3);
  cout << tongHaiPS;
  return 0;
}
```
