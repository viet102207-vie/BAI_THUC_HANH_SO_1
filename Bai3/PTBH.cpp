#include <stdio.h>
#include <math.h>
void giaiPTBac1(double b, double c) {
    if (b == 0) {
        if (c == 0) {
            printf("VSN");
        } else {
            printf("VN");
        }
    } else {
        double x = -c / b;
        printf("x = %.2lf", x);
    }
}

int main() {
    double a, b, c;
    scanf("%lf %lf %lf", &a, &b, &c);
if (a == 0) {
    giaiPTBac1(b, c);
    } else {
        double delta = b * b - 4 * a * c;
         if (delta < 0) {
            printf("VN"); 
        } else if (delta == 0) {
            
            double x1 = -b / (2 * a);
            double x2 = x1;
            printf("x1 = x2 = %.2lf", x1);
        } else {
           
            double x1 = (-b + sqrt(delta)) / (2 * a);
            double x2 = (-b - sqrt(delta)) / (2 * a);
            printf("x1 = %.2lf, x2 = %.2lf", x1, x2);
        }
    }

    return 0;
}
