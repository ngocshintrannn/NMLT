#include <iostream>

using namespace std;

bool isLeapYear(int year) {
  return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

bool isValidDate(int day, int month, int year) {
  if (year < 1 || month < 1 || month > 12 || day < 1) {
    return false;
  }

  int daysInMonth;
  switch (month) {
    case 4: case 6: case 9: case 11:
      daysInMonth = 30;
      break;
    case 2:
      daysInMonth = isLeapYear(year) ? 29 : 28;
      break;
    default:
      daysInMonth = 31;
  }

  return day <= daysInMonth;
}

int main() {
  int ngay, thang, nam;
  string ngayThang;

  cout << "Nhap ngay, thang, nam: ";
  cin >> ngay >> thang >> nam;

  if (!isValidDate(ngay, thang, nam)) {
    cout << "Du lieu khong hop le!" << endl;
    return 1;
  }

  switch (ngay) {
    case 1: ngayThang = "1st"; cout << ngayThang; break;
    case 2: ngayThang = "2nd"; cout << ngayThang; break;
    case 3: ngayThang = "3rd"; cout << ngayThang; break;
    case 21: ngayThang = "21st"; cout << ngayThang; break;
    case 22: ngayThang = "22nd"; cout << ngayThang; break;
    case 23: ngayThang = "23rd"; cout << ngayThang; break;
    case 31: ngayThang = "31st"; cout << ngayThang; break;
    default: ngayThang = to_string(ngay) + "th"; cout << ngayThang;
  }

  switch(thang) {
    case 1: cout << " January " << nam << endl; break;
    case 2: cout << " February " << nam << endl; break;
    case 3: cout << " March " << nam << endl; break;
    case 4: cout << " April " << nam << endl; break;
    case 5: cout << " May " << nam << endl; break;
    case 6: cout << " June " << nam << endl; break;
    case 7: cout << " July " << nam << endl; break;
    case 8: cout << " August " << nam << endl; break;
    case 9: cout << " September " << nam << endl; break;
    case 10: cout << " October " << nam << endl; break;
    case 11: cout << " November " << nam << endl; break;
    case 12: cout << " December " << nam << endl; break;
    default: cout << "Invalid month!" << endl; break;
  }

  return 0;
}