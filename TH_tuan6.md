
# Buổi 1

#### Bài 1

```c
#include <iostream>

using namespace std;

int main() {
  int n;
  
  cout << "Nhap vao mot so duong: ";
  cin >> n;

  while (n <= 0) {
    cout << "So ban nhap khong phai la so duong. Nhap lai: ";
    cin >> n;
  }

  return 0;
}
```

#### Bài 2

```c
#include <iostream>

using namespace std;

int main() {
  int soDienCu, soDienMoi;
  
  cout << "Nhap so dien cu va so dien moi: ";
  cin >> soDienCu >> soDienMoi;

  while ((soDienCu <= 0) || (soDienMoi < soDienCu)) {
    cout << "Nhap khong dung. Nhap lai: ";
    cin >> soDienCu >> soDienMoi;
  }

  int soDienTieuThu = soDienMoi - soDienCu;

  cout << "So dien tieu thu: " << soDienTieuThu << endl;

  return 0;
}
```

#### Bài 3

```c
#include <iostream>

using namespace std;

int main() {
  int diemLT, diemTH;
  
  cout << "Nhap so diem LT va diem TH: ";
  cin >> diemLT >> diemTH;

  while (diemLT < 0 || diemLT > 10 || diemTH < 0 || diemTH > 10) {
    cout << "Nhap khong dung. Nhap lai: ";
    cin >> diemLT >> diemTH;
  }

  int diemTB = (diemLT + diemTH) / 2;

  cout << "Diem TB: " << diemTB;

  return 0;
}
```

#### Bài 4

```c
#include <iostream>

using namespace std;

int main() {
  int n, i = 1;
  
  cout << "Nhap so duong: ";
  cin >> n;

  while (i <= n) {
    cout << i << " ";
    i++;
  }

  return 0;
}
```

#### Bài 5

```c
#include <iostream>

using namespace std;

int main() {
  int number,max, counter = 1;

  while (counter <= 10) {
    cin >> number;
    max = number > max ? number : max;
    counter++;
  }

  cout << max;

  return 0;
}
```

#### Bài 6

```c
#include <iostream>

using namespace std;

int main() {
  int n, i = 0, sum = 0;

  cin >> n;

  if (n <= 0) {
    cout << "Invalid input";
    return 1;
  } else if (n == 1) {
    cout << 1;
    return 1;
  }

  while (i <= n) {
    sum += 2 * i + 1;
    i++;
  }

  cout << sum;

  return 0;
}
```

#### Bài 7

```c
#include <iostream>
using namespace std;

int main() {
    int n, i = 1;
    double sum = 0.0;

    cin >> n;
    
    while (i <= n) {
        sum += (2 * i + 1) / (double)(2 * i + 2);
        i++;
    }
    
    cout << sum;
    
    return 0;
}
```

#### Bài 8

```c
#include <iostream>

using namespace std;

int main() {
  int n, countDuong = 0, countAm = 0;

  while (true) {
    cin >> n;
    if (n == 0) {
      break;
    } else if (n < 0) {
      countAm++;
    } else {
      countDuong++;
    }
  }

  cout << countDuong << " so duong, " << countAm << " so am";

  return 0;
}
```

#### Bài 9

```c
#include <iostream>

using namespace std;

int main() {
  int n, countBay = 0;

  cin >> n;

  while (true) {
    int temp = n % 10;
    if (temp == 7) {
      countBay++;
    }
    n /= 10;
    if (n == 0) {
      break;
    }
  }

  cout << "Co " << countBay << " so bay";

  return 0;
}
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

#### Bài 13

```c
```

#### Bài 14

```c
```

#### Bài 15

```c
```

#### Bài 16

```c
```

#### Bài 17

```c
```

#### Bài 18

```c
```

#### Bài 19

```c
```

#### Bài 20

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

#### Bài 9

```c
```

#### Bài 10

```c
```

#### Bài 11

```c
```
