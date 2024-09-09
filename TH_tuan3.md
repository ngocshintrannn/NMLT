# Buổi 1

#### Bài 1

Giải:

```c
#include <iostream>
#include <cmath>
using namespace std;

int main() {
  int l, w;

  cout << "Nhap chieu dai va rong: ";
  cin >> l >> w;

  //Đường chéo = √(a² + b²)
  int duongCheo = sqrt(l * l + w * w);

  cout << "Duong cheo cua hinh chu nhat la: " << duongCheo;

  return 0;
}
```

#### Bài 2

Giải:

```c
#include <iostream>
#include <cmath>
using namespace std;

int main() {
  int xA, xB, yA, yB;

  cout << "Nhap cac toa do xA, xB, yA, yB: ";
  cin >> xA >> xB >> yA >> yB;

  int AB = sqrt(pow(xA - xB, 2) + pow(yA - yB, 2));

  cout << "Khoang cach hai diem AB la: " << AB;

  return 0;
}
```

#### Bài 3

Giải:

```c
#include <iostream>
#include <cmath>
using namespace std;

int main() {
  int x;

  cout << "Nhap so nguyen x bat ky: ";
  cin >> x;

  int result = pow(x, 8) - 5 + abs(x);

  cout << "Ket qua la: " << result;

  return 0;
}
```

#### Bài 4

Giải:

```c
#include <iostream>
using namespace std;

int main() {
  float x;

  cout << "Nhap mot so thuc: ";
  cin >> x;

  cout << "Phan nguyen cua x la: " << (int)x;

  return 0;
}
```

#### Bài 5

Giải:

```c
#include <iostream>
#include <cmath>
using namespace std;

int main() {
  int a,b,c;

  cout << "Nhap a, b, c: ";
  cin >> a >> b >> c;

  float result = (-b + sqrt(b*b - 4*a*c)) / (2*a);
  
  if (isnan(result)) {
    cout << "Phuong trinh vo nghiem" << endl;
  } else {
    cout << "Ket qua cua phep tinh la: " << result;
  }
  
  return 0;
}
```

#### Bài 6

Giải:

```c
#include <iostream>
#include <cmath>
using namespace std;

int main() {
  int N;
  float x;

  cout << "Nhap so nguyen N va so thuc x: ";
  cin >> N >> x;

  float A = pow(x * x + x + 1, N) + pow(x * x - x + 1, N);
  
  cout << "Gia tri cua A = " << A;
  
  return 0;
}
```

#### Bài 7

Giải:

```c
#include <iostream>
#include <cmath>
using namespace std;

int main() {
  int x1, x2, y1, y2, z1, z2;

  cout << "Nhap x1, x2, y1, y2, z1, z2: ";
  cin >> x1 >> x2 >> y1 >> y2 >> z1 >> z2;

  float result = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2) + pow(z2 - z1, 2));
  
  cout << "Do dai ba doan thang la: " << result;
  
  return 0;
}
```

#### Bài 8

Giải:

```c
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
  int a;

  cout << "Nhap so nguyen a: ";
  cin >> a;

  float f1 = sqrt(a + sqrt(a + sqrt(a)));
  float f2 = a / ((2 * a) + (a / ((2 * a) + ((float)a / 2))));
  
  cout << fixed << setprecision(2);
  cout << "f1: " << f1 << endl;
  cout << "f2: " << f2;
  
  return 0;
}
```

#### Bài 9

Giải:

```c
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
  int a, b, c;

  cout << "Chieu dai canh a, b, c cua tam giac: ";
  cin >> a >> b >> c;

  float p = (a + b + c) / 2;
  float s = sqrt(p * (p - a) * (p - b) * (p - c));
  float r = s / p;
  float R = (a * b * c) / (4 * s);

  cout << fixed << setprecision(3);
  cout << "Chu vi tam giac: " << p << endl;
  cout << "Dien tich tam giac: " << s << endl;
  cout << "Ban kinh duong tron noi tiep tam giac: " << r << endl;
  cout << "Ban kinh duong tron ngoai tiep tam giac: " << R;
  
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
  int a;

  cout << "Nhap mot so: ";
  cin >> a;

  if (a > 0) {
    cout << "So " << a << " la so duong" << endl;
  } else if (a < 0) {
    cout << "So " << a << " la so am" << endl;
  } else {
    cout << "So khong hop le";
  }
  
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

  cout << "Nhap mot so: ";
  cin >> a;

  if (a % 2 == 0) {
    cout << "So " << a << " la so chan" << endl;
  } else {
    cout << "So " << a << " la so le" << endl;
  }
  
  return 0;
}
```

#### Bài 3

Giải:

