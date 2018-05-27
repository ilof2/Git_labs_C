#include<stdio.h>
#include<math.h>
int main(){
    const int n=10;
    int i, s=0, a[n], k=0;
    for(i=0; i<n; i++){
        printf("a[%d]=",i);
        scanf("%d", & a[i]);
    }
    for(i=0; i<n; i++){
        if(a[i]>=3 && a[i]<=17){
            s=s+a[i];
        }
        else k++;
    }
    if(k==n){
        printf("net znachenii");
    }
    else printf("s=%d",s);
        
}

