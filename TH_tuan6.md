
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
#include <iostream>
using namespace std;

int main() {
    float litXang, kmDaDi;

    while (true) {
        cout << "Hay nhap vao so lit xang da dung (-1 de ket thuc): ";
        cin >> litXang;
        if (litXang == -1) {
            break;
        }
        cout << "Hay nhap vao so km da chay: ";
        cin >> kmDaDi;
        float kmPerLit = kmDaDi / litXang;
        cout << "So km/lit cho binh xang nay la: " << kmPerLit << " km/lit" << endl;
    }

    return 0;
}
```

#### Bài 2

```c
#include <iostream>
using namespace std;

int main() {
    float doanhThuNV;

    while (true) {
        cout << "Hay nhap doanh thu cua nhan vien (-1 de ket thuc): ";
        cin >> doanhThuNV;
        if (doanhThuNV == -1) {
            break;
        }
        float luong = (doanhThuNV * 0.09) + 200;
        cout << "Luong cua nhan vien la: $" << luong << endl;
    }

    return 0;
}
```

#### Bài 3

```c
#include <iostream>
using namespace std;

int main() {
    int thang;

    while (true) {
        cout << "Nhap thang trong nam (-1 de ket thuc): ";
        try_again:
        cin >> thang;
        if (thang == -1) {
            break;
        } else if (thang < 1 || thang > 12) {
            cout << "Nhap lai: ";
            goto try_again;
        }
        switch (thang) {
            case 12:case 1:case 2:
            cout << "Mua Dong\n";
            break;
            case 3:case 4:case 5:
            cout << "Mua Xuan\n";
            break;
            case 6:case 7:case 8:
            cout << "Mua He\n";
            break;
            case 9:case 10:case 11:
            cout << "Mua Thu\n";
            break;
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
    int thu;

    while (true) {
        cout << "Nhap thu trong tuan (-1 de ket thuc): ";
        try_again:
        cin >> thu;
        if (thu == -1) {
            break;
        } else if (thu < 2 || thu > 8) {
            cout << "Nhap lai: ";
            goto try_again;
        }
        switch (thu) {
            case 2:
            cout << "Monday\n";
            break;
            case 3:
            cout << "Tuesday\n";
            break;
            case 4:
            cout << "Wednesday\n";
            break;
            case 5:
            cout << "Thursday\n";
            break;
            case 6:
            cout << "Friday\n";
            break;
            case 7:
            cout << "Saturday\n";
            break;
            case 8:
            cout << "Sunday\n";
            break;
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
    int dienTruoc, dienSau;

    while (true) {
        cout << "Nhap so dien thang truoc (-1 de ket thuc): ";
        try_again_dienTruoc:
        cin >> dienTruoc;
        if (dienTruoc == -1)break;
        else if (dienTruoc < 0) {
            cout << "Nhap lai: ";
            goto try_again_dienTruoc;
        }
        cout << "Nhap so dien thang sau: ";
        try_again_dienSau:
        cin >> dienSau;
        if (dienSau <= dienTruoc) {
            cout << "Khong duoc thap hon dien truoc: ";
            goto try_again_dienSau;
        }
        int soDien = dienSau - dienTruoc;
        cout << "So tien dien da tieu thu: " << soDien << endl;
        break;
    }
    return 0;
}
```

#### Bài 6

```c
#include <iostream>
#include <climits>
using namespace std;

int main() {
    int n, maxNumber = INT_MIN;

    while (true) {
        cin >> n;
        if (n == 0) {
            break;
        }
        if (n > maxNumber) {
            maxNumber = n;
        }
    }
    cout << "Gia tri lon nhat: " << maxNumber;
    return 0;
}
```

#### Bài 7

```c
#include <iostream>
using namespace std;

int main() {
    int a,b;
    while (true) {
        cout << "Nhap tu va mau: ";
        cin >> a >> b;
        if (a == 0 || b == 0) {
            break;
        }
        cout << "Dang thap phan la: " << (float)a/b << endl;
    }
    return 0;
}
```

#### Bài 8

```c
#include <iostream>
using namespace std;

int main() {
    int n, sum=0;
    while (true) {
        cout << "Nhap so nguyen duong: ";
        try_again:
        cin >> n;
        if (n < 0) {
            cout << "Nhap lai: ";
            goto try_again;
        }
        int temp;
        while (n != 0) {
            temp = n % 10;
            sum += temp;
            n /= 10;
        }
        break;
    }
    cout << "Tong cac chu so cua so nguyen duong la: " << sum;
    return 0;
}
```

#### Bài 9

```c
#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;
    while (true) {
        again:
        cin >> n;
        if (n == 0) {
            break;
        } else if (n > 0) {
            sum += n;
            goto again;
        }
    }
    cout << sum << endl;
    return 0;
}
```

#### Bài 10

```c
#include <iostream>
using namespace std;

int main() {
    int gioVao, gioRa, phutVao, phutRa;
    while (true) {
        cout << "Nhap gio vao, phut vao, gio ra, phut ra: ";
        try_again:
        cin >> gioVao >> phutVao >> gioRa >> phutRa;
        if (gioVao < 0 || gioVao >= 24 || phutVao < 0 || phutVao >= 60 || gioRa < 0 || gioRa >= 24 || phutRa < 0 || phutRa >= 60) {
            cout << "Nhap lai: ";
            goto try_again;
        } else if (gioRa < gioVao || (gioRa == gioVao && phutRa < phutVao)) {
            cout << "Nhap lai: ";
            goto try_again;
        } else {
            int thanhTien = ((gioRa - gioVao) + (((float)phutRa - phutVao) / 60)) * 6000;
            cout << "So tien phai tra: " << thanhTien;
            break;
        }
    }
    return 0;
}
```

#### Bài 11

```c
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int n, i = 0;
    srand(time(0));
    int random_number = rand() % 10 + 1;
    while (i <= 3) {
        cout << "Doan so tu 1 den 10: ";
        try_again:
        cin >> n;i++;
        if (n == random_number) {
            cout << "Xin chuc mung! Ban da chien thang.";
            break;
        } else if (i == 3) {
            cout << "Ban da het luot doan. So bi mat la: " << random_number;
            break;
        } else {
            cout << "Hay doan lai!: ";
            goto try_again;
        }
    }
    return 0;
}
```
