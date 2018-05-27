#include<stdio.h>
#include<math.h>
int main(){
    const int n=10;
    int i, j, a[n], min=a[0], max=0, p, imin=0,imax=0;
    for(i=0; i<n; i++){
        printf("a[%d]=",i);
        scanf("%d", & a[i]);
    }
   for(i=0; i<n; i++){
        if(a[i]<min){
            min=a[i];
            imin=i;
        }
    }
    for(j=0; j<n; j++){
        if(a[j]>max){
            max=a[j];
            imax=j;
        }
    }
    p=a[imin]; a[imin]=a[imax] ;a[imax]=p;
    for(i=0; i<n; i++){
        //p=a[imax]; a[imin]=a[imax]; a[imin]=p;
        printf("%d\n", a[i]);
    }
   }

