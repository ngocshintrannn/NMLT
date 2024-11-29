# Tuần 11

## Buổi 1

### Bài 1

```c
#include <iostream>
using namespace std;

void nhapMang(int a[], int n) {
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
}
void xuatMang(int a[], int n) {
	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
}

int main() {
	int n; cin >> n;
	int a[n];
	nhapMang(a, n);
	xuatMang(a, n);
	return 0;
}
```

### Bài 2

```c
#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n; cin >> n;
	vector<int> a(n);
	for (int &x : a) cin >> x;
	for (int x : a) {
		if (x % 2 == 1) cout << x << " ";
	}
	return 0;
}
```

### Bài 3

```c
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

const int num = 1e7;
int nt[num + 1];

void sang() {
    for (int i = 0; i <= num; i++) nt[i] = 1;
    nt[0] = nt[1] = 0;
    for (int i = 2; i <= sqrt(num); i++) {
        if (nt[i]) {
            for (int j = i * i; j <= num; j += i) nt[j] = 0;
        }
    }
}

int main() {
    sang();
    int n; cin >> n;
    vector<int> a(n);
    for (int &x : a) {
        cin >> x;
        if (nt[x]) cout << x << " ";
    }
    return 0;
}
```

### Bài 4

```c
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n; cin >> n;
    vector<int> a(n);
    int min = 1e9, pos;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] <= min) {
            min = a[i];
            pos = i;
        }
    }
    cout << pos;
    return 0;
}
```

### Bài 5

```c
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

const int num = 1e7;
int nt[num + 1];

void sang() {
    for (int i = 0; i <= num; i++) nt[i] = 1;
    nt[0] = nt[1] = 0;
    for (int i = 2; i <= sqrt(num); i++) {
        if (nt[i]) {
            for (int j = i * i; j <= num; j += i) nt[j] = 0;
        }
    }
}

int main() {
    sang();
    int n; cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (nt[a[i]]) cout << i << " ";
    }
    return 0;
}
```

### Bài 6

```c
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n; cin >> n;
    vector<int> a(n);
    int maxAm = -1e9, pos;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] < 0 && a[i] > maxAm) {
            maxAm = a[i];
            pos = i;
        }
    }
    cout << pos;
    return 0;
}
```

### Bài 7

```c
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n; cin >> n;
    vector<int> a(n);
    int am = 0, duong = 0;
    for (int &x : a) {
        cin >> x;
        if (x >= 0) ++duong;
        else ++am;
    }
    cout << am << " " << duong;
    return 0;
}
```

### Bài 8

```c
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, x; cin >> n >> x;
    vector<int> a(n);
    int cnt = 0;
    for (int &i : a) {
        cin >> i;
        if (i == x) ++cnt;
    }
    cout << cnt;
    return 0;
}
```

### Bài 9

```c
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

const int num = 1e7;
int nt[num + 1];

void sang() {
    for (int i = 0; i <= num; i++) nt[i] = 1;
    nt[0] = nt[1] = 0;
    for (int i = 2; i <= sqrt(num); i++) {
        if (nt[i]) {
            for (int j = i * i; j <= num; j += i) nt[j] = 0;
        }
    }
}

int main() {
    sang();
    int n; cin >> n;
    vector<int> a(n);
    int sum = 0;
    for (int &x : a) {
        cin >> x;
        if (nt[x]) sum += x;
    }
    cout << sum;
    return 0;
}
```

### Bài 10

```c
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

const int num = 1e7;
int nt[num + 1];

void sang() {
    for (int i = 0; i <= num; i++) nt[i] = 1;
    nt[0] = nt[1] = 0;
    for (int i = 2; i <= sqrt(num); i++) {
        if (nt[i]) {
            for (int j = i * i; j <= num; j += i) nt[j] = 0;
        }
    }
}

int main() {
    sang();
    int n; cin >> n;
    vector<int> a(n);
    int sum = 0;
    for (int &x : a) {
        cin >> x;
        if (nt[x]) sum += x;
    }
    cout << sum;
    return 0;
}
```

### Bài 11

```c
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>

using namespace std;

int main() {
    int n; cin >> n;
    vector<int> a(n);
    srand(time(0));
    for (int &x : a) x = rand() % 100;
    for (int x : a) cout << x << " ";
    return 0;
}
```

### Bài 12

```c
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n; cin >> n;
    vector<float> a(n);
    for (float &x : a) cin >> x;
    for (float x : a) {
        if (x < 0) cout << x << ' ';
    }
    return 0;
}
```

### Bài 13

```c
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, x; cin >> n >> x;
    vector<int> a(n);
    int pos;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] == x) pos = i;
    }
    cout << pos;
    return 0;
}
```

### Bài 14

```c
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n; cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        if (a[i] < 0) {
            cout << i;
            return 0;
        }
    }
    cout << -1;
    return 0;
}
```

### Bài 15

```c
#include <iostream>
#include <vector>

using namespace std;

int main() {
  int n; cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  int chan = 0, le = 0;
  for (int x : a) {
    if (x % 2 == 0) ++chan;
    else ++le;
  }
  cout << chan << " " << le;
  return 0;
}
```

### Bài 16

```c
#include <iostream>
#include <vector>

using namespace std;

bool perfectNum(int n) {
  int sum = 0;
  for (int i = 1; i <= n/2; i++) {
    if (n % i == 0) sum += i;
  }
  return n == sum;
}

int main() {
  int n; cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  int cnt = 0;
  for (int x : a) {
    if (perfectNum(x)) ++cnt;
  }
  cout << cnt;
  return 0;
}
```

### Bài 17

