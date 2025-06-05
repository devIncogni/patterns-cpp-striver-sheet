#include "./rectangular.h"
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

void printSquareWithLayerNumbers(int layers) {

  // std::cout << totalLayers;
  int currentLayer{layers};
  int timesLayerUpdates{0};
  int side{2 * layers - 1};

  for (int i{1}; i <= side; ++i) {

    // timesLayerUpdates = i - 1;
    currentLayer = layers;

    for (int j{1}; j <= side; ++j) {

      // std::cout << "[" << i << "," << j << "] ";
      std::cout << currentLayer << " ";

      if (j <= timesLayerUpdates) {
        currentLayer -= 1;
      } else if (j >= side - timesLayerUpdates) {
        currentLayer += 1;
      }
    }
    if (i < layers) {
      timesLayerUpdates += 1;
    } else {
      timesLayerUpdates -= 1;
    }
    std::cout << '\n';
  }
}
