#include <vector>
#include <iostream>

using namespace std;
  int user_input;
  int row1[3] = {1, 2, 3};
  int row2[3] = {4, 5, 6};
  int row3[3] = {7, 8, 9};

void display_welcome() {
  cout << "-------------------------\n";
  cout << "|   1   |   2   |   3   |\n";
  cout << "-------------------------\n";
  cout << "|   4   |   5   |   6   |\n";
  cout << "-------------------------\n";
  cout << "|   7   |   8   |   9   |\n";
  cout << "-------------------------\n";
  cout << "Welcome to Tic-Tac-Toe. Press enter to begin: ";
  cin.ignore();
  cout << "X goes first.\n";
}

void mark_x() {
  cout << "Dear Player X, please enter the slot you would like to insert:\n";
  cin >> user_input;
  if (user_input < 4) {
    for (int i=0; i<3; i++) {
      if (user_input == row1[i]) {
        row1[i] = 88;
      } 
    }
  }

  if (user_input > 3 && user_input < 7) {
    for (int i=0; i<3; i++) {
      if (user_input == row2[i]) {
        row2[i] = 88;
      } 
    }
  }

  if (user_input > 6 && user_input < 10) {
    for (int i=0; i<3; i++) {
      if (user_input == row3[i]) {
        row3[i] = 88;
      } 
    }
  }
}

void mark_o() {
  cout << "Dear Player O, please enter the slot you would like to insert:\n";
  cin >> user_input;
  if (user_input < 4) {
    for (int i=0; i<3; i++) {
      if (user_input == row1[i]) {
        row1[i] = 99;
      } 
    }
  }

  if (user_input > 3 && user_input < 7) {
    for (int i=0; i<3; i++) {
      if (user_input == row2[i]) {
        row2[i] = 99;
      } 
    }
  }

  if (user_input > 6 && user_input < 10) {
    for (int i=0; i<3; i++) {
      if (user_input == row3[i]) {
        row3[i] = 99;
      } 
    }
  }
}

void display_grid() {
  cout << "-------------------------\n";
  cout << "|";
  for (int i=0; i<3; i++) {
    if (row1[i] == 88) {
      cout << "   X   |";
      } else if (row1[i] == 99) {
        cout << "   O   |";
      } else {
        cout << "   " << row1[i] << "   |";
      }
  }
  cout << "\n";
  cout << "-------------------------\n";

  cout << "|";
  for (int i=0; i<3; i++) {
    if (row2[i] == 88) {
      cout << "   X   |";
      } else if (row2[i] == 99) {
        cout << "   O   |";
      } else {
        cout << "   " << row2[i] << "   |";
      }
  }
  cout << "\n";
  cout << "-------------------------\n";

  cout << "|";
  for (int i=0; i<3; i++) {
    if (row3[i] == 88) {
      cout << "   X   |";
      } else if (row3[i] == 99) {
        cout << "   O   |";
      } else {
        cout << "   " << row3[i] << "   |";
      }
  }
  cout << "\n";
  cout << "-------------------------\n";
}

bool check_win() {
  if (row1[0] == 88) {
    if (row1[1] == 88 && row1[2] == 88) {
      cout << "Player X won!\n";
      return true;
    } else if (row2[0] == 88 && row3[0] == 88) {
      cout << "Player X won!\n";
      return true;
    } else if (row2[1] == 88 && row3[2] == 88) {
      cout << "Player X won!\n";
      return true;
    }
  }

  if (row1[0] == 99) {
    if (row1[1] == 99 && row1[2] == 99) {
      cout << "Player O won!\n";
      return true;
    } else if (row2[0] == 99 && row3[0] == 99) {
      cout << "Player O won!\n";
      return true;
    } else if (row2[1] == 99 && row3[2] == 99) {
      cout << "Player O won!\n";
      return true;
    }
  }

  if (row2[1] == 88) {
    if (row2[0] == 88 && row2[2] == 88) {
      cout << "Player X won!\n";
      return true;
    } else if (row1[1] == 88 && row3[1] == 88) {
      cout << "Player X won!\n";
      return true;
    } else if (row1[2] == 88 && row3[0] == 88) {
      cout << "Player X won!\n";
      return true;
    }
  }

  if (row2[1] == 99) {
    if (row2[0] == 99 && row2[2] == 99) {
      cout << "Player O won!\n";
      return true;
    } else if (row1[1] == 99 && row3[1] == 99) {
      cout << "Player O won!\n";
      return true;
    } else if (row1[2] == 99 && row3[0] == 99) {
      cout << "Player O won!\n";
      return true;
    }
  }

  if (row3[2] == 88) {
    if (row1[2] == 88 && row2[2] == 88) {
      cout << "Player X won!\n";
      return true;
    } else if (row3[0] == 88 && row3[1] == 88) {
      cout << "Player X won!\n";
      return true;
    } 
  }

  if (row3[2] == 99) {
    if (row1[2] == 99 && row2[2] == 99) {
      cout << "Player O won!\n";
      return true;
    } else if (row3[0] == 99 && row3[1] == 99) {
      cout << "Player O won!\n";
      return true;
    } 
  }
  return false;
}