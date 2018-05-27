#include<stdio.h>
#include<math.h>
int main()
{ const int n=3, m=3, f=9;
    int a[m][n],b[f]; // массивы
    int i,j, S=1, c=0, k=0;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf("a[%d][%d]",j,i);
            scanf("%d",&a[j][i]);
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            k=a[j][i]%(i+j);
            if(k==1){
                S *= a[j][i];
            }
            if(j==2){
                b[c]=S;
                c++;
            }
        }
    }
    
    for(i=0;i<c;i++){
        printf("b[%d]:%d\n",i ,b[i]);
    }
}

