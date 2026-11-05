#include <stdio.h>
void doi_cho(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}
int main() {
    int n;
    scanf("%d", &n);

    int a[n];
    for (int k = 0; k < n; k++) {
        scanf("%d", &a[k]);
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] > a[j]) {
                doi_cho(&a[i], &a[j]);
            }
        }
    }

    for (int k = 0; k < n; k++) {
        printf("%d ", a[k]);
    }
    printf("\n");

    return 0;
}
