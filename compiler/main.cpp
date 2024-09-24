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