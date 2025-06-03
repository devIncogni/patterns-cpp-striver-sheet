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

void printTwoRtTriangleFaceEachOther(int height) {
  for (int i{0}; i < height; ++i) {
    int deviation{(i + 1)};
    for (int j{0}; j < 2 * height; ++j) {
      if (j < deviation || j > 2 * height - 1 - deviation) {
        int printNo{j < deviation ? j + 1 : 2 * height - j};
        std::cout << printNo;
      } else {
        std::cout << " ";
      }
    }
    std::cout << "\n";
  }
}

void printTriangleWithNumberedElements(int height) {
  int printNum{0};
  for (int i{0}; i < height; ++i) {
    for (int j{0}; j <= i; ++j) {
      std::cout << ++printNum << " ";
    }
    std::cout << '\n';
  }
}

void printTriangleWithLetterElements(int height) {
  for (int i{0}; i < height; ++i) {
    char printChar{'A'};
    for (int j{0}; j <= i; ++j) {
      std::cout << printChar << " ";
      printChar = printChar >= 'Z' ? 'A' : printChar + 1;
    }
    std::cout << '\n';
  }
}

void printInvertedTriangleWithLetterElements(int height) {
  for (int i{0}; i < height; ++i) {
    char printChar{'A'};
    for (int j{height}; j > i; --j) {
      std::cout << printChar << " ";
      printChar = printChar >= 'Z' ? 'A' : printChar + 1;
    }
    std::cout << '\n';
  }
}

void printTriangleWithRowLetterElements(int height) {
  for (int i{0}; i < height; ++i) {
    char printChar{static_cast<char>('A' + i)};
    for (int j{0}; j <= i; ++j) {
      std::cout << printChar;
    }
    std::cout << '\n';
  }
}

int main() { printTriangleWithRowLetterElements(5); }
