#include <vector>
#include <iostream>
#include "ttt.hpp"

int main() {
  display_welcome();
  while (true) {
    mark_x();
    display_grid();
    if (check_win()) {
      break;
    }
    mark_o();
    display_grid();
  }
  return 0;
}
