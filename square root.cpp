
#include <math.h>
#include <stdio.h>
int main()
{
    double a, b, c, d, root1, root2,imagPart;
    printf("Enter coefficients a, b and c: \n");
    scanf("%lf %lf %lf", &a, &b, &c);

    d = b * b - 4 * a * c;

    if (d > 0)
    {
        root1 = (-b + sqrt(d)) / (2 * a);
        root2 = (-b - sqrt(d)) / (2 * a);
        printf("root1 = %4.0f and root2 = %4.0f", root1, root2);
    }

    else if (d == 0)
    {
        root1 = root2 = -b / (2 * a);
        printf("root1 = root2 = %f;", root1);
    }


    else
    { root1 = root2 = -b / (2 * a);
        imagPart = sqrt(abs(d)) / (2 * a);
        printf("root1 = %f+%fi and root2 = %f-%fi", root1,imagPart, root2,imagPart);
    }

return 0;
}
