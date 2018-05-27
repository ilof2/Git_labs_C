#include<stdio.h>
#include <math.h>
int main()
{double a,z1,z2,y;
    printf("enter value of a, y:");
    scanf("%lf%lf",&a, &y);
    z1=pow(cos(a),4)+pow(sin(y),2)+(pow(sin(a),2)-1)/4;
    z2=sin(y+a)*sin(y-a);
    printf("z1=%lf\n z2=%lf",z1,z2);
}

