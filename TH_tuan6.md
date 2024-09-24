
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
#include <iostream>
#include <cmath>
using namespace std;

int main() {
  int n, x, sum=0, i=1;

  cin >> n >> x;

  if (n < 0) {
    cout << "Nhap sai!";
    return 1;
}

while (i <= n) {
    if (i % 2 == 0) {
        sum += pow(-1, i - 1) * (pow(x, i) / i);
    }
    i++;
}

cout << sum;
return 0;
}
```

#### Bài 11

```c
#include <iostream>
using namespace std;

int main() {
	int n, temp, countChan = 0, countLe = 0;

	cin >> n;

	while (n != 0) {
		temp = n % 10;
		if (temp % 2 == 0) {
			countChan++;
		}
		else {
			countLe++;
		}
		n /= 10;
	}

	cout << countChan << " chan " << countLe << " le";

	return 0;
}
```

#### Bài 12

```c
#include <iostream>
using namespace std;

int main() {
	int n, countAm = 0;

	while (true) {
		cin >> n;
		if (n == 0) break;
		else if (n < 0) countAm++;
	}

	cout << "Co " << countAm << " so am";

	return 0;
}
```

#### Bài 13

```c
#include <iostream>
using namespace std;

int main() {
	int soLuong, donGia, thanhTien;

	while (true) {
		cin >> soLuong >> donGia;
		if (soLuong == 0) break;
		if (soLuong > 10) thanhTien = (soLuong * donGia) * 0.1;
		else if (soLuong > 20) thanhTien = (soLuong * donGia) * 0.2;
		else thanhTien = soLuong * donGia;
	}

	cout << thanhTien;

	return 0;
}
```

#### Bài 14

```c
#include <iostream>
using namespace std;

int main() {
	int a, b;

	cin >> a >> b;

	while (a == b) {
		cout << "Nhap lai: ";
		cin >> a >> b;
	}

	while (b != 0) {
		int temp = a % b;
		a = b;
		b = temp;
	}

	cout << a;
	
	return 0;
}
```

#### Bài 15

```c
#include <iostream>
using namespace std;

int main() {
	int n;

	cin >> n;

	int temp = n % 10;
	int temp1 = n / 10;

	while (true) {
		int temp2 = n % 10;
		int temp3 = n / 10;

		if (temp2 < temp3) {
			cout << temp3 << " " << temp2 << endl;
		}
		else {
			cout << temp2 << " " << temp3 << endl;
		}
		cin >> n;
		if (n == temp || n == temp1) return false;
	}

	return 0;
}
```

#### Bài 16

```c
#include <iostream>
#include <limits.h> // Thu vien chua ham INT_MAX

using namespace std;

int main() {
  int n, temp = INT_MAX; // Tao temp = INT_MAX de so sanh

  while (true) {
    cin >> n;
    if (n == 0) break;
    else if (n > 0 && n < temp) {
      temp = n;
    }
  }

  if (temp == INT_MAX) {
    cout << "Khong co so duong nao duoc nhap";
  } else {
    cout << temp;
  }

  return 0;
}
```

#### Bài 17

```c
#include <iostream>
#include <limits.h> // Thu vien chua ham INT_MIN

using namespace std;

int main() {
  int n, temp = INT_MIN; // Tao temp = INT_MIN de so sanh

  while (true) {
    cin >> n;
    if (n == 0) break;
    else if (n < 0 && n > temp) {
      temp = n;
    }
  }

  if (temp == INT_MIN) {
    cout << "Khong co so am nao duoc nhap";
  } else {
    cout << temp;
  }

  return 0;
}
```

#### Bài 18

```c
#include <iostream>
#include <limits.h> // Thu vien chua ham INT_MIN

using namespace std;

int main() {
  int n, i = 1, temp = INT_MIN, temp2 = INT_MIN; // Tao temp = INT_MIN de so sanh

  while (i <= 10) {
    cin >> n;
    if (n < 0) { // Kiem tra so am
      if (n > temp) {
        temp2 = temp; 
        temp = n;
      } else if (n > temp2) {
        temp2 = n;
      }
    }
    i++;
  }

  if (temp == INT_MIN) {
    cout << "Khong co so am nao duoc nhap";
  } else if (temp2 == INT_MIN) {
    cout << "Chi co mot so am duoc nhap: " << temp;
  } else {
    cout << "Hai so am lon nhat la: " << temp << " va " << temp2;
  }

  return 0;
}
```

#### Bài 19

```c
#include <iostream>

using namespace std;

int main() {
  int n;
  int du[32]; // Mảng để lưu trữ các giá trị dư, giả sử số nguyên không quá 32 bit
  int count = 0; // Biến đếm để theo dõi số lượng giá trị dư

  cin >> n;

  while (n != 0) {
    du[count] = n % 2; // Lưu trữ giá trị dư vào mảng
    count++; // Tăng biến đếm
    n /= 2;
  }

  // In ra các giá trị từ mảng theo thứ tự ngược lại
  for (int i = count - 1; i >= 0; i--) {
    cout << du[i];
  }

  return 0;
}
```

#### Bài 20

```c
#include <iostream>

using namespace std;

bool laNamNhuan(int year) {
  if (year % 4 != 0 && year % 400 != 0) {
    return false;
  } else if (year % 100 != 0) {
    return true;
  }
}

int soNgayTrongThang(int thang, int nam) {
  switch (thang) {
    case 4: case 6: case 9: case 11:
      return 30;
    case 2:
      if (laNamNhuan(nam)) {
        return 29;
      } else {
        return 28;
      }
    default: return 31;
  }
}

int ngayThuTrongNam(int ngay, int thang, int nam) {
  int soNgay = 0;
  for (int i = 1; i < thang; i++) {
    soNgay += soNgayTrongThang(i, nam);
  }
  return soNgay + ngay;
}

int main() {
  int ngay, thang, nam;
  cin >> ngay >> thang >> nam;

  // kiem tra nam nhuan
  if (laNamNhuan(nam)) {
    cout << "Nam " << nam << " la nam nhuan\n";
  } else {
    cout << "Nam " << nam << " khong phai la nam nhuan\n";
  }

  // in thang co bao nhieu ngay
  cout << "Thang " << thang << " co " << soNgayTrongThang(thang, nam) << " ngay\n";

  // in ngay thu bao nhieu trong nam
  cout << "Ngay " << ngay << "/" << thang << "/" << nam << " la ngay thu " << ngayThuTrongNam(ngay, thang, nam) << " trong nam\n";

  // hoi nguoi dung co muon tiep tuc khong
  cout << "Ban co muon tiep tuc khong? (Y/n)? ";
  char c;
  cin >> c;
  switch (c) {
    case 'N': case 'n':
      cout << "Tam biet\n";
      break;
    default: main();
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
