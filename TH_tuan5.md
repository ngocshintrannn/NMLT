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
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int a, b, c;

    cout << "Nhap hai 3 so: ";
    cin >> a >> b >> c;

    if (a == 0) {
        if (b == 0) {
            if (c == 0) {
                cout << "PTVSN" << endl;
            } else {
                cout << "PTVN" << endl;
            }
        } else {
            cout << "Phuong trinh co 1 nghiem x = " << -c / b << endl;
        }
    } else {
        double delta = b * b - 4 * a * c;
        if (delta < 0) {
            cout << "PTVN" << endl;
        } else if (delta == 0) {
            cout << "Phuong trinh co nghiem kep: " << -b / (2 * a) << endl;
        } else {
            cout << "Phuong trinh co hai nghiem phan biet: " << (-b + sqrt(delta)) / (2 * a) << " va " << (-b - sqrt(delta)) / (2 * a) << endl;
        }
    }

    return 0;
}
```

#### Bài 6

```c
#include <iostream>

using namespace std;

int main() {
    int a, b, c;

    cout << "Nhap hai 3 so: ";
    cin >> a >> b >> c;

    if (a > 0 && b > 0 && c > 0) {
        if (a + b > c && a + c > b && b + c > a) {
            if (a == b && b == c) {
                cout << "Tam giac deu";
            } else if (a == b || a == c || b == c) {
                if (a * a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a) {
                    cout << "Tam giac vuong can";
                } else {
                    cout << "Tam giac can";
                }
            } else {
                if (a * a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a) {
                    cout << "Tam giac vuong";
                } else {
                    cout << "Tam giac thuong";
                }
            }
        } else {
            cout << "Khong phai tam giac";
        }
    } else {
        cout << "Khong phai tam giac";
    }
    return 0;
}
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
#include <iostream>

using namespace std;

