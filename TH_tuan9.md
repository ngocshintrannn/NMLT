
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

```

#### Bài 7

```c
```

#### Bài 8

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
