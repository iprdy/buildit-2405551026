#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char satu[50];
    char dua[50];
    scanf ("%s", &satu);
    scanf ("%s", &dua);
    if (strcmp(satu, dua) == 0) {
        printf("IDENTIK");
    }
    else if(strlen(satu) != strlen(dua)) {
        printf("BERBEDA");
    }
    else {
        printf("MIRIP");
    }
    return 0;
}
