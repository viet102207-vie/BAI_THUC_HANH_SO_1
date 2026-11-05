#include <stdio.h>
#include <math.h>
int main() {
    int a, b;
    scanf("%d%d", &a, &b);

    for (int N = a; N <= b; N++) {
        int count = 0;
        int i = 2;
        while (i <= sqrt(N)) {
            if (N % i == 0) {
                count++;
            }
            i++;
        }
        if (count == 0 && N >= 2) {
            printf("Nguyen to", N);
        }
    }

    return 0;
}
