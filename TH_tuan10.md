
# Buổi 1

#### Bài 1

```c
#include <iostream>
#include <cmath>

using namespace std;

int inCP(int n) {
  int num = 1;
  while (n > 0) {
    int can = sqrt(num);
    if (can * can == num) {
      cout << num << " ";
      n--;
    }
    num++;
  }
  return 0;
}

int main() {
  int n;
  cout << "Hay nhap so nguyen duong: ";
  cin >> n;
  
  inCP(n);
  return 0;
}
```

#### Bài 2

```c
#include <iostream>

using namespace std;

bool ktSoHH(int num) {
  int sum = 1;
  for (int i = 2; i <= num / 2; ++i) {
    if (num % i == 0) {
      sum += i;
    }
  }
  return sum == num && num != 1;
}

int dem(int n, int count) {
  for (int i = 2; i < n; ++i) {
    if (ktSoHH(i)) {
      count++;
    }
  }
  return count;
}

int main() {
    int n, count = 0;
    cout << "Hay nhap so nguyen duong: ";
    cin >> n;

    cout << "So luong so hoan hao nho hon " << n << " la: " << dem(n, count);
    return 0;
}
```

#### Bài 3

```c
#include <iostream>
#include <cmath>

using namespace std;

bool checkTamGiac(int a, int b, int c) {
  if (a + b > c && a + c > b && c + b > a) return true;
  else return false;
}

void cal(int a, int b, int c, int& p, int& s, int& ha, int& hb, int& hc) {
  p = (a + b + c) / 2;
  s = sqrt((p * (p - a)) * (p * (p - b)) * (p * (p - c)));
  ha = 2 * s / a;
  hb = 2 * s / b;
  hc = 2 * s / c;
}

int main() {
  int a, b, c;
  cout << "Nhap 3 canh a, b, c: ";
  cin >> a >> b >> c;

  int p, s, ha, hb, hc;
  if (checkTamGiac(a ,b ,c)) cal(a ,b ,c ,p ,s ,ha ,hb ,hc);
  else return 1;

  cout << "Chu vi: " << p << endl;
  cout << "Dien tich: " << s << endl;
  cout << "Duong cao ha: " << ha << endl;
  cout << "Duong cao hb: " << hb << endl;
  cout << "Duong cao hc: " << hc;

  return 0;
}
```

#### Bài 4

```c
#include <iostream>

using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

int main() {
    int a, b;
    cout << "Nhap hai so: ";
    cin >> a >> b;

    int gcdResult = gcd(a, b);
    int lcmResult = lcm(a, b);

    cout << "Uoc chung lon nhat (GCD): " << gcdResult << endl;
    cout << "Boi chung nho nhat (LCM): " << lcmResult << endl;

    return 0;
}
```

#### Bài 5

```c
#include <iostream>

using namespace std;

int max(int a, int b) {
    return (a > b) ? a : b;
}

int main() {
    int a, b;
    cout << "Nhap hai so: ";
    cin >> a >> b;

    int maxResult = max(a, b);

    cout << "So lon nhat: " << maxResult << endl;

    return 0;
}
```

#### Bài 6

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

# Buổi 2

#### Bài 1

```c
#include <iostream>
#include <cmath>

using namespace std;

void power(int coSo, int mu) {
  int result = 1;
  for (int i = mu; i >= 1; i--) {
    result *= coSo;
  }
  cout << result;
}

int main() {
  int coSo, mu;
  cout << "Nhap co so va so mu: ";
  cin >> coSo >> mu;
  power(coSo, mu);
  return 0;
}
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
