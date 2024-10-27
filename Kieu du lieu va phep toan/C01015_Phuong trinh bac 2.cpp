#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c, x1, x2, delta;
    
    printf("");
    scanf("%f %f %f", &a, &b, &c);
    
    delta = b * b - 4 * a * c;
    
    if (delta < 0)
    {
        printf("NO\n");//Phuong trinh vo nghiem 
    }
    else if (delta == 0)
    {
        x1 = x2 = -b / (2 * a);
        printf("%0.2f\n", x1);//Phuong trinh co nghiem kep
    }
    else
    {
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        printf("%0.2f %0.2f\n", x1, x2);//Phuong trinh co hai nghiem
    }
    
    return 0;
}


