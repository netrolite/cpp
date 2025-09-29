
// int main() {
//   unsigned int N;
//   std::cin >> N;
//
//   if (N > 25) {
//     std::cout << "Введите число не более 25";
//   }
//
//   for (int i = 0; i < N; ++i) {
//     for (int j = 0; j <= i; ++j) {
//       std::cout << "*";
//     }
//     std::cout << "\n";
//   }
// }

/*
N = 5
width = 5 * 2 - 1
    *
   ***
  *****
 *******
*********
*/
#include <cstdlib>
#include <iostream>

int main() {
  // const char *s1; // указатель на константные данные. can change s1/s2 but
  // can't change the referenced value
  // char const *s2; // то же самое
  // char *const s3; // const pointer to non-const data

  // char str[] = "Hello, world!";
  //
  // char const *const s4 = str;
  //
  // std::cout << s4 << std::endl;
  //
  // s4[0] = 'h';
  // const char *const y = &(str[3]);

  // char *const s3 = str;
  //
  // std::cout << s3 << std::endl;
  //
  // s3[0] = 'h';
  // std::cout << s3 << std::endl;
  // s3++; // pointer arithmetic not allowed

  // int x = 1;
  // const int y = 3;
  //
  // int &ref1 = x;
  // const int &ref2 =
  //     y; // must include const because referenced value is declared as const
  // int &ref3 = x; // const reference to non-const data
  //
  // ref3 += 1;
  // x += 1;
  //
  // std::cout << x << std::endl;

  std::string
}
