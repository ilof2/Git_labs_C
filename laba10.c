#include<stdio.h>
#include<math.h>
int main()
{
    int n=1;
    double E,A,s=0;
    E=0.001;
    do
    {
        A=((2*n)-1)/pow(2,n);
        s=s+A;
        n++;
    }
    while(abs(A)>E);
    {
        printf("s=%lf",s);
    }
}
