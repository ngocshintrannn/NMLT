#### Bài 1
Giải:
```c
#include <iostream>
using namespace std;

int main() {
  int so_luong;
  int don_gia;

  cout << "Vui long nhap so luong: ";
  cin >> so_luong;
  cout << "Vui long nhap don gia:";
  cin >> don_gia;

  int tong = so_luong * don_gia;

  cout << "Tong so tien: " << tong;

  return 0;
}
```

#### Bài 2
Giải:
```c
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  int so_luong1, so_luong2;
  float don_gia1, don_gia2;
	
  cout << "Hay nhap so luong 1:\n";
  cin >> so_luong1;
  cout << "Hay nhap don gia 1:\n";
  cin >> don_gia1;
  cout << "Hay nhap so luong 2:\n";
  cin >> so_luong2;
  cout << "Hay nhap don gia 2:\n";
  cin >> don_gia2;
	
  cout << setw(15) << "PRICE" << setw(15)<< "QUANTITY\n";
  cout << setw(15) << so_luong1 << setw(14) << don_gia1 << endl;
  cout << setw(15) << so_luong2 << setw(14) << don_gia2;
	
  return 0;
}
```
#### Bài 3
Giải:
```c
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  float diem1, diem2, diem3;
	
  cout << "Hay nhap vao diem thu nhat:\n";
  cin >> diem1;
  cout << "Hay nhap vao diem thu hai:\n";
  cin >> diem2;
  cout << "Hay nhap vao diem thu ba:\n";
  cin >> diem3;
	
  cout << fixed << setprecision(2);
  float trung_binh = (diem1 + diem2 + diem3) / 3;
  cout << "Diem trung binh: " << trung_binh;
	
  return 0;
}
```

#### Bài 4
Giải:
```c
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  float my = 85;
  float hien_dai = 57.50;
  float phap = 127.75;
  int soluongmy, soluonghiendai, soluongphap;

  cout << "Hay nhap vao so ghe da ban loai Thuoc dia my:\n";
  cin >> soluongmy;
  cout << "Hay nhap vao so ghe da ban loai Hien dai:\n";
  cin >> soluonghiendai;
  cout << "Hay nhap vao so ghe da ban loai Phap co dien:\n";
  cin >> soluongphap;

  float tongmy = soluongmy * my;
  float tonghiendai = soluonghiendai * hien_dai;
  float tongphap = soluongphap * phap;

  cout << fixed << setprecision(2);
  cout << "Tong doanh thu loai Thuoc dia my: $" << tongmy << endl;
  cout << "Tong doanh thu loai Hien dai: $" << tonghiendai << endl;
  cout << "Tong doanh thu loai Phap co dien: $" << tongphap << endl;
  cout << "Tong tat ca: $" << tongmy + tonghiendai + tongphap << endl;

  return 0;
}
```

#### Bài 5
Giải:
```c
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  float doanhSo, thueSuat, thuePhaiNop, tongDoanhThu;
	
  // Nhập doanh số bán hàng
  cout << "Nhap tong doanh so ban hang:\n";
  cin >> doanhSo;

  // Nhập thuế suất
  cout << "Nhap thue suat (0.02 cho 2%):\n";
  cin >> thueSuat;

  // Tính thuế phải nộp
  thuePhaiNop = doanhSo * thueSuat;

  // Tính tổng doanh thu cộng thuế
  tongDoanhThu = doanhSo + thuePhaiNop;

  // Xuất kết quả với độ chính xác 2 số thập phân
  cout << fixed << setprecision(2);
  cout << "Tong doanh so trong thang: " << doanhSo << endl;
  cout << "Thue phai dong trong thang: " << thuePhaiNop << endl;
  cout << "Tong doanh thu cong thue: " << tongDoanhThu;
	
  return 0;
}
```

#### Bài 6
Giải:
```c
#include <iostream>
using namespace std;

int main() {
  int number;
	
  cout << "Nhap so nguyen: ";
  cin >> number;

  cout << number - 1 << " " << number + 1;

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
  float donGia, soLuong;
	
  cout << "Nhap don gia: ";
  cin >> donGia;
  cout << "Nhap so luong: ";
  cin >> soLuong;
	
  float tongTruocThue = soLuong * donGia;
  float thue = tongTruocThue * 0.1;
  float tongSauThue = tongTruocThue + thue;
	
  cout << "Tong tien truoc thue: " << donGia << " * " << soLuong << " = " << tongTruocThue << endl;
  cout << setw(22) << "Tien thue: " << setw(15) << thue << endl;
  cout << setw(22) << "Tong tien sau thue: " << setw(15) << tongSauThue;
	
  return 0;
}
```

#### Bài 8
Giải:
```c
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

#define PI 3.14 
//chu vi hinh tron C = 2πr
//dien tich hinh tron S = πr^2

int main() {
  int r;

  cout << "Nhap ban kinh r: ";
  cin >> r;

  cout << fixed << setprecision(2);
  cout << "Chu vi hinh tron C = " << 2 * PI * r << endl;
  cout << "Dien tich hinh tron S = " << PI * pow(r, 2) << endl;

  return 0;
}
```

#### Bài 9
Giải:
```c
#include <iostream>
using namespace std;

int main() {
  int number1, number2, z;
	
  cout << "Nhap gia tri 1: ";
  cin >> number1;
  cout << "Nhap gia tri 2: ";
  cin >> number2;
	
  z = number1;
  number1 = number2;
  number2 = z;
	
  cout << "Hoan doi\n";
  cout << "Gia tri 1: " << number1 << endl;
  cout << "Gia tri 2: " << number2;
  return 0;
}
```
