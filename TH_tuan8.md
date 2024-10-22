
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
#include <iostream>

using namespace std;

int prime[10000001];

void sievePrime() {
  //cho tất cả là 1
  for (int i = 0; i <= 1000000; i++) {
    prime[i] = 1;
  } // set tất cả là số nt
  prime[0] = prime[1] = 0; //số 0 và 1 khong là số nt nên set là 0
  //duyệt qua từ 2 đến căn bậc 2 của 1000000 = 10^6 là 1000
  for (int i = 2; i <= 1000; i++) {
    for (int j = i*i; j<= 1000000; j+=i) {
      prime[j] = 0; //các số là bội của i sẽ không phải là số nt
    }
  }
}

int main() {
  sievePrime();
  while (true) {
    int n;
    cout << "Nhap mot so nguyen duong lon hon 2 (-1 de dung): ";
    cin >> n;

    if (n == -1) break;
    if (n >= 0 && n <= 2) {
      cout << "Nhap lai!\n";
      continue;
    }

    if(prime[n]) cout << n << " la so nguyen to\n";
    else cout << n << " khong la so nguyen to\n";
  }
  return 0;
}
```

#### Bài 2

```c
#include <iostream>

using namespace std;

int main() {
  while (true) {
    int tuSo, mauSo;
    cout << "Nhap vao tu va mau (mau so 0 de ket thuc): ";
    cin >> tuSo >> mauSo;
    if (mauSo == 0) break;

    // tim ucln cua tu va mau
    int a = tuSo, b = mauSo;
    while (b != 0) {
      int temp = b;
      b = a % b;
      a = temp;
    }

    // rut gon phan so
    tuSo /= a; mauSo /= a;

    cout << "Phan so da rut gon: " << tuSo << "/" << mauSo << endl; 
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
    int n, sum = 0;
    cin >> n;
    if (n <= 0) break;

    //tach tung chu so va tinh tong
    while (n > 0) {
      sum += n % 10;
      n /= 10;
    }

    cout << sum << endl;
  }
  return 0;
}
```

#### Bài 4

```c
#include <iostream>
#include <string>

using namespace std;

string docSoCoMotChuSo(int so) {
    switch (so) {
        case 0: return "khong";
        case 1: return "mot";
        case 2: return "hai";
        case 3: return "ba";
        case 4: return "bon";
        case 5: return "nam";
        case 6: return "sau";
        case 7: return "bay";
        case 8: return "tam";
        case 9: return "chin";
        default: return "";
    }
}

string docSoCoHaiChuSo(int so) {
    if (so < 10) {
        return docSoCoMotChuSo(so);
    }
    int chuc = so / 10;
    int donVi = so % 10;
    string result = docSoCoMotChuSo(chuc) + " muoi";
    if (donVi == 1) {
        result += " mot";
    } else if (donVi == 4) {
        result += " tu";
    } else if (donVi != 0) {
        result += " " + docSoCoMotChuSo(donVi);
    }
    return result;
}

string docSoCoBaChuSo(int so) {
    if (so < 100) {
        return docSoCoHaiChuSo(so);
    }
    int tram = so / 100;
    int soDu = so % 100;
    string result = docSoCoMotChuSo(tram) + " tram";
    if (soDu != 0) {
        if (soDu < 10) {
            result += " le " + docSoCoMotChuSo(soDu);
        } else {
            result += " " + docSoCoHaiChuSo(soDu);
        }
    }
    return result;
}

string docSo(int so) {
    if (so < 0 || so > 999999) {
        return "So khong hop le.";
    }
    if (so == 0) {
        return "khong";
    }

    string result = "";
    int nghin = so % 1000;
    so /= 1000;
    int trieu = so % 1000;
    so /= 1000;

    if (so > 0) {
        result += docSoCoBaChuSo(so) + " trieu";
    }
    if (trieu > 0) {
        if (result != "") {
            result += " ";
        }
        result += docSoCoBaChuSo(trieu) + " nghin";
    }
    if (nghin > 0) {
        if (result != "") {
            result += " ";
        }
        result += docSoCoBaChuSo(nghin);
    }

    return result;
}

int main() {
    int so;
    cout << "Nhap so nguyen (1 < so < 1 trieu): ";
    cin >> so;

    cout << "Cach doc: " << docSo(so) << endl;

    return 0;
}
```

#### Bài 5

```c
#include <iostream>

using namespace std;

int primes[10000001];

void sievePrime() {
  for (int i = 0; i <= 1000000; i++) {
    primes[i] = 1;
  }

  primes[0] = primes[1] = 0;

  for (int i = 2; i <= 1000; i++) {
    if (primes[i]) {
      for (int j = i*i; j <= 1000000; j+=i) {
        primes[j] = 0;
      }
    }
  }
}

int main() {
  sievePrime();
  for (int i = 1; i <= 100000; i++) {
    if (primes[i]) {
      cout << i << "\n";
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
  while (true) {
    int n; 
    cin >> n;

    if (n < 2) break;

    int sum = 0;
    for (int i = 1; i <= n; i++) {
      if (i != n) cout << i << " + ";
      else cout << i << " = ";
      sum += i;
    }

    cout << sum << endl;
  }

  return 0;
}
```

#### Bài 7

```c
#include <iostream>

using namespace std;

int prime[10000001];

void sievePrime() {
  for (int i = 0; i <= 1000000; i++) prime[i] = 1;

  prime[0] = prime[1] = 0;

  for (int i = 2; i <= 1000; i++) {
    if (prime[i]) {
      for (int j = i * i; j <= 1000000; j += i) prime[j] = 0;
    }
  }
}

int main() {
  sievePrime();
  int n = 1000;
  for (int i = 0; i <= n; i++) {
    if (prime[i]) {
      int sau = i + 2;
      if (prime[sau]) {
        cout << i << " - " << sau << endl;
        i++;
      }
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
  int n = 9;
  
  int count = (n + 1) / 2;
  for (int i = 1; i <= n; i += 2) {
    count--;
    for (int k = count; k >= 0; k--) cout << " ";
    for (int j = 1; j <= i; j++) cout << "*";
    cout << endl;
  }

  for (int i = n - 2; i >= 1; i -= 2) {
    count++;
    for (int k = 0; k <= count; k++) cout << " ";
    for (int j = i; j >= 1; j--) cout << "*";
    cout << endl;
  }

  return 0;
}
```

#### Bài 9

```c
#include <iostream>

using namespace std;

int main() {
  int n;
  cout << "Nhap mot so le tu 1 --> 19: ";
  try_again:
  cin >> n;

  if (n < 1 || n > 19 || n % 2 == 0) {
    cout << "Vui long nhap so le tu 1 --> 19: ";
    goto try_again;
  }
  
  int count = (n + 1) / 2;
  for (int i = 1; i <= n; i += 2) {
    count--;
    for (int k = count; k >= 0; k--) cout << " ";
    for (int j = 1; j <= i; j++) cout << "*";
    cout << endl;
  }

  for (int i = n - 2; i >= 1; i -= 2) {
    count++;
    for (int k = 0; k <= count; k++) cout << " ";
    for (int j = i; j >= 1; j--) cout << "*";
    cout << endl;
  }

  return 0;
}
```
