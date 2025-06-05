#include "rectangular.h"
#include "right_triangle.h"
#include "triangle.h"
#include <iostream>

void patternPrinter(int choice) {
  switch (choice) {
  case 1:
    std::cout << '\n';
    printNormalRectangle(4, 4);
    std::cout << '\n';
    break;
  case 2:
    std::cout << '\n';
    printHollowRectangle(4, 4);
    std::cout << '\n';
    break;
  case 3:
    std::cout << '\n';
    printSquareWithLayerNumbers(4);
    std::cout << '\n';
    break;

  case 4:
    std::cout << '\n';
    printTriangle(4);
    std::cout << '\n';
    break;
  case 5:
    std::cout << '\n';
    printInvertedTriangle(4);
    std::cout << '\n';
    break;
  case 6:
    std::cout << '\n';
    printTwoJointTriangles(4);
    std::cout << '\n';
    break;
  case 7:
    std::cout << '\n';
    printRotatedTriangle(4);
    std::cout << '\n';
    break;
  case 8:
    std::cout << '\n';
    printTriangleWithLetters(4);
    std::cout << '\n';
    break;
  case 9:
    std::cout << '\n';
    printHollowJointTriangles(4);
    std::cout << '\n';
    break;
  case 10:
    std::cout << '\n';
    printHollowJointTrianglesAtTip(4);
    std::cout << '\n';
    break;

  case 11:
    std::cout << '\n';
    printNormalRightTriangle(4);
    std::cout << '\n';
    break;
  case 12:
    std::cout << '\n';
    printColumnNumberedRightTriangle(4);
    std::cout << '\n';
    break;
  case 13:
    std::cout << '\n';
    printRowNumberedRightTriangle(4);
    std::cout << '\n';
    break;
  case 14:
    std::cout << '\n';
    printInvertedRightTriangle(4);
    std::cout << '\n';
    break;
  case 15:
    std::cout << '\n';
    printInvColNumRightTriangle(4);
    std::cout << '\n';
    break;
  case 16:
    std::cout << '\n';
    printBinaryRightTriangle(4);
    std::cout << '\n';
    break;
  case 17:
    std::cout << '\n';
    printTwoRtTriangleFaceEachOther(4);
    std::cout << '\n';
    break;
  case 18:
    std::cout << '\n';
    printTriangleWithNumberedElements(4);
    std::cout << '\n';
    break;
  case 19:
    std::cout << '\n';
    printTriangleWithLetterElements(4);
    std::cout << '\n';
    break;
  case 20:
    std::cout << '\n';
    printInvertedTriangleWithLetterElements(4);
    std::cout << '\n';
    break;
  case 21:
    std::cout << '\n';
    printTriangleWithRowLetterElements(4);
    std::cout << '\n';
    break;
  case 22:
    std::cout << '\n';
    printHypotenuseLetteredRightTriangle(4);
    std::cout << '\n';
    break;

  default:
    std::cout << "INVALID INPUT";
    break;
  }
}

int main() {
  std::cout << "Welcome to Pattern Printing Program\n";

  std::cout << "Please Enter the pattern code you want to print\n";

  int input{};
  std::cin >> input;

  if (input > 100) {
    for (int i{1}; i <= 22; ++i) {
      patternPrinter(i);
    }
  } else {
    patternPrinter(input);
  }

  return 0;
}
