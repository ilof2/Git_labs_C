#include <math.h>
#include <stdio.h>

int main() {
    const int m=3,  n=4;
    int a[m][n], i, j, q=0, K=0, flag=0;
    int sum=0;
    for(j=0; j<n; j++){
        printf("Vvedite %d stolbec", j);
        for(i=0; i<m; i++){
            scanf("%d", &a[i][j]);}
    }
    for(j=0; j<n; j++){
        for(i=0; i<m; i++)
        {
            K=K+a[i][j];
            if(a[i][j]<0)
            {
                flag = 1;
            }
            else q++;
            if(i==m-1 && flag==1){
                sum=sum+K;
            }
        }
        K=0;
        flag=0;
    }
    if(q==n*m) printf("net znachenii\n");
    else printf("sum = %d\n", sum);
}

