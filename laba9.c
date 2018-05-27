#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    double P;
    printf("Enter n:");
    scanf("%d", &n);
    P=1;
    for(int i=1; i<=n; i++)
    {
        P=P*(1+(1/pow((2*i+1), 2)));
    }
    printf("P=%lf\n", P);
}
