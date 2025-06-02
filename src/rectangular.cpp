
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
      std::cout << "*";
      if ((i > 0 && j > 0) || (i < height && j < width)) {
        continue;
      }
    }
    std::cout << '\n';
  }
}

// Testing purposes only main() function
// int main(){
//     printNormalRectangle(3, 4);
// }