```c
#include <iostream>
#include <vector>

using namespace std;

int main() {
  int n; cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  int sum = 0;
  for (int x : a) {
    if (x % 2 == 0) sum += x;
  }
  cout << sum;
  return 0;
}
```

### Bài 18

```c
#include <iostream>
#include <vector>

using namespace std;

int main() {
  int n; cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  int sum = 0;
  for (int i = 0; i < n; i++) {
    if (a[i] % 2 == 0) sum += i;
  }
  cout << sum;
  return 0;
}
```

### Bài 19

```c
#include <iostream>
#include <vector>

using namespace std;

int main() {
  int n; cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  int sum = 0;
  for (int i = 1; i < n-1; i++) {
    if (a[i] > a[i-1] && a[i] > a[i+1]) sum += a[i];
  }
  cout << sum;
  return 0;
}
```

### Bài 20

```c
#include <iostream>
#include <vector>

using namespace std;

bool perfectNum(int n) {
  int sum = 0;
  for (int i = 1; i <= n/2; i++) {
    if (n % i == 0) sum += i;
  }
  return n == sum;
}

int main() {
  int n; cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  int cnt = 0, sum = 0;
  for (int x : a) {
    if (perfectNum(x)) {
      sum += x;
      ++cnt;
    }
  }
  int trungBinh = sum / cnt;
  cout << trungBinh;
  return 0;
}
```

## Buổi 2

### Bài 1

```c
#include <iostream>

using namespace std;

int main() {
  int n; cin >> n;
  int d[100], a[100], b[100];
  int c = 0, l = 0;
  for (int i = 0; i < n; i++) {
    int x; cin >> x;
    if (x % 2) a[l++] = x;
    else b[c++] = x;
    d[i] = x;
  }
  for (int i = 0; i < c; i++) cout << b[i] << " ";
  cout << endl;
  for (int i = 0; i < l; i++) cout << a[i] << " ";
  return 0;
}
```

### Bài 2

```c
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
  int n; cin >> n;
  vector<int> a(n);
  for (int &x : a) cin >> x;
  sort(a.begin(), a.end(), greater<int>());
  for (int x : a) cout << x << " ";
  return 0;
}
```

### Bài 3

```c
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
  int n; cin >> n;
  vector<int> a(n);
  for (int &x : a) cin >> x;
  vector<int> oddNumbers;
  for (int x : a) {
    if (x % 2 != 0) oddNumbers.push_back(x);
  }
  sort(oddNumbers.begin(), oddNumbers.end());
  int oddIndex = 0;
  for (int &x : a) {
    if (x % 2 != 0) x = oddNumbers[oddIndex++];
  }
  for (int x : a) cout << x << " ";
  return 0;
}
```

### Bài 4

```c
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
  int n; cin >> n;
  vector<int> a(n);
  for (int &x : a) cin >> x;
  vector<int> evenNumbers, oddNumbers;
  for (int x : a) {
    if (x % 2 == 0) evenNumbers.push_back(x);
    else oddNumbers.push_back(x);
  }
  sort(evenNumbers.begin(), evenNumbers.end());
  sort(oddNumbers.begin(), oddNumbers.end(), greater<int>());
  for (int x : evenNumbers) cout << x << " ";
  for (int x : oddNumbers) cout << x << " ";
  return 0;
}
```

### Bài 5

```c
#include <iostream>
#include <vector>

using namespace std;

int main() {
  int n; cin >> n;
  vector<int> a(n);
  for (int &x : a) cin >> x;
  int max = -1e9, pos;
  for (int i = 0; i < n; i++) {
    if (a[i] >= max) {
      max = a[i];
      pos = i;
    }
  }
  a.erase(a. begin() + pos);
  for (int x : a) cout << x << " ";
  return 0;
}
```

### Bài 6

```c
#include <iostream>
#include <vector>

using namespace std;

int main() {
  int n, x; cin >> n >> x;
  vector<int> a(n);
  for (int &y : a) cin >> y;
  for (auto it = a.begin(); it != a.end();) {
    if (*it < x) a.erase(it);
    else ++it;
  }
  for (int y : a) cout << y << " ";
  return 0;
}
```

### Bài 7

```c
#include <iostream>
#include <vector>

using namespace std;

int main() {
  int n, x; cin >> n >> x;
  vector<int> a(n);
  for (int &y : a) cin >> y;
  a.insert(a.begin(), x);
  for (int y : a) cout << y << " ";
  return 0;
}
```

### Bài 8

```c
#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

bool nt(int n) {
  if (n == 0 || n == 1) return false;
  for (int i = 2; i <= static_cast<int>(sqrt(n)); i++) {
    if (n % i == 0) return false;
  }
  return true;
}

int main() {
  int n, x; cin >> n >> x;
  vector<int> a(n);
  for (int &x : a) cin >> x;
  for (int i = 0; i < n; i++) {
    if (nt(a[i])) {
      a.insert(a.begin() + i, x);
      break;
    }
  }
  for (int x : a) cout << x << " ";
  return 0;
}
```

### Bài 9

```c
#include <iostream>

using namespace std;

int main() {
  int n, m; cin >> n >> m;
  int a[100], b[100], c[100];
  for (int i = 0; i < n; i++) cin >> a[i];
  for (int i = 0; i < m; i++) cin >> b[i];
  int cnt = 0;
  while (cnt < n) {
    c[cnt] = a[cnt];
    ++cnt;
  }
  int j = 0;
  while (j < m) {
    c[cnt] = b[j];
    ++cnt; ++j;
  }
  for (int i = 0; i < cnt; i++) cout << c[i] << " ";
  return 0;
}
```
