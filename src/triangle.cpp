#include <cmath>
#include <iostream>
void printTriangle(int height) {
  int midIndex{static_cast<int>(std::ceil((2 * height + 1) / 2))};
  for (int i = 0; i < height; ++i) {
    for (int j{0}; j <= 2 * height + 1; ++j) {
      int currentPrintNumber = 2 * i + 1;
      int swing = (currentPrintNumber) / 2;
      if (j >= midIndex - swing && j <= midIndex + swing) {
        std::cout << "*";
      } else {
        std::cout << " ";
      }
    }
    std::cout << "\n";
  }
}

void printInvertedTriangle(int height) {

  int midIndex{static_cast<int>(std::ceil((2 * height + 1) / 2))};

  for (int i{0}; i < height; ++i) {

    for (int j{0}; j <= 2 * height + 1; ++j) {
      int currentPrintNumber{2 * ((height - 1) - i) + 1};
      int swing = currentPrintNumber / 2;

      if (j >= midIndex - swing && j <= midIndex + swing) {
        std::cout << "*";
      } else {
        std::cout << " ";
      }
    }
    std::cout << "\n";
  }
}

int main() { printInvertedTriangle(5); }
