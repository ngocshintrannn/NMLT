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
```

#### Bài 2

Giải:

```c
```

#### Bài 3

Giải:

```c
```

#### Bài 4

Giải:

```c
```

#### Bài 5

Giải:

```c
```

#### Bài 6

Giải:

```c
```

#### Bài 7

Giải:

```c
```

#### Bài 8

Giải:

```c
```

#### Bài 9

Giải:

```c
```

#### Bài 10

Giải:

```c
```

#### Bài 11

Giải:

```c
```

#### Bài 12

Giải:

```c
```
