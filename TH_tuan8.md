
# Buổi 1

#### Bài 1

```c
#include <iostream>

using namespace std;

int main() {
  while (true) {
    int i;
    cout << "Hay nhap so nguyen duong (-1 de ket thuc): ";
    cin >> i;
    if (i <= -1 ) {
      return 1;
    } else {
      int count = 0;
      for (int j = i; j > 0; j/=10) {
        count++;
      }
      cout << "So " << i << " co " << count << " ky so!\n";
    }
  }

  return 0;
}
```

#### Bài 2

```c
#include <iostream>
#include <limits>

using namespace std;

int main() {
  while (true) {
    int i;
    cout << "Hay nhap so nguyen duong (-1 de ket thuc): ";
    cin >> i;
    if (i <= -1 ) {
      return 1;
    } else {
      int max = INT_MIN, min = INT_MAX;
      while (i > 0) {
        int digit = i % 10;
        if (digit > max) max = digit;
        if (digit < min) min = digit;
        i /= 10;
      }
      cout << "Ky so lon nhat: " << max << endl;
      cout << "Ky so nho nhat: " << min << endl;
    }
  }

  return 0;
}
```

#### Bài 3

```c
#include <iostream>

using namespace std;

int main() {
  while (true) {
    int i;
    cout << "Hay nhap so nguyen duong (-1 de ket thuc): ";
    cin >> i;
    if (i <= -1 ) {
      return 1;
    } else {
      int daoNguoc = 0;
      for (int j = i; j > 0; j /= 10) {
        daoNguoc = daoNguoc * 10 + (j % 10);
      }
      cout << "Gia tri dao nguoc la: " << daoNguoc << endl;
    }
  }

  return 0;
}
```

#### Bài 4

```c
#include <iostream>

using namespace std;

int main() {
  while (true) {
    int i;
    cout << "Hay nhap so nguyen duong (-1 de ket thuc): ";
    cin >> i;
    if (i <= 0 ) {
      return 1;
    } else {
      for (int j = i; j != 0; j--) cout << "* ";
    }
    cout << endl;
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

#### Bài 13

```c

```

#### Bài 14

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
