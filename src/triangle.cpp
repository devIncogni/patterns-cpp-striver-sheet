#include <cmath>
#include <cstdlib>
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

void printTwoJointTriangles(int height) {
  int midIndex = std::ceil((2 * height + 1) / 2);

  for (int i{0}; i < 2 * height; ++i) {
    int currentPrintNumber =
        i < height ? (2 * i + 1) : (2 * i + 1) - 2 * (2 * (i - height) + 1);
    // i > height logic:
    // 2i+1 increases 2 stars in every step. But after midpoint is achieved, we
    // want net decrement of 2 stars in every step. Hence we subtract a total of
    // 4 stars. They account for the 2 stars added by 2i+1 and 2 extra stars
    // that were to be removed for the inverted triangle.

    int swing = currentPrintNumber / 2;
    for (int j{0}; j < 2 * height + 1; ++j) {
      if (j >= midIndex - swing && j <= midIndex + swing) {
        std::cout << "x";
      } else {
        std::cout << " ";
      }
    }
    std::cout << '\n';
  }
}

void printRotatedTriangle(int height) {
  for (int i{0}; i < 2 * height; ++i) {
    int numStars = i <= height ? i : 2 * height - i;
    for (int j{0}; j < numStars; ++j) {
      std::cout << "*";
    }
    std::cout << '\n';
  }
}

void printTriangleWithLetters(int height) {
  int midIndex{static_cast<int>(std::ceil((2 * height + 1) / 2))};

  for (int i{0}; i < height; ++i) {

    int currentPrintNumber{2 * i + 1};
    int swing{currentPrintNumber / 2};

    for (int j{0}; j < 2 * height + 1; ++j) {
      if (j >= midIndex - swing && j <= midIndex + swing) {

        char currentMidElement{static_cast<char>('A' + swing)};
        char printElement{static_cast<char>(
            j <= midIndex ? currentMidElement - (midIndex - j)
                          : currentMidElement - (j - midIndex))};

        std::cout << printElement;
      } else {
        std::cout << " ";
      }
    }
    std::cout << "\n";
  }
}

void printHollowJointTriangles(int height) {

  int breakPoint = height;

  for (int i{0}; i < 2 * height + 1; ++i) {

    // First set of stars
    if (height == i) {
      continue;
    }
    for (int j{0}; j < std::abs(height - i); ++j) {
      std::cout << "*";
    }

    // Spaces
    int numSpace = i < breakPoint ? 2 * i : 2 * i - 4 * std::abs(height - i);

    for (int j{0}; j < numSpace; ++j) {
      std::cout << " ";
    }

    // Second set of stars
    for (int j{std::abs(height - i) + numSpace}; j < 2 * height; ++j) {
      std::cout << "*";
    }
    std::cout << '\n';
  }
}

int main() { printHollowJointTriangles(5); }