```c
#include <iostream>
using namespace std;

int main() {
  int a, b;

  cout << "Nhap hai so khac nhau: ";
  cin >> a >> b;

  if (a > b) {
    cout << "So lon nhat la: " << a << endl;
  } else {
    cout << "So lon nhat la: " << b << endl;
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

  cout << "Nhap hai so a , b voi b khac 0: ";
  cin >> a >> b;

  if (b % a == 0) {
    cout << a << " là ước của " << b << endl;
  } else {
    cout << a << " không phải là ước của " << b << endl;
  }
  
  return 0;
}
```

#### Bài 5

Giải:

```c
#include <iostream>
using namespace std;

int main() {
  int a;

  cout << "Nhap so luong hang can mua: ";
  cin >> a;

  if ((a > 0) && (a < 50)) {
    cout << "Hop le";
  } else {
    cout << "Khong hop le";
  }
  
  return 0;
}
```

#### Bài 6

Giải:

```c
#include <iostream>
using namespace std;

int main() {
  int a, b;

  cout << "Nhap hai so: ";
  cin >> a >> b;

  if (a > b) {
    cout << "So lon nhat la: " << a << endl;
  } else if (a == b) {
    cout << "Hai so bang nhau" << b << endl;
  } else {
    cout << "So khong hop le" << endl;
  }
  
  return 0;
}
```

#### Bài 7

Cách 1:

```c
#include <iostream>
using namespace std;

int main() {
  int month;

  cout << "Nhap thang: ";
  cin >> month;

  if (month >= 1 && month <= 12) {
    cout << "Thang hop le" << endl;
  } else {
    cout << "Thang khong hop le" << endl;
  }
  
  return 0;
}
```

Cách 2:

```c
#include <iostream>
using namespace std;

int main() {
  int month;

  cout << "Nhap thang: ";
  cin >> month;

  if (month < 1 || month > 12) {
    cout << "Thang khong hop le" << endl;
  } else {
    cout << "Thang hop le" << endl;
  }
  
  return 0;
}
```

#### Bài 8

Giải:

```c
#include <iostream>
using namespace std;

int main() {
  int a, b, c;

  cout << "Nhap a, b, c: ";
  cin >> a >> b >> c;

  if (a + b > c && a + c > b && b + c > a) {
    cout << "Day la 3 canh cua 1 tam giac" << endl;
  } else {
    cout << "Day khong phai la 3 canh cua 1 tam giac" << endl;
  }
  
  return 0;
}
```

#### Bài 9

Giải:

```c
#include <iostream>
using namespace std;

int main() {
  char kyTu;

  cout << "Nhap mot ky tu: ";
  cin >> kyTu;

  cout << "Ma ASCII cua ky tu " << kyTu << " la: " << int(kyTu) << endl;
  
  if (kyTu >= 'a' && kyTu <= 'z') {
    cout << "Chu hoa: " << kyTu - 32 << endl;
  }

  if (kyTu == 'a', 'e', 'i', 'o', 'u') {
    cout << "Ky tu " << kyTu << " la nguyen am" << endl;
  }

  return 0;
}
```

#### Bài 10

Cách 1:

```c
#include <iostream>
using namespace std;

int main() {
  int a;

  cout << "Nhap mot so: ";
  cin >> a;

  if (a > 0 && a % 2 != 0) {
    cout << "So " << a << " la so duong le" << endl;
  } else {
    cout << "So " << a << " khong phai la so duong le" << endl;
  }
  
  return 0;
}
```

Cách 2:

```c
#include <iostream>
using namespace std;

int main() {
  int n;

  cout << "Nhap mot so: ";
  cin >> n;

  if (n > 0 && ((n / 2) * 2 != n)) {
    cout << "So " << n << " la so duong le" << endl;
  } else {
    cout << "So " << n << " khong phai la so duong le" << endl;
  }

  return 0;
}
```

#### Bài 11

Giải:

```c
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  int n, s;

  cout << "Nhap hai so: ";
  cin >> n >> s;

  float thuong = n / s;

  cout << fixed << setprecision(3);
  cout << "Thuong cua hai so la: " << thuong << endl;

  return 0;
}
```

#### Bài 12

Giải:

```c
#include <iostream>
#include <cmath>
using namespace std;

int main() {
  float x, fx;

  cout << "Nhap mot so thuc: ";
  cin >> x;

  if (x > 0) {
    fx = pow(x, 2) + (3 * x) + 5;
    cout << "f(" << x << ") = " << fx << endl;
  } else {
    fx = -pow(x, 2) - (3 * x) - 5;
    cout << "f(" << x << ") = " << fx << endl;
  }

  return 0;
}
```
