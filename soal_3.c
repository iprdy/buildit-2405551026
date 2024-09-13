#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n;
    int x;
    int jumlah_pembagi = 0;
    
    scanf("%i", &n);
    if(n <= 1){
        printf("BUKAN");
        return 0;
    }
    for (int i = 2; i < n; i++) {
        x = n % i;
            if (x==0){
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