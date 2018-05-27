#include<stdio.h>
#include<string.h>
int main()
{ const int n=10;
    int a[n],b[n];
    int i,j=0;
    for(i=0;i<n;i++){
        printf("a[%d]:",i);
        scanf("%d",&a[i]);
        
    }
    for(i=0;i<n;i++){
            if(a[i]%3!=0){
                    b[j]=a[i];
                    j++;
            }
    }
    for(i=0;i<j;i++){
        printf("%d\n",b[i]);
    }
}
