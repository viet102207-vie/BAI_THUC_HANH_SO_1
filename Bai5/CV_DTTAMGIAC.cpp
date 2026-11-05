#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c;
    scanf("%f %f %f", &a, &b, &c);

    if (a > 0 && b > 0 && c > 0 && (a + b > c) && (a + c > b) && (b + c > a)) {
        float p = (a + b + c) / 2.0f;
        float S = sqrtf(p * (p - a) * (p - b) * (p - c));
        printf("%.2f %.2f", S, 2.0f * p);
    } else {
        printf("khong phai tam giac");
    }

    return 0;
}
