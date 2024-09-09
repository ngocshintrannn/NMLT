#### Bài 4-4

Giải:

```c
#include <iostream>
using namespace std;

int main() {
  int n;

  cout << "Nhap mot so: ";
  tryAgain:
  cin >> n;

  if ((n < 0) || (n > 100)) {
    cout << "Vui long nhap so tu 0 den 100: ";
    goto tryAgain;
  } else {
    for (int i = n; i <= 100; ++i) {
      cout << i << " ";
    }
  }

  return 0;
}
```

#### Bài 4-5

Giải:

```c
#include <iostream>
using namespace std;

int main() {
  
  for (int i = 1; i <= 100; ++i) {
    cout << i << " ";
  }

  return 0;
}
```

#### Bài 4-6

Giải:

```c
#include <iostream>
using namespace std;

int main() {
  
  for (int i = 100; i >= 1; --i) {
    cout << i << " ";
  }

  return 0;
}
```

#### Bài 4-7

Giải:

```c
#include <iostream>
using namespace std;

int main() {
  
  for (char i = 'A'; i <= 'Z'; ++i) {
    cout << i << " ";
  }

  return 0;
}
```

#### Bài 4-8

Giải:

```c
#include <iostream>
using namespace std;

int main() {
  int n, sum;

  cout << "Enter a number: ";
  cin >> n;
  
  for (int i = 1; i <= n; ++i) {
    sum += i;
  }
  
  cout << "Sum = " << sum << endl;

  return 0;
}
```

#### Bài 4-9

Giải:

```c
#include <iostream>
using namespace std;

int main() {
  int n;
  float sum;

  cout << "Enter a number: ";
  cin >> n;
  
  for (int i = 1; i <= n; ++i) {
    sum += 1 / (float)i;
  }

  cout << "Sum = " << sum << endl;

  return 0;
}
```

#### Bài 4-10

Giải:

```c
#include <iostream>
using namespace std;

int main() {
  int n;
  bool laSoNguyenTo = true;

  cout << "Nhap mot so: ";
  cin >> n;
  
  if (n <= 1) {
    laSoNguyenTo = false;
  } else {
    for (int i = 2; i <= n / 2; i++) {
      if (n % i == 0) {
        laSoNguyenTo = false;
        break;
      }
    }
  }

  if (laSoNguyenTo) {
    cout << n << " la so nguyen to" << endl;
  } else {
    cout << n << " khong phai la so nguyen to" << endl;
  }

  return 0;
}
```

#### Bài 4-11

Giải:

```c
```

#### Bài 4-12

Giải:

```c
```

#### Bài 4-13

Giải:

```c
```

#### Bài 4-14

Giải:

```c
```

#### Bài 4-15

Giải:

```c
```

#### Bài 4-16

Giải:

```c
```

#### Bài 4-17

Giải:

```c
```

#### Bài 4-18

Giải:

```c
```

#### Bài 4-19

Giải:

```c
```
