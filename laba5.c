#include<stdio.h>
#include <math.h>
int main()
{
    double E=20,Ri=2,R1=9,R2=6,R3=12,R4=1,R5=2,R6=1,R46,U46,I1,I2,U36,U3,R;
    double I,I3,I4,I5,I6,R36;
    R46=R4+R5+R6;
    R36=(R3*R46)/(R3+R46);
    R=R1+R36+R2;
    I=E/(R+Ri);
    I1=I;
    I2=I;
    U36=I*R36;
    U3=U36;
    U46=U36;
    I3=U3/R3;
    I4=U46/R46;
    I5=U46/R46;
    I6=U46/R46;
    printf("I=%lf\n I1=%lf\n I2=%lf\n I3=%lf\n I4=%lf\n I5=%lf\n I6=%lf\n",I,I1,I2,I3,I4,I5,I6);
}

