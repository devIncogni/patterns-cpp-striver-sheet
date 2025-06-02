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

void printInvertedRightTriangle(int height) {
  for (int i = 0; i < height; ++i) {
    for (int j = height; j > i; --j) {
      std::cout << "*";
    }
    std::cout << '\n';
  }
}

void printInvColNumRightTriangle(int height) {
  for (int i = 0; i < height; ++i) {
    for (int j = height; j > i; --j) {
      std::cout << height - j + 1;
    }
    std::cout << '\n';
  }
}

void printBinaryRightTriangle(int height) {
  int printValue{1};
  for (int i = 0; i < height; ++i) {
    for (int j = 0; j <= i; ++j) {
      std::cout << printValue;
      printValue = printValue == 0 ? 1 : 0;
    }
    std::cout << '\n';
  }
}
int main() { printBinaryRightTriangle(5); }
