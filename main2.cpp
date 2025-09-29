#include <iostream>

int main() {
  unsigned int N;
  std::cin >> N;

  if (N > 25) {
    std::cout << "Нельзя такое большое число";
    return 0;
  }

  int base_len = N * 2 - 1;
  int cur_len = 1;

  for (int i = 0; i < N; ++i) {
    int spaces = base_len - cur_len;
    int spaces_half = spaces / 2;

    for (int j = 0; j < base_len; ++j) {
      if (j < spaces_half || j > base_len - spaces_half - 1) {
        std::cout << " ";
      } else {
        std::cout << "*";
      }
    }
    cur_len += 2;
    std::cout << "\n";
  }

  return 0;
}
