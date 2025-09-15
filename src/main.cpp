#include <iostream>
#include <random>

enum Move { ROCK = 1, PAPER = 2, SCISSORS = 3 };

int main() {
  std::random_device rd;
  std::mt19937 gen(rd());
  std::uniform_int_distribution<> dist(1, 3);

  // rock = 1
  // paper = 2
  // scissors = 3

  std::cout << "Игра камень ножницы бумага\n";
  int user_score = 0;
  int machine_score = 0;

  while (true) {
    std::cout << "Вы: " << user_score << std::endl;
    std::cout << "Машина: " << machine_score << std::endl;

    int machine_move = dist(gen);
    int user_move;

    while (true) {
      std::cout << "Ваш ход:\n1) Камень\n2) Ножницы\n3) Бумага\n";
      std::cin >> user_move;

      if (user_move != 1 && user_move != 2 && user_move != 3) {
        std::cout << "Неизвестная комманда\n";
      } else {
        break;
      }
    }

    if (user_move == machine_move) {
      std::cout << "Ничья\n";
    } else if (user_move == ROCK) {
      if (machine_move == SCISSORS) {
        std::cout << "Вы выиграли\n";
        user_score += 1;
      } else {
        std::cout << "Вы проиграли\n";
        machine_score += 1;
      }
    } else if (user_move == PAPER) {
      if (machine_move == ROCK) {
        std::cout << "Вы выиграли\n";
        user_score += 1;
      } else {
        std::cout << "Вы проиграли\n";
        machine_score += 1;
      }
    } else if (user_move == SCISSORS) {
      if (machine_move == PAPER) {
        std::cout << "Вы выиграли\n";
        user_score += 1;
      } else {
        std::cout << "Вы проиграли\n";
        machine_score += 1;
      }
    }

    if (user_score == 3) {
      std::cout << "Итог игры: Вы победили\n\n\n";
      exit(0);
    } else if (machine_score == 3) {
      std::cout << "Итог игры: Машина победила\n\n\n";
      exit(0);
    }
  }
}
