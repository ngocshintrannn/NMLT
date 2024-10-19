
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
#include <iostream>

using namespace std;

int primes[10000001];

void sievePrime() {
  //coi tat ca so deu la so nguyen to
  //primes [i] = 1; la so nt
  //primes [i] = 0; khong la so nt
  for (int i = 0; i <= 1000000; i++) {
    primes[i] = 1;
  }
  primes[0] = primes[1] = 0;
  for (int i = 2; i <= 1000; i++) {
    //neu i la so nt 
    if (primes[i]) {
      //duyet cac boi cua i va cho la 0
      for (int j = i*i; j <= 1000000; j+=i) {
        primes[j] = 0; // j khong con la so nt
      }
    }
  }
}

int main() {
  sievePrime();
  int n;
  cin >> n;

  if (primes[n]) cout << n << " la so nguyen to";
  else cout << n << " khong phai la so nguyen to";

  cout << "\nCac so nguyen to tu 1 - " << n << ": ";
  for (int i = 0; i <= n; i++) {
    if (primes[i]) cout << i << " ";
  }

  cout << endl << n << " so dau tien la: ";
  int count = 0;
  for (int i = 0; i <= 1000000; i++) {
    if (primes[i]) {
      cout << i << " ";
      count++;
    }
    if(count == n) break;
  }
  return 0;
}
```

#### Bài 6

```c
#include <iostream>

using namespace std;

int main() {
  while (true) {
    int n;
    cout << "Hay nhap vao kich thuoc bang tinh (-1 de ket thuc): ";
    cin >> n;
    if (n == -1) break;

    for (int i = 1; i <= n; i++) {
      cout << i << " ";
      int sum = i;
      for (int j = 2; j <= n; j++) {
      sum += i;
      cout << sum << " ";
      }
      cout << endl;
    }
  }
  return 0;
}
```

#### Bài 7

```c
#include <iostream>

using namespace std;

int main() {
  while (true) {
    int n;
    cout << "Hay nhap kich thuoc hinh vuong (-1 de ket thuc): ";
    cin >> n;
    if (n == -1) break;

    for (int i = 1; i <= n; i++) {
      for (int j = 1; j <= n; j++) {
        cout << "*";
      }
      cout << endl;
    }
  }
  return 0;
}
```

#### Bài 8

```c
#include <iostream>

using namespace std;

int main() {
  while (true) {
    int n;
    cout << "Hay nhap chieu cao tam giac (-1 de ket thuc): ";
    cin >> n;
    if (n == -1) break;

    for (int i = 1; i <= n; i++) {
      for (int j = i; j >= 1; j--) {
        cout << "*";
      }
      cout << endl;
    }
  }
  return 0;
}
```

#### Bài 9

```c
#include <iostream>

using namespace std;

int main() {
  while (true) {
    int n;
    cout << "Hay nhap chieu cao tam giac (-1 de ket thuc): ";
    cin >> n;
    if (n == -1) break;

    for (int i = n; i >= 1; i--) {
      for (int j = 1; j <= i; j++) {
        cout << "*";
      }
      cout << endl;
    }
  }
  return 0;
}
```

#### Bài 10

```c
#include <iostream>

using namespace std;

int main() {
  while (true) {
    int n;
    cout << "Hay nhap so nguyen duong (-1 de ket thuc): ";
    cin >> n;
    if (n == -1) break;

    int soDaoNguoc = 0;
    for (int i = n; i > 0; i/=10) {
      soDaoNguoc = soDaoNguoc * 10 + (i % 10);
    }

    if (soDaoNguoc == n) cout << n << " la so doi xung\n";
    else cout << n << " khong la so doi xung\n";
  }
  return 0;
}
```

#### Bài 11

```c
#include <iostream>

using namespace std;

int main() {
  while (true) {
    int n;
    cout << "Hay nhap kich thuoc hinh vuong (-1 de ket thuc): ";
    cin >> n;
    if (n == -1) break;
    else if (n <= 2) {
      cout << "Kich thuoc hinh vuong phai > 2!\n";
      continue;
    }

    for (int i = 1; i <= n; i++) {
      if (i == 1 || i == n) {
        for(int j = 1; j <= n; j++) {
          cout << "*";
        }
      } else {
        cout << "*";
        for(int j = 1; j < n; j++) {
          if (j == n-1) cout << "*";
          else cout << " ";
        }
      }
      cout << endl;
    }
  }
  return 0;
}
```

#### Bài 12

```c
#include <iostream>

using namespace std;

int main() {
  while (true) {
    int n;
    cout << "Hay nhap chieu cao tam giac (-1 de ket thuc): ";
    cin >> n;
    if (n == -1) break;

    for (int i = 1; i <= n; i++) {
      for (int j = i-1; j > 0; j--) {
        cout << " ";
      }
      for (int h = n - (i - 1); h > 0; h--) {
        cout << "*";
      }
      cout << endl;
    }
  }
  return 0;
}
```

#### Bài 13

```c
#include <iostream>

using namespace std;

int main() {
  while (true) {
    int n;
    cout << "Hay nhap chieu cao tam giac (-1 de ket thuc): ";
    cin >> n;
    if (n == -1) break;

    for (int i = 1; i <= n; i++) {
      for (int j = n-i; j > 0; j--) {
        cout << " ";
      }
      for (int h = i; h > 0; h--) {
        cout << "*";
      }
      cout << endl;
    }
  }
  return 0;
}
```

#### Bài 14

```c
#include <iostream>

using namespace std;

int main() {
  while (true) {
    int n;
    cout << "Hay nhap chieu cao tam giac (-1 de ket thuc): ";
    cin >> n;
    if (n == -1) break;
    if (n <= 0 || n % 2 == 0) {
      cout << "Chieu cao phai la so le duong.\n";
      continue;
    }

    int count = (n + 1) / 2;

    for (int i = 1; i <= n; i += 2) {
      for (int k = 1; k <= count - (i + 1) / 2; k++) {
        cout << " ";
      }
      for (int j = 1; j <= i; j++) {
        cout << "*";
      }
      cout << endl;
    }

    for (int i = 1; i <= 3; i++) {
      for (int k = 1; k <= (n - 3) / 2; k++) {
        cout << " ";
      }
      cout << "***" << endl;
    }

    for (int i = 1; i <= n; i++) {
      cout << "*";
    }
    cout << endl;
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
