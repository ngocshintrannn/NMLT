# Buổi 1

#### Bài 1

```c
#include <iostream>

using namespace std;

int main() {
  int ao;
  float giamGia;
  float gia;

  cout << "Nhap so ao: ";
  cin >> ao;

  if (ao >= 5 && ao <= 10) {
    giamGia = (ao * 10) * 0.1;
    gia = (ao * 10) - giamGia;
    cout << "Gia giam 10%: " << gia;
  } else if (ao >= 11 && ao <= 20) {
    giamGia = (ao * 10) * 0.2;
    gia = (ao * 10) - giamGia;
    cout << "Gia giam 20%: " << gia;
  } else if (ao > 20) {
    giamGia = (ao * 10) * 0.3;
    gia = (ao * 10) - giamGia;
    cout << "Gia giam 30%: " << gia;
  } else {
    gia = ao * 10;
    cout << "Gia khong giam: " << gia;
  }

  return 0;
}
```

#### Bài 2

```c
#include <iostream>

using namespace std;

int main() {
  float a, b, x;
  
  cout << "Nhap a, b: ";
  cin >> a >> b;

  if (a == 0 && b == 0) {
    cout << "PTVSN" << endl;
  } else if (a == 0 && b != 0) {
    cout << "PTVN" << endl;
  } else {
    x = -b / a;
    cout << "Phuong trinh co nghiem x = " << x << endl;
  }

  return 0;
}
```

#### Bài 3

```c
#include <iostream>

using namespace std;

int main() {
  float diem;

  cout << "Nhap diem: ";
  cin >> diem;

  if (diem >= 0 && diem < 4) {
    cout << "Diem F";
  } else if (diem >= 4 && diem < 5.5) {
    cout << "Diem D";
  } else if (diem >= 5.5 && diem < 7) {
    cout << "Diem C";
  } else if (diem >= 7 && diem < 8.5) {
    cout << "Diem B";
  } else if (diem >= 8.5 && diem < 10) {
    cout << "Diem A";
  } else {
    cout << "Diem khong hop le";
  }

  return 0;
}
```

#### Bài 4

```c
#include <iostream>

using namespace std;

int main() {
  int thang, nam;

  cout << "Nhap thang, nam: ";
  cin >> thang >> nam;

  if (nam < 0) {
    cout << "Du lieu khong hop le" << endl;
  } else if (nam > 0) {
    if (thang < 1 || thang > 12) {
      cout << "Du lieu khong hop le" << endl;
    } else {
      switch (thang) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
          cout << "31 ngay" << endl;
          break;
        case 4:
        case 6:
        case 9:
        case 11:
          cout << "30 ngay" << endl;
          break;
        case 2:
          if ((nam % 4 == 0 && nam % 100 != 0) || nam % 400 == 0) {
            cout << "29 ngay" << endl;
          } else {
            cout << "28 ngay" << endl;
          }
          break;
      }
    }
  }

  return 0;
}
```

#### Bài 5

```c
```

#### Bài 6

```c
```

#### Bài 7

```c
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  int chiSoCu, chiSoMoi;
  float donGia;

  cout << "Nhap vao chi so cu, chi so moi (KW): ";
  cin >> chiSoCu >> chiSoMoi;

  int soKwTieuThu = chiSoMoi - chiSoCu;

  if (chiSoCu < 0 || chiSoMoi < 0 || soKwTieuThu < 0) {
    cout << "Chi so khong hop le!";
    return 0;
  }

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

#### Bài 8

```c
#include <iostream>
#include <string>
using namespace std;

int main() {
  int ngay;
  string ngayThang;

  cout << "Nhap so ngay: ";
  cin >> ngay;

  switch (ngay) {
    case 1: ngayThang = "1st"; cout << ngayThang; break;
    case 2: ngayThang = "2nd"; cout << ngayThang; break;
    case 3: ngayThang = "3rd"; cout << ngayThang; break;
    case 21: ngayThang = "21st"; cout << ngayThang; break;
    case 22: ngayThang = "22nd"; cout << ngayThang; break;
    case 23: ngayThang = "23rd"; cout << ngayThang; break;
    case 31: ngayThang = "31st"; cout << ngayThang; break;
    default: ngayThang = to_string(ngay) + "th"; cout << ngayThang;
    }

  return 0;
}
```

#### Bài 9

```c
#include <iostream>

using namespace std;

int main() {
  long long n;

  cout << "Nhập vào một số nguyên dương (tối đa 9 chữ số): ";
  cin >> n;

  // Kiểm tra số âm và số vượt quá giới hạn
  if (n <= 0 || n > 999999999) {
      cout << "Số không hợp lệ." << endl;
      return 1; // Thoát chương trình với mã lỗi
  }

  int soChuSo = 0;
  long long temp = n; 

  // Đếm số chữ số
  while (temp > 0) {
      temp /= 10;
      soChuSo++;
  }

  cout << "Số " << n << " có " << soChuSo << " chữ số." << endl;

  return 0;
}
```

#### Bài 10

```c
```

# Buổi 2

#### Bài 1

```c
```

#### Bài 2

```c
```

#### Bài 3

```c
```

#### Bài 4

```c
```

#### Bài 5

```c
```

#### Bài 6

```c
```

#### Bài 7

```c
```

#### Bài 8

```c
```
