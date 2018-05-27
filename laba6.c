#include<stdio.h>
#include<math.h>
int main(){
    double y,x,z,f;
    printf("Enter value of x:");
    scanf("%lf",&x);
    printf("Enter value of y:");
    scanf("%lf",&y);
    printf("Enter value of z:");
    scanf("%lf",&z);
    f=(exp(fabs(x-y))*pow(fabs(x-y),fabs(x+y)))/(pow(tan(x), -1))+pow(tan(z), -1)+pow(pow(x, 6)+pow(log(y),2),2/3);
    printf("f=%lf",f);
}
