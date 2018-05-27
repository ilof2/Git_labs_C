#include <stdio.h>
#include <math.h>
int main(void)
{double D,x1,x2,x;
    int a,b,c;
    printf("Введите a,b,c");
    scanf("%d\n%d\n%d", &a, &b, &c);
    D=pow(b,2)-4*a*c;
    if(D > 0){
        x1=(-b-sqrt(D))/(2*a);
        x2=(-b+sqrt(D))/(2*a);
        printf("x1=%lf\n x2=%lf", x1,x2);
    }
    else if(D==0){
        x=(-b)/(2*a);
        printf("x=%lf", x);
    }
    
    else if(D<0){
        printf("Нет решения");}
}

