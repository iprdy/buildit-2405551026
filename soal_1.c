#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int bilanganN;
    scanf("%d", &bilanganN);

    int urutan[bilanganN];
    for(int i = 0; i < bilanganN; i++ ){
        scanf("%d", &urutan[i]);
    }

    for(int i = 0; i < bilanganN-1; i++){
        for(int j = 0; j < bilanganN-1; j++){
            if(urutan[j] > urutan[j+1]){
                int temp = urutan[j];
                urutan[j] = urutan[j+1];
                urutan[j+1] = temp;
            }
        }
    }
    for(int i = 0; i < bilanganN; i++){
        printf("%d\n", urutan[i]);
    }
    return 0;
}
