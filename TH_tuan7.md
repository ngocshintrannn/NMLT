
# Buổi 1

#### Bài 1

```c
#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int n,s1 = 0;
	double s2 = 0;
	cin >> n;
	if (n < 0) {
		cout << "Nhap sai";
		return 1;
	}
	for (int i = 1; i <= n; ++i) {
		s1 += i;
	}
	for (int i = 1; i <= n; ++i) {
		s2 += pow(i, 2);
	}
	cout << s1 / n << endl;
	cout << sqrt(s2);
	return 0;
}
```

#### Bài 2

```c
#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int n, result, i = 0;
	long long nhiPhan = 0;
	cout << "Hay nhap so nguyen duong: ";
	cin >> n;
	while (n != 0) {
		result = n % 2;
		n /= 2;
		nhiPhan += result * pow(10, i);
		i++;
	}
	cout << "Chuoi nhi phan tuong duong: " << nhiPhan;
	return 0;
}
```

#### Bài 3

```c
#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int n, i = 0, sum = 0;
	cout << "Hay nhap so nhi phan: ";
	cin >> n;
	while (n != 0) {
		int temp = n % 10;
		if (temp == 1) {
			sum += pow(2, i);
		}
		n /= 10;
		i++;
	}
	cout << "Gia tri nguyen tuong ung: " << sum;
	return 0;
}
```

#### Bài 4

```c
#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int n;
	cout << "Hay nhap so nguyen duong: ";
	cin >> n;
	cout << "Cac gia tri so chinh phuong chan la: \n";
	for (int i = 1; i <= n; ++i) {
		if (sqrt(i) == (int)sqrt(i) && i % 2 == 0) {
			cout << i << endl;
		}
	}
	return 0;
}
```

#### Bài 5

```c
#include <iostream>
using namespace std;

int main() {
	int n, countBay = 0;
	cin >> n;
	while (n != 0) {
		int temp = n % 10;
		if (temp == 7) countBay++;
		n /= 10;
	}
	cout << countBay;
	return 0;
}
```

#### Bài 6

```c
#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	for (int i = 1; i <= n; ++i) {
		if (i % 2 != 0 && n % i == 0) {
			cout << i << endl;
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
	int n, countUocSo = 0;
	cin >> n;
	for (int i = 1; i <= n; ++i) {
		if (n % i == 0) {
			countUocSo++;
		}
	}
	cout << countUocSo;
	return 0;
}
```

#### Bài 8

```c
#include <iostream>
using namespace std;

int main() {
	int n, sumUocSo = 0;
	cin >> n;
	for (int i = 1; i < n; ++i) {
		if (n % i == 0) {
			sumUocSo += i;
		}
	}
	cout << sumUocSo;
	return 0;
}
```

#### Bài 9

```c
#include <iostream>
using namespace std;

int sumDivisor(int n) {
  if (n == 1) return 1;
  int sum = 1;
  for (int i = 2; i * i < n; ++i) {
   if (n % i == 0) {
    sum += i;
    if (i != n / i) sum += n / i;
   }
  }
  return sum;
}

int main() {
  int n;
  cin >> n;
  if (sumDivisor(n) == n) cout << "Yes";
  else cout << "No";
  cout << endl;
  return 0;
}
```

#### Bài 10

```c
#include <iostream>
#include <cmath>
using namespace std;

int main() {
  double n, s3 = 0, s4 = 0;
  cin >> n;
  if (n <= 0) {
    cout << "Nhap sai\n";
    return 1;
  }
  for (int i = 1; i <= n; i++){
    s3 = sqrt(3 + s3);
  }
  cout << "s3 = " << s3 << endl;

  for (int i = 1; i <= n; i++){
    s4 = 1 / (2 + s4);
  }
  cout << "s4 = " << s4 << endl;
  return 0;
}
```

#### Bài 11

