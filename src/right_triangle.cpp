#include <iostream>
void printNormalRightTriangle(int height) {
  for (int i = 0; i < height; ++i) {
    for (int j = 0; j <= i; ++j) {
      std::cout << "x";
    }
    std::cout << '\n';
  }
}

void printColumnNumberedRightTriangle(int height) {
  for (int i = 0; i < height; ++i) {
    for (int j = 0; j <= i; ++j) {
      std::cout << j + 1;
    }
    std::cout << '\n';
  }
}

void printRowNumberedRightTriangle(int height) {
  for (int i = 0; i < height; ++i) {
    for (int j = 0; j <= i; ++j) {
      std::cout << i + 1;
    }
    std::cout << '\n';
  }
}

int main() { printRowNumberedRightTriangle(5); }
