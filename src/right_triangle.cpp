#include <iostream>
void printNormalRightTriangle(int height) {
  for (int i = 0; i < height; ++i) {
    for (int j = 0; j <= i; ++j) {
      std::cout << "x";
    }
    std::cout << '\n';
  }
}

int main() { printNormalRightTriangle(5); }
