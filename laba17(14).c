#include<stdio.h>
#include<math.h>
int main()
{ const int n=3, m=3, f=9;
    int a[m][n],b[f];
    int i,j, K=0, c=0;
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("a[%d][%d]",i,j);
            scanf("%d",&a[i][j]);}}
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            b[c]=a[i][j];
            if(a[i][j]<0){
                K=1;
                break;}
            c++;}
        if(K==1) break;
    }
    if(K==0) printf("error");
    else{
        for(i=0;i<c;i++){
            printf("b[%d]:%d\n",i ,b[i]);}}}

