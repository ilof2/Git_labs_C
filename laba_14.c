
#include <math.h>
#include <stdio.h>

int main() {
    const int m=2,  n=3;
    int a[m][n], i, j, s=0, k=0;
    for(j=0; j<n; j++){
        printf("vvedite %d stolbec", j);
        for(i=0; i<m; i++)
            scanf("%d", &a[i][j]);
    }
    for(j=0; j<n; j++){
        for(i=0; i<n; i++){
            if(a[i][j]>=3 && a[i][j]<=17){
                s=s+a[i][j];
                k++;
            }
        }
    }
    if(k==0) printf("net znachenii\n");
    else printf("s=%d\n", s);
    printf("kolichestvo elementov:%d\n",k);
}

