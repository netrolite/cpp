/*
  datatypes
  int
  float double
  long double
  char min 1 byte
  wchar_t
  bool 1 byte
  void
  std::nullptr_t
  long min 4 bytes
  long long min 8 bytes
*/

#include <iostream>

// int main() {
//   double F = 0;
//
//   std::cout << "Input F: ";
//   std::cin >> F;
//
//   double C = 5. / 9. * (F - 32.);
//   std::cout << "Celcius = " << C << std::endl;
//
//   if (C >= 30.0) {
//     std::cout << "Жарко\n";
//   } else if (C >= 10.0) {
//     std::cout << "Нормально\n";
//   } else {
//     std::cout << "Холодно\n";
//   }
//
//   return 0;
// }

int main() {
  float x = 0;
  float y = 0;

  std::cout << "x = ";
  std::cin >> x;

  std::cout << "y = ";
  std::cin >> y;

  double r2 = (x * x) + (y * y);
  if (r2 >= 1 && r2 <= 4 && r2 != 10) {
    std::cout << "Победа\n";
  } else {
    std::cout << "Не победа\n";
  }

  // returns 10
  // if (x == 10) {
  //   std::cout << "true\n";
  // }
}
