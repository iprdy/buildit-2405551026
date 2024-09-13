#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n;
    scanf("%d", &n);
    int nilai[n];
    
    for(int i = 0; i < n; i++ ){
        scanf("%d", &nilai[i]);
    }
    
    for(int i = 0; i < n-1; i++){
        for(int j = 0; j < n-1; j++){
            if(nilai[j] > nilai[j+1]){
                int temp = nilai[j];
                nilai[j] = nilai[j+1];
                nilai[j+1] = temp;
            }
        }
    }
    
    for(int i = 0; i < n; i++){
        printf("%d\n", nilai[i]);
    }
    return 0;
}