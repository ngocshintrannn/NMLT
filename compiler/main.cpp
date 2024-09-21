#include <iostream>

using namespace std;

int main() {
  char player1, player2;

  cout << "Nhap player 1, player 2: ";
  cin >> player1 >> player2;

  switch (player1) {
    case 'B': case 'b':
      switch (player2) {
        case 'B': case 'b':
          cout << "Hoa\n";
          break;
        case 'K': case 'k':
          cout << "Player 1 thang\n";
          break;
        case 'G': case 'g':
          cout << "Player 2 thang\n";
          break;
      }
      break;
    case 'K': case 'k':
      switch (player2) {
        case 'B': case 'b':
          cout << "Player 2 thang\n";
          break;
        case 'K': case 'k':
          cout << "Hoa\n";
          break;
        case 'G': case 'g':
          cout << "Player 1 thang\n";
          break;
      }
      break;
    case 'G': case 'g':
      switch (player2) {
        case 'B': case 'b':
          cout << "Player 1 thang\n";
          break;
        case 'K': case 'k':
          cout << "Player 2 thang\n";
          break;
        case 'G': case 'g':
          cout << "Hoa\n";
          break;
      }
      break;
  }

  return 0;
}