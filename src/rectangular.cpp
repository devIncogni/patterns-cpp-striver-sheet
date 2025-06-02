
#include <iostream>
void printNormalRectangle(int height, int width) {
  for (int i = 0; i < height; ++i) {
    for (int j = 0; j < width; ++j) {
      std::cout << "*";
    }
    std::cout << '\n';
  }
}

void printHollowRectangle(int height, int width) {
  for (int i = 0; i < height; ++i) {
    for (int j = 0; j < width; ++j) {
      if (i == 0 || i == height - 1 || j == 0 || j == width - 1) {
        std::cout << "*";
      } else {
        std::cout << " ";
      }
    }
    std::cout << '\n';
  }
}

// Testing purposes only main() function
int main() { printHollowRectangle(5, 6); }
