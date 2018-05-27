#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include<time.h>

int main() {
    srand(time(NULL));
    const int n=10;
    int a[n], i, j, K;
    for(i=0; i<n; i++){
        a[i]=0+rand()%100;
    }
    for(i=0; i<n; i++){
        for(j=0; j<n-i-1; j++){
            if(a[j]%10>a[j+1]%10){
                K=a[j];
                a[j]=a[j+1];
                a[j+1]=K;
            }
        }
    }
    for(i=0; i<n; i++){
        printf("%d\t", a[i]);
    }
}