```c
#include <iostream>
using namespace std;

int main(){
  int n, countLe = 0;
  cin >> n;
  for (int i = 1; i <= n; i++) {
    if (n % i == 0 && i % 2 != 0) countLe++;
  }
  cout << "Co " << countLe << " uoc le\n";
  return 0;
}
```

#### Bài 12

```c
#include <iostream>
using namespace std;

int main(){
  int n, countChan = 0;
  cin >> n;
  for (int i = 1; i <= n; i++) {
    if (n % i == 0 && i % 2 == 0) countChan++;
  }
  cout << "Co " << countChan << " uoc chan\n";
  return 0;
}
```

#### Bài 13

```c
#include <iostream>
using namespace std;

int main(){
  int n;
  cin >> n;
  if (n <= 1) cout << "Khong la so nguyen to";
  else if (n <= 3) cout << "La so nguyen to";
  else if (n == 2 || n == 3) cout << "Khong la so nguyen to";
  else {
    for (int i = 5; i * i < n; i += 6) {
      if (n % i == 0 || n % i + 2) cout << "Khong la so nguyen to";
    }
    cout << "La so nguyen to";
  }
  return 0;
}
```

#### Bài 14

```c
#include <iostream>
using namespace std;

int main(){
  int n, soGanh = 0;
  cin >> n;
  int original = n;
  if (n < 100) {
    cout << "So ganh phai co 3 chu so\n";
    return 1;
  }
  for (int i = n; i > 0; i /= 10) {
    soGanh = soGanh * 10 + (i % 10);
  }
  if (soGanh == original) cout << "La so ganh\n";
  else cout << "Khong la so ganh\n";
  return 0;
}
```

#### Bài 15

```c
#include <iostream>
using namespace std;

bool isPrime (int n) {
  if (n <= 1) return false;
  if (n <= 3) return true;
  if (n % 2 == 0 || n % 3 == 0) return false;
  for (int i = 5; i * i <= n; i += 6) {
    if (n % i == 0 || n % i + 2 == 0) return false;
  }
  return true;
}

int main() {
  int n;
  cin >> n;
  for (int i = 1; i <= n; i++) {
    if (isPrime(i)) cout << i << " ";
  }
  cout << endl;
  return 0;
}
```

#### Bài 16

```c
#include <iostream>
using namespace std;

int sumDivisor(int n) {
  if (n == 1) return 1;
  int sum = 1;
  for (int i = 2; i * i < n; ++i) {
   if (n % i == 0) {
    sum += i;
    if (i != n / i) sum += n / i;
   }
  }
  return sum;
}

int main() {
  int n;
  cin >> n;
  for (int i = 2; i < n; i++) {
    if (sumDivisor(i) == i) cout << i << " ";
  }
  cout << endl;
  return 0;
}
```

# Buổi 2

#### Bài 1

```c
#include <iostream>
using namespace std;

int main() {
  int n, count = 0;
  cout << "Hay nhap so nguyen duong: ";
  cin >> n;
  int original = n;
  while (n > 0) {
    count++;
    n /= 10;
  }
  cout << "So " << original << " co " << count << " ky so!";
  return 0;
}
```

#### Bài 2

```c
#include <iostream>
using namespace std;

int main() {
  int n;
  cout << "Hay nhap so nguyen duong: ";
  cin >> n;
  int reverse = 0;
  while (n > 0) {
    reverse = reverse * 10 + (n % 10);
    n /= 10;
  }
  cout << "Gia tri dao nguoc la: " << reverse;
  return 0;
}
```

#### Bài 3

```c
#include <iostream>
using namespace std;

int main() {
  int n, i = 1;
  cin >> n;
  while (i <= n) {
    if (n % i == 0) cout << i << " ";
    i++;
  }
  return 0;
}
```

#### Bài 4

