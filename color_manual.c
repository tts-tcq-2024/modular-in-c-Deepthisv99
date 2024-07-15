#include "color.h"
#include <stdio.h>

void PrintColorCodingManual() {
    printf("Pair Number\tMajor Color\tMinor Color\n");
    for (int i = 1; i <= numberOfMajorColors * numberOfMinorColors; ++i) {
        ColorPair colorPair = GetColorFromPairNumber(i);
        char colorPairNames[16];
        ColorPairToString(&colorPair, colorPairNames);
        printf("%d\t\t\t%s\n", i, colorPairNames);
    }
}
