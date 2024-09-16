#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int bilanganN;
    int mod;
    int jumlah_pembagi = 0;
    
    scanf("%i", &bilanganN);
    if(bilanganN <= 1){
        printf("BUKAN");
        return 0;
    }
    for (int i = 2; i < bilanganN; i++) {
        mod = bilanganN % i;
            if (mod==0){
                jumlah_pembagi++;
            }
    }
    if (jumlah_pembagi == 0){
        printf("PRIMA");
    }
    else {
        printf("BUKAN");
    }
    return 0;
}