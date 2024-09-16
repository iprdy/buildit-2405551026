#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char pertama[50];
    char kedua[50];
    scanf ("%s", &pertama);
    scanf ("%s", &kedua);
    if (strcmp(pertama, kedua) == 0) {
        printf("IDENTIK");
    }
    else if(strlen(pertama) != strlen(kedua)) {
        printf("BERBEDA");
    }
    else {
        printf("MIRIP");
    }
    return 0;
}