int main() {
    int n;

    cout << "Nhap so nguyen co 3 so: ";
    cin >> n;

    if (n >= 100 && n <= 999) {
        cout << "a.\n";
        if (n % 2 == 0) {
            cout << n << " la so chan\n";
        } else {
            cout << n << " la so le\n";
        }

        cout << "b.\n";
        bool coSoChan = false;
        int temp = n;
        while (temp > 0) {
            int so = temp % 10; // lấy chữ số cuối
            if (so % 2 == 0) {
            coSoChan = true;
            break;
            }
            temp /= 10; // xoá chữ số cuối
        }

        if (coSoChan) {
            cout << n << " co it nhat mot chu so chan\n";
        } else {
            cout << n << " khong co chu so chan\n";
        }

        cout << "c.\n";
        bool toanSoChan = true;
        temp = n;
        while (temp > 0) {
            int so = temp % 10; // lấy chữ số cuối
            if (so % 2 != 0) {
            toanSoChan = false;
            break;
            }
            temp /= 10; // xoá chữ số cuối
        }

        if (toanSoChan) {
            cout << n << " co toan chu so chan\n";
        } else {
            cout << n << " khong co toan chu so chan\n";
        }

        cout << "d.\n";
        int daoNguoc = 0, goc = n;
        while (n != 0) {
            int so1 = n % 10;
            daoNguoc = daoNguoc * 10 + so1;
            n /= 10;
        }

        if (goc == daoNguoc) {
            cout << goc << " la so ganh\n";
        } else {
            cout << goc << " khong phai la so ganh\n";
        }
    } else {
        cout << "Nhap du lieu khong dung";
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
    char color;

    cout << "Nhap mau: ";
    cin >> color;

    switch (color) {
        case 'r':
        case 'R':
            cout << "Red";
            break;
        case 'g':
        case 'G':
            cout << "Green";
            break;
        case 'b':
        case 'B':
            cout << "Blue";
            break;
        default:
            cout << "Back";
            break;
    }
    return 0;
}
```

#### Bài 2

```c
#include <iostream>

using namespace std;

int main() {
  char chonChucNang;

  cout << "Nhap vao +, -, *, /: ";
  cin >> chonChucNang;

  if (chonChucNang == '+' || chonChucNang == '-' || chonChucNang == '*' || chonChucNang == '/') {
    int a, b;
    cout << "Nhap vao a, b: ";
    cin >> a >> b;

    switch (chonChucNang) {
      case '+':
        cout << "a + b = " << a + b << endl;
        break;
      case '-':
        cout << "a - b = " << a - b << endl;
        break;
      case '*':
        cout << "a * b = " << a * b << endl;
        break;
      case '/':
        if (b == 0) {
          cout << "Khong the chia cho 0" << endl;
        } else {
          cout << "a / b = " << a / b << endl;
        }
        break;
    }
  } else {
    cout << "Khong co chuc nang nay" << endl;
  }

  return 0;
}
```

#### Bài 3

```c
#include <iostream>

using namespace std;

bool isLeapYear(int year) {
  return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

bool isValidDate(int day, int month, int year) {
  if (year < 1 || month < 1 || month > 12 || day < 1) {
    return false;
  }

  int daysInMonth;
  switch (month) {
    case 4: case 6: case 9: case 11:
      daysInMonth = 30;
      break;
    case 2:
      daysInMonth = isLeapYear(year) ? 29 : 28;
      break;
    default:
      daysInMonth = 31;
  }

  return day <= daysInMonth;
}

int main() {
  int ngay, thang, nam;

  cout << "Nhap vao ngay, thang, nam: ";
  cin >> ngay >> thang >> nam;

  if (isValidDate(ngay, thang, nam)) {
    cout << "Ngay thang nam hop le." << endl;
  } else {
    cout << "Ngay thang nam khong hop le." << endl;
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
  cout << "Nhap mot so tu 10 den 999: ";
  cin >> n;

  if (n < 10 || n > 999) {
    cout << "So khong hop le!" << endl;
    return 1;
  }

  int donVi = n % 10;
  int chuc = (n / 10) % 10;
  int tram = n / 100;

  switch (tram) {
    case 1: cout << "mot tram "; break;
    case 2: cout << "hai tram "; break;
    case 3: cout << "ba tram "; break;
    case 4: cout << "bon tram "; break;
    case 5: cout << "nam tram "; break;
    case 6: cout << "sau tram "; break;
    case 7: cout << "bay tram "; break;
    case 8: cout << "tam tram "; break;
    case 9: cout << "chin tram "; break;
  }

  switch (chuc) {
    case 1: cout << "muoi "; break;
    case 2: cout << "hai muoi "; break;
    case 3: cout << "ba muoi "; break;
    case 4: cout << "bon muoi "; break;
    case 5: cout << "nam muoi "; break;
    case 6: cout << "sau muoi "; break;
    case 7: cout << "bay muoi "; break;
    case 8: cout << "tam muoi "; break;
    case 9: cout << "chin muoi "; break;
    case 0: if (donVi > 0 && tram > 0) cout << "le "; break;
  }

  switch (donVi) {
    case 1: cout << "một "; break;
    case 2: cout << "hai "; break;
    case 3: cout << "ba "; break;
    case 4: cout << "bon "; break;
    case 5: cout << "nam "; break;
    case 6: cout << "sau "; break;
    case 7: cout << "bay "; break;
    case 8: cout << "tam "; break;
    case 9: cout << "chin "; break;
  }

  return 0;
}
```

#### Bài 5

```c
#include <iostream>

using namespace std;

int main() {
  int n;
  cout << "Nhap nam sinh tu 1900 den 2021: ";
  cin >> n;

  if (n < 1900 || n > 2021) {
    cout << "Nam khong dung yeu cau!" << endl;
    return 1;
  }

  cout << "a.\n";
  int tuoi = 2024 - n;
  cout << "Tuoi cua ban la: " << tuoi << endl;

  cout << "b.\n";
  switch (tuoi) {
    case 0 ... 17:
      cout << "Tre em" << endl;
      break;
    case 18 ... 40:
      cout << "Thanh nien" << endl;
      break;
    case 41 ... 60:
      cout << "Trung nien" << endl;
      break;
    default:
      cout << "Nghi huu" << endl;
      break;
  }

  cout << "c.\n";
  cout << "Con giap cua ban la: ";
  switch (n % 12) {
    case 0:
      cout << "Than";
      break;
    case 1:
      cout << "Dau";
      break;
    case 2:
      cout << "Tuat";
      break;
    case 3:
      cout << "Hoi";
      break;
    case 4:
      cout << "Ty";
      break;
    case 5:
      cout << "Suu";
      break;
    case 6:
      cout << "Dan";
      break;
    case 7:
      cout << "Meo";
      break;
    case 8:
      cout << "Thin";
      break;
    case 9:
      cout << "Ty";
      break;
    case 10:
      cout << "Ngo";
      break;
    case 11:
      cout << "Mui";
      break;
  }

  return 0;
}
```

#### Bài 6

```c
#include <iostream>

using namespace std;

int main() {
  int trieuChung, ngayThuoc, thanhTien;
  cout << "1 - Ho\n2 - So mui\n3 - Viem hong\n4 - Dau dau\n";
  cout << "Nhap trieu chung (1 - 4): ";
  try_again_trieuChung:
  cin >> trieuChung;

  if (trieuChung < 1 || trieuChung > 4) {
    cout << "Nhap lai tu 1 - 4: ";
    goto try_again_trieuChung;
  }

  cout << "Nhap so ngay dung thuoc: ";
  try_again_ngayThuoc:
  cin >> ngayThuoc;

  if (ngayThuoc <= 0) {
    cout << "Nhap lai so lon hon 0: ";
    goto try_again_ngayThuoc;
  }

  switch (trieuChung) {
    case 1:
      thanhTien = (ngayThuoc * 2) * 1200;
      break;
    case 2:
      thanhTien = (ngayThuoc * 2) * 2000;
      break;
    case 3:
      thanhTien = (ngayThuoc * 2) * 3000;
      break;
    case 4:
      thanhTien = (ngayThuoc * 2) * 5000;
      break;
  }

  cout << "So tien phai tra: " << thanhTien << endl;

  return 0;
}
```

#### Bài 7

```c
```

#### Bài 8

```c
#include <iostream>

using namespace std;

bool isLeapYear(int year) {
  return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

bool isValidDate(int day, int month, int year) {
  if (year < 1 || month < 1 || month > 12 || day < 1) {
    return false;
  }

  int daysInMonth;
  switch (month) {
    case 4: case 6: case 9: case 11:
      daysInMonth = 30;
      break;
    case 2:
      daysInMonth = isLeapYear(year) ? 29 : 28;
      break;
    default:
      daysInMonth = 31;
  }

  return day <= daysInMonth;
}

int main() {
  int ngay, thang, nam;
  string ngayThang;

  cout << "Nhap ngay, thang, nam: ";
  cin >> ngay >> thang >> nam;

  if (!isValidDate(ngay, thang, nam)) {
    cout << "Du lieu khong hop le!" << endl;
    return 1;
  }

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

  switch(thang) {
    case 1: cout << " January " << nam << endl; break;
    case 2: cout << " February " << nam << endl; break;
    case 3: cout << " March " << nam << endl; break;
    case 4: cout << " April " << nam << endl; break;
    case 5: cout << " May " << nam << endl; break;
    case 6: cout << " June " << nam << endl; break;
    case 7: cout << " July " << nam << endl; break;
    case 8: cout << " August " << nam << endl; break;
    case 9: cout << " September " << nam << endl; break;
    case 10: cout << " October " << nam << endl; break;
    case 11: cout << " November " << nam << endl; break;
    case 12: cout << " December " << nam << endl; break;
    default: cout << "Invalid month!" << endl; break;
  }

  return 0;
}
```
