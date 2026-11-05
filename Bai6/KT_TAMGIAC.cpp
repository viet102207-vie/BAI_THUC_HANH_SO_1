#include <stdio.h>

int main() {
    float a, b, c;
    scanf("%f%f%f", &a, &b, &c);

    if (a > 0 && b > 0 && c > 0 && a + b > c && a + c > b && b + c > a) {
        if (a == b && a == c) {
            printf("Tam giac deu");
        } else if (a == b || a == c || b == c) {
            printf("Tam giac can");
        } else {
            printf("Tam giac thuong");
        }
    } else {
        printf("Khong phai tam giac");
    }

    return 0;
}
