
# Buổi 1

#### Bài 1

```c
#include <iostream>

using namespace std;

void abc(int x, int k, int& kq) {
  kq = 1;
  for (int i = 1; i <= k; i++) kq *= x;
}

int main() {
  int a = 2, b = 3, c;
  abc(a, b, c);
  cout << c;

  return 0;
}
```

#### Bài 2

```c
#include <iostream>

using namespace std;

void inChu (int n) {
  switch (n) {
    case 1: cout << "Mot"; break;
    case 2: cout << "Hai"; break;
    case 3: cout << "Ba"; break;
    case 4: cout << "Bon"; break;
    case 5: cout << "Nam"; break;
    case 6: cout << "Sau"; break;
    case 7: cout << "Bay"; break;
    case 8: cout << "Tam"; break;
    case 9: cout << "Chin"; break;
  }
}

int main() {
  int n;
  cin >> n;
  inChu(n);
  return 0;
}
```

#### Bài 3

```c
#include <iostream>

using namespace std;

void hoanVi (float number1, float number2) {
  swap(number1, number2);
  cout << "\nSau khi hoan vi, so thu nhat co gia tri " << number1;
  cout << "\nSo thu hai co gia tri la " << number2;
}

int main() {
  float first, second;
  cout << "Hay nhap so thu nhat, sau do enter: ";
  cin >> first;
  cout << "Hay nhap so thu hai, sau do enter: ";
  cin >> second;

  cout << "Ban nhap cac so la " << first << " va " << second;

  hoanVi(first, second);

  return 0;
}
```

#### Bài 4

```c
#include <iostream>
#include <iomanip>

using namespace std;

void cal (float km, float hours, float& kmPerHour) {
  kmPerHour = km / hours;
}

int main() {
  int km, hours;
  float kmPerHour;
  cout << "Hay nhap so km da di du lich: ";
  cin >> km;
  cout << "Hay nhap so gio da di du lich: ";
  cin >> hours;

  cal(km, hours, kmPerHour);

  cout << fixed << setprecision(2); 
  cout << "Toc do cua ban la " << kmPerHour << " km tren gio";

  return 0;
}
```

#### Bài 5

```c
#include <iostream>

using namespace std;

void tinhToan (int soLuongDiem, int& tong) {
  for (int i = 1; i <= soLuongDiem; i++) {
    int diem;
    cout << "Hay nhap diem so thu " << i << " (0 - 100): ";
    cin >> diem;
    tong += diem;
  }
  tong /= soLuongDiem; 
}

int main() {
  int soLuongDiem, tong = 0;
  cout << "Hay nhap so luong diem so: ";
  cin >> soLuongDiem;

  tinhToan(soLuongDiem, tong);
  
  cout << "Diem chu tuong ung la: ";
  if (tong >= 0 && tong < 60) cout << "F";
  else if (tong < 70) cout << "D";
  else if (tong < 80) cout << "C";
  else if (tong < 90) cout << "B";
  else if (tong < 100) cout << "A";

  return 0;
}
```

#### Bài 6

```c
#include <iostream>

using namespace std;

void toSeconds(int hour, int minute, int second, int& totalSecond) {
  int hourToSec = hour * 60 * 60;
  int minuteToSec = minute * 60;
  totalSecond = hourToSec + minuteToSec + second;
}

int main() {
  int hoursFirst, minutesFirst, secondsFirst;
  int hoursEnd, minutesEnd, secondsEnd;
  cout << "Nhap gio, phut, giay dau (enter): ";
  cin >> hoursFirst >> minutesFirst >> secondsFirst;
  cout << "Nhap gio, phut, giay cuoi: ";
  cin >> hoursEnd >> minutesEnd >> secondsEnd;

  if (hoursFirst <= 0 || hoursFirst >= 24 || minutesFirst <= 0 || minutesFirst >= 60 || secondsFirst <= 0 || secondsFirst >= 60 || hoursEnd <= 0 || hoursEnd >= 24 || minutesEnd <= 0 || minutesEnd >= 60 || secondsEnd <= 0 || secondsEnd >= 60 || hoursEnd < hoursFirst) {
    cout << "Gio khong hop le!";
    return 1;
  }

  int hours = hoursEnd - hoursFirst, minutes = minutesEnd - minutesFirst, seconds = secondsEnd - secondsFirst, totalSeconds;


  toSeconds(hours, minutes, seconds, totalSeconds);

  cout << totalSeconds << " giay";

  return 0;
}
```