```c
#include <iostream>
using namespace std;

int main() {
  int i = 10;
  while (i >= 10 && i <= 99) {
    int start = i / 10 , end = i % 10;
    int dk1 = start * end, dk2 = (start + end) * 2;
    if (dk1 == dk2) cout << i << " ";
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
  int n;
  cout << "Hay nhap so nguyen duong: ";
  cin >> n;
  int original = n;
  int reverse = 0;
  while (n > 0) {
    reverse = reverse * 10 + (n % 10);
    n /= 10;
  }
  if (reverse == original) cout << original << " la so dao nguoc";
  else cout << original << " khong la so dao nguoc";
  return 0;
}
```

#### Bài 6

```c
#include <iostream>
#include <limits.h>
using namespace std;

int main() {
  int n;
  cout << "Hay nhap so nguyen duong: ";
  cin >> n;
  int max = INT_MIN, min = INT_MAX;
  while (n > 0) {
    int temp = n % 10;
    if (temp > max) max = temp;
    if (temp < min) min = temp;
    n /= 10;
  }
  cout << "Ky so lon nhat: " << max << endl;
  cout << "Ky so nho nhat: " << min << endl;
  return 0;
}
```

#### Bài 7

```c
#include <iostream>
using namespace std;

int main() {
  int n, i = 1, count = 0;
  cin >> n;
  while (i <= n) {
    if (n % i == 0) count++;
    i++;
  }
  cout << "Co " << count << " uoc so\n";
  return 0;
}
```

#### Bài 8

```c
#include <iostream>
using namespace std;

int ucln(int a, int b) {
  while (b != 0) {
    int temp = b;
    b = a % b;
    a = temp;
  }
  return a;
}

int bcnn(int a, int b) {
  return (a / ucln(a, b)) * b;
}

int main() {
  int a, b;
  cout << "Nhap hai so: ";
  cin >> a >> b;
  cout << "Boi chung nho nhat cua " << a << " va " << b << " la: " << bcnn(a, b) << endl;
  return 0;
}
```

#### Bài 9

```c
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  cout << setw(55) << "CHUONG TRINH XUAT LEN MAN HINH LICH CUA MOT THANG\n";
  int ngay, ngayBatdau, i = 1, i2 = 1, xuongDong = 1;
  cout << "Nhap so ngay cua thang: ";
  cin >> ngay;
  cout << "Ngay 1 bat dau vao thu may? (1 = chu nhat, 7 = thu bay): ";
  cin >> ngayBatdau;
  do {
    if (ngayBatdau == 1) break;
    cout << setw(5) << " ";
    i2++;
  } while (i2 < ngayBatdau);
  while (i <= ngay) {
    cout << setw(4) << i << " ";
    if ((xuongDong + i2 - 1) % 7 == 0) {
      cout << endl;
    }
    i++;xuongDong++;
  }

  return 0;
}
```

#### Bài 10

```c
#include <iostream>
#include <cmath>

using namespace std;

bool isArmstrong(int num) {
  int originalNum = num;
  int sum = 0;
  int numDigits = log10(num) + 1;

  while (num > 0) {
    int digit = num % 10;
    sum += pow(digit, numDigits);
    num /= 10;
  }

  return sum == originalNum;
}

int main() {
  int n;
  cout << "Nhap n: ";
  cin >> n;

  cout << "Day so Armstrong tu 1 den " << n << " la: ";
  for (int i = 1; i <= n; ++i) {
    if (isArmstrong(i)) {
      cout << i << " ";
    }
  }
  cout << endl;

  return 0;
}
```

#### Bài 11

```c
#include <iostream>

using namespace std;

void printFibonacci(int n) {
  int a = 0, b = 1;
  if (n >= 1) cout << a << " ";
  if (n >= 2) cout << b << " ";
  
  for (int i = 3; i <= n; ++i) {
    int c = a + b;
    cout << c << " ";
    a = b;
    b = c;
  }
  cout << endl;
}

int main() {
  int n;
  cout << "Nhap n: ";
  cin >> n;

  cout << n << " so dau tien trong day Fibonacci la: ";
  printFibonacci(n);

  return 0;
}
```
