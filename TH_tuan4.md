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

#### Bài 9

```c
```

#### Bài 10

```c
```

#### Bài 11

```c
```

#### Bài 12

```c
```