#### Bài 7

```c
#include <iostream>
#include <cmath>

using namespace std;

void hypotenuse(double side1, double side2, double& side3) {
  side3 = sqrt(pow(side1,2) + pow(side2,2));
  cout << "Do dai canh huyen la: " << side3;
}

int main() {
  double side1, side2, side3;
  cout << "Nhap 2 canh goc vuong: ";
  cin >> side1 >> side2;

  hypotenuse(side1, side2, side3);

  return 0;
}
```

#### Bài 8

```c
#include <iostream>

using namespace std;

void inBCC(int n) {
  for (int i = 2; i <= n; i++) {
    cout << "Bang cuu chuong " << i << " :\n";
    for (int j = 1; j <= 10; j++) {
      int add = i * j;
      cout << i << " x " << j << " = " << add << endl;
    }
  }
}

int main() {
  int n;
  cin >> n;
  if (n <= 1) {
    cout << "Vui long nhap n > 1!";
    return 1;
  }

  inBCC(n);

  return 0;
}
```

# Buổi 2

#### Bài 1

```c
#include <iostream>

using namespace std;

void nhapDiem(short& x) {
  short toan, ly, anh;
  cout << "Nhap diem toan ly anh: ";
  nhap_lai:
  cin >> toan >> ly >> anh;

  if (toan < 0 || ly < 0 || anh < 0) {
    cout << "Nhap lai: ";
    goto nhap_lai;
  }

  x = (toan + ly + anh) / 3;
}

int main() {
  short tb;
  nhapDiem(tb);
  cout << "Diem trung binh 3 mon la: " << tb;

  return 0;
}
```

#### Bài 2

```c
#include <iostream>

using namespace std;

void inKyTu(char c, short soLan) {
  for (int i = 1; i <= soLan; i++) {
    cout << c << " ";
  }
  cout << endl;
}

int main() {
  char c;
  short soLan;
  int i = 1;

  nhap_lai:
  cout << "Nhap ky tu va so lan in: ";
  cin >> c >> soLan;

  inKyTu(c, soLan);

  if (i < 4) {
    i++;
    goto nhap_lai;
  }

  return 0;
}
```

#### Bài 3

```c
#include <iostream>
#include <windows.h>
#include <conio.h>

using namespace std;

#define LEN 119   
#define XUONG 115   
#define TRAI 97   
#define PHAI 100

void goto_xy(short x, short y) {
  static HANDLE h = NULL;
  if (!h) {
    h = GetStdHandle(STD_OUTPUT_HANDLE);
  }
  COORD c = {x, y};
  SetConsoleCursorPosition(h, c);
}

int main() {
  cout << "Nhan phim w / s / a / d de di chuyen o vuong\nBam Esc de thoat";
  int x = 40, y = 12;
  char key;
  
  while (true) {
    goto_xy(x, y);
    cout << (char)15;

    key = getch();

    switch (key) {
      case LEN:
        goto_xy(x, y);
        cout << " "; cout << (char)15;
        y--; break;

      case XUONG:
        goto_xy(x, y);
        cout << " "; cout << (char)15;
        y++; break;

      case PHAI:
        goto_xy(x, y);
        cout << " "; cout << (char)15;
        x++; break;

      case TRAI:
        goto_xy(x, y);
        cout << " "; cout << (char)15;
        x--; break;
        
      case 27: return 0;
    }

    if (x < 0)  x = 0;
    if (y < 0)  y = 0;
    if (x > 79) x = 79;
    if (y > 24) y = 24;
  }

  return 0;
}
```
