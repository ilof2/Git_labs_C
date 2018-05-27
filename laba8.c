#include<stdio.h>
#include<math.h>
int main()
{int x, y;
    printf("Vvedite chislo:");
    scanf("%d", &x);
    y=x%10;//Последняя цифра числа
    switch (y) {
        case 1:
            printf("1");
            break;
        case 2:
            printf("4");
            break;
        case 3:
            printf("9");
            break;
        case 4:
            printf("6");
            break;
        case 5:
            printf("5");
            break;
        case 6:
            printf("6");
            break;
        case 7:
            printf("9");
            break;
        case 8:
            printf("4");
            break;
        case 9:
            printf("1");
            break;
        default:
            printf("0");
            break;
    }
    
    
}
