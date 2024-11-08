
# Buổi 1

#### Tích luỹ thừa nhị phân (Luỹ thừa nhanh)

```c
#include <bits/stdc++.h>

using namespace std;

long long binPow(long long a, long long b) {
  long long res = 1;
  while (b > 0) {
    if (b % 2 == 1) res *= a;
    a *= a;
    b /= 2;
  }
  return res;
}

int main() {
  cout << binPow(2, 10000000000);
}
```

#### Lý thuyết số - Đồng dư

```c
#include <bits/stdc++.h>

using namespace std;

//(a + b) % c = (a % c) + (b % c) % c
//(a - b) % c = (a % c) - (b % c) % c
//(a * b) % c = (a % c) * (b % c) % c
//(a / b) % c = (a % c) * (b^-1 % c) % c
//(a ^ m) % c = (a % c) ^ m % c

long long addMod(long long a, long long b, long long c) {
  return (a % c + b % c) % c;
}

long long subMod(long long a, long long b, long long c) {
  return (a % c - b % c + c) % c;
}

long long mulMod(long long a, long long b, long long c) {
  return (a % c * b % c) % c;
}

long long modInverse(long long b, long long c) {
  long long x, y;
  long long g = gcdExtended(b, c, &x, &y);
  if (g != 1)
    return -1; // Nghịch đảo không tồn tại
  else {
    long long res = (x % c + c) % c;
    return res;
  }
}

long long gcdExtended(long long a, long long b, long long *x, long long *y) {
  if (a == 0) {
    *x = 0, *y = 1;
    return b;
  }
  long long x1, y1;
  long long gcd = gcdExtended(b % a, a, &x1, &y1);
  *x = y1 - (b / a) * x1;
  *y = x1;
  return gcd;
}

long long divMod(long long a, long long b, long long c) {
  long long inv = modInverse(b, c);
  if (inv == -1)
    return -1; // Không thể chia
  else
    return (a % c * inv % c) % c;
}

long long powMod(long long a, long long m, long long c) {
  long long res = 1;
  a = a % c;
  while (m > 0) {
    if (m % 2 == 1)
      res = (res * a) % c;
    m = m >> 1;
    a = (a * a) % c;
  }
  return res;
}

int main() {
  cout << addMod(5, 3, 7);
}
```

#### Tổ hợp chập k của n

```c
#include <bits/stdc++.h>

using namespace std;

// Hàm tính tổ hợp chập k của n
long long combination(int n, int k) {
    if (k > n) return 0;
    if (k == 0 || k == n) return 1;
    if (k > n - k) k = n - k; // C(n, k) == C(n, n-k)
    long long result = 1;
    for (int i = 0; i < k; ++i) {
        result *= (n - i);
        result /= (i + 1);
    }
    return result;
}

int main() {
    int n, k;
    cin >> n >> k;
    cout << "C(" << n << ", " << k << ") = " << combination(n, k);
    return 0;
}
```

#### Số Fibonacci

```c
#include <bits/stdc++.h>

using namespace std;

long long fibo[100];

void check2() {
  fibo[0] = 0; fibo[1] = 1;
  for (int i = 2; i <= 92; i++) {
    fibo[i] = fibo[i - 1] + fibo[i - 2];
  }
}

bool isFibonacci(long long n) {
  for (int i = 0; i <= 92; i++) {
    if (fibo[i] == n) return true;
  }
  return false;
}

int main() {
  check2();
  long long n;
  cin >> n;
  if (isFibonacci(n)) {
    cout << n << " la so Fibonacci." << endl;
  } else {
    cout << n << " khong phai la so Fibonacci." << endl;
  }
  return 0;
}
```

#### Phi hàm Euler

```c
#include <bits/stdc++.h>

using namespace std;

int prime[10000001];

void sieved() {
  for (int i = 0; i <= 1000000; i++) prime[i] = 1;
  prime[0] = prime[1] = 0;
  for (int i = 2; i <= 1000; i++) {
    if (prime[i]) {
      for (int j = i * i; j <= 1000000; j += i) prime[j] = 0;
    }
  }
}

int phi(int n) {
  int res = n;
  for (int i = 2; i <= sqrt(n); i++) {
    if (prime[i] && n % i == 0) {
      res -= res / i;
      while (n % i == 0) n /= i;
    }
  }
  if (n > 1) res -= res / n;
  return res;
}

int main() {
  sieved();
  int n; cin >> n;
  cout << phi(n);
}
```

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
#include <iostream>
#include <cmath>

using namespace std;

double cals1(int n, double s1) {
  for (int i = 1; i <= n; ++i) {
		s1 += i;
	}
  return s1 / n;
}

double cals2(int n, double s2) {
  for (int i = 1; i <= n; ++i) {
		s2 += pow(i, 2);
	}
  return sqrt(s2);
}

int main() {
	int n,s1 = 0;
	double s2 = 0;
	cin >> n;

	if (n < 0) {
		cout << "Nhap sai";
		return 1;
	}

  s1 = cals1(n, s1);
  s2 = cals2(n, s2);

	cout << s1 << endl;
	cout << s2;
	return 0;
}
```

#### Bài 3

```c
#include <iostream>
#include <cmath>

using namespace std;

unsigned long long factorial(int num) {
    unsigned long long result = 1;
    for (int i = 1; i <= num; ++i) {
        result *= i;
    }
    return result;
}

double c(int n, int k) {
    if (k > n) return 0;
    unsigned long long result1 = factorial(n);
    unsigned long long result2 = factorial(k);
    unsigned long long result3 = factorial(n - k);
    return static_cast<double>(result1) / (result2 * result3);
}

int main() {
    int n, k;
    cin >> n >> k;

    if (n < 0 || k < 0) {
        cout << "n và k phai la cac so khong am." << endl;
        return 1;
    }

    cout << "C(" << n << ", " << k << ") = " << c(n, k) << endl;
    return 0;
}
```

#### Bài 4

```c
#include <iostream>
#include <cmath>

using namespace std;

double cals3(int n, double s3) {
  s3 = 0;
  for (int i = 1; i <= n; i++){
    s3 = sqrt(3 + s3);
  }
  return s3;
}

double cals4(int n, double s4) {
  s4 = 0;
  for (int i = 1; i <= n; i++){
    s4 = 1 / (2 + s4);
  }
  return s4;
}

int main() {
  double n, s3 = 0, s4 = 0;
  cin >> n;
  if (n <= 0) {
    cout << "Nhap sai\n";
    return 1;
  }
  
  s3 = cals3(n, s3);
  s4 = cals4(n, s4);

  cout << "s3 = " << s3 << endl;
  cout << "s4 = " << s4;
  return 0;
}
```

#### Bài 5

```c

```
