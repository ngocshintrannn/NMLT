# Giải CĐ CNTT 24B-OnTap_KiemTra

```c
#include <iostream>
#include <cmath>

using namespace std;

//others
const int SIZE = 1005;
int cntChan = 0, cntLe = 0;
const int num7 = 1e7;
int nt[num7+1];
void sieve() {
  for (int i = 0; i <= num7; ++i) nt[i] = 1;
  nt[0] = nt[1] = 0;
  for (int i = 2; i <= sqrt(num7); ++i) {
    if (nt[i]) {
      for (int j = i * i; j <= num7; j += i) nt[j] = 0;
    }
  }
}

//1
void nhap(int a[], int n) {
  cout << "Nhap cac phan tu:\n";
  for (int i = 0; i < n; ++i) cin >> a[i];
}

//2
void xuat(int a[], int n) {
  for (int i = 0; i < n; ++i) cout << a[i] << " ";
}

//3
int tong(int a[], int n) {
  int s = 0;
  for (int i = 0; i < n; ++i) s += a[i];
  return s;
}

//4
int tongLe(int a[], int n) {
  int s = 0;
  for (int i = 0; i < n; ++i) {
    if (a[i] % 2) s += a[i];
  }
  return s;
}

//5
int demChan(int a[], int n) {
  int cnt = 0;
  for (int i = 0; i < n; ++i) {
    if (a[i] % 2 == 0) ++cnt;
  }
  return cnt;
}

//6
bool checkSoGanh(int a[], int n) {
  for (int i = 0; i < n; ++i) {
    if (a[i] < 100) continue;
    int temp = a[i], reverse = 0;
    while (temp > 0) {
      reverse = reverse * 10 + (temp % 10);
      temp /= 10;
    }
    if (reverse == a[i]) return true;
  }
  return false;
}

//7
void listNT(int a[], int n) {
  for (int i = 0; i < n; ++i) {
    if (nt[a[i]]) cout << a[i] << " ";
  }
}

//8
void demChuSo(int a[], int n) {
  for (int i = 0; i < n; ++i) {
    int temp = a[i], cnt = 0;
    while (temp > 0) {
      ++cnt;
      temp /= 10;
    }
    cout << cnt << " ";
  }
}

//9
int findMax(int a[], int n) {
  int max = -1e9;
  for (int i = 0; i < n; ++i) {
    if (a[i] > max) max = a[i];
  }
  return max;
}

//10
int findMin(int a[], int n) {
  int min = 1e9;
  for (int i = 0; i < n; ++i) {
    if (a[i] < min) min = a[i];
  }
  return min;
}

//11
int findMaxChan(int a[], int n) {
  int max = -1e9;
  for (int i = 0; i < n; ++i) {
    if (a[i] > max && a[i] % 2 == 0) max = a[i];
  }
  return max;
}

//12
void tangDan(int a[], int n) {
  for (int i = 0; i < n - 1; ++i) {
    for (int j = i + 1; j < n; ++j) {
      if (a[i] > a[j]) swap(a[i], a[j]);
    }
  }
}

//13
void giamDanChuSo(int a[], int n) {
  for (int i = 0; i < n - 1; ++i) {
    for (int j = i + 1; j < n; ++j) {
      if (a[i] % 10 < a[j] % 10) swap(a[i], a[j]);
    }
  }
}

//14
void tachChanLe(int a[], int chan[], int le[], int n) {
  for (int i = 0; i < n; ++i) {
    if (a[i] % 2) le[cntLe++] = a[i];
    else chan[cntChan++] = a[i];
  }
}

//15
void themGiaTri(int a[], int n) {
  int value, x;
  cout << "Nhap gia tri: "; cin >> value;
  cout << "Nhap vi tri: "; cin >> x;
  for (int i = n + 1; i > x; --i) a[i] = a[i - 1];
  a[x] = value;
}

//16
void themGiaTriTangDan(int a[], int n) {
  int value;
  cout << "Nhap gia tri: "; cin >> value;
  for (int i = 1; i < n + 1; ++i) {
    if (value >= a[i - 1] && value <= a[i]) {
      for (int j = n + 1; j > i; --j) a[j] = a[j - 1];
      a[i] = value;
      break;
    }
  }
}

int main() {
  sieve();
  
  bool checkNhap = false;
  int choose, n;
  int a[SIZE], chan[SIZE], le[SIZE];
  
  do {
    restart:
    system("cls");
    cout << "===== MENU =====\n";
    cout << "1. Nhap mang cac so nguyen\n";
    cout << "2. Xuat mang cac so nguyen\n";
    cout << "3. Tinh tong cac phan tu trong mang\n";
    cout << "4. Tinh tong cac phan tu la so le\n";
    cout << "5. Dem cac phan tu la so chan\n";
    cout << "6. Kiem tra trong mang co ton tai so ganh nao hay khong?\n";
    cout << "7. Liet ke cac phan tu la so nguyen to\n";
    cout << "8. Xuat ra so chu so cua moi phan tu\n";
    cout << "9. Tim gia tri lon nhat trong mang\n";
    cout << "10. Tim gia tri be nhat trong mang\n";
    cout << "11. Tim gia tri chan lon nhat trong mang\n";
    cout << "12. Sap xep mang tang dan\n";
    cout << "13. Sap xep mang giam dan theo chu so hang don vi cua moi so\n";
    cout << "14. Tach mang thanh mot mang so chan va mot mang so le\n";
    cout << "15. Them mot gia tri vao vi tri bat ky trong mang\n";
    cout << "16. Them mot gia tri vao trong mang da sap xep tang dan ma mang van tang dan\n";
    cout << "-1. Clear man hinh\n";
    cout << "0. Thoat\n";
    cout << "===== ===== =====\n";
    try_again:
    cout << "Chon chuc nang (1 - 16): "; cin >> choose;

    if (choose == 0) break;
    else if (choose == -1) continue;
    else if (choose != 1 && checkNhap == false) {
      cout << "Vui long nhap mang truoc!\n";
      goto try_again;
    } else checkNhap = true;

    switch (choose) {
    	case -1:
    	goto restart;
      case 0:
        cout << "Thoat chuong trinh...\n";
        break;
      case 1:
        cout << "Nhap so phan tu: "; cin >> n;
        nhap(a, n);
        goto try_again;
        break;
      case 2:
      	cout << "Cac phan tu trong mang:\n";
        xuat(a, n);
        cout << endl;
        goto try_again;
        break;
      case 3:
        cout << "Tong la: " << tong(a, n) << endl;
        goto try_again;
        break;
      case 4:
        cout << "Tong cac so le la: " << tongLe(a, n) << endl;
        goto try_again;
        break;
      case 5:
        cout << "So phan tu chan la: " << demChan(a, n) << endl;
        goto try_again;
        break;
      case 6:
        if (checkSoGanh(a, n)) cout << "Mang ton tai so ganh\n";
        else cout << "Mang khong ton tai so ganh\n";
        goto try_again;
        break;
      case 7:
      	cout << "Cac so nguyen to la:\n";
        listNT(a, n);
        cout << endl;
        goto try_again;
        break;
      case 8:
      	cout << "So chu so cua moi phan tu la:\n";
        demChuSo(a, n);
        cout << endl;
        goto try_again;
        break;
      case 9:
        cout << "Gia tri lon nhat la: " << findMax(a, n) << endl;
        goto try_again;
        break;
      case 10:
        cout << "Gia tri nho nhat la: " << findMin(a, n) << endl;
        goto try_again;
        break;
      case 11:
        cout << "Gia tri chan lon nhat la: " << findMaxChan(a, n) << endl;
        goto try_again;
        break;
      case 12:
        cout << "Da sap xep tang dan!\n";
        tangDan(a, n);
        goto try_again;
        break;
      case 13:
        cout << "Da sap xep giam dan theo chu so!\n";
        giamDanChuSo(a, n);
        goto try_again;
        break;
      case 14:
        tachChanLe(a, chan, le, n);
        cout << "Mang chan: "; xuat(chan, cntChan); cout << endl;
        cout << "Mang le: "; xuat(le, cntLe); cout << endl;
        cntChan = cntLe = 0;
        goto try_again;
        break;
      case 15:
        themGiaTri(a, n);
        n++;
        cout << "Da them gia tri vao mang!\n";
        goto try_again;
        break;
      case 16:
        themGiaTriTangDan(a, n);
        n++;
        cout << "Da them gia tri vao mang!\n";
        goto try_again;
        break;
      default:
        cout << "Chuc nang nay khong ton tai!\n";
        goto try_again;
    }
  } while (choose != 0);
  return 0;
}
```
