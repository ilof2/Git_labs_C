#include<stdio.h>
#include<locale.h>
int main() {
    int a,s,n;
    for(int i=1; i<=9; i++)
        for(int j=0; j<=9; j++)
            for(int k=0; k<=9; k++)
                if(i != j && j != k && k != i){
                    a=i*100;
                    s=j*10;
                    n=a+s+k;
                    printf("%d\n",n);
                }
}
