#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
int a[n];
    for (int k = 0; k < n; k++) {
        scanf("%d", &a[k]);
    }
int index = 0;
    while (index < n && a[index] <= 0) {
        index++;
    }
if (index >= n) {
        printf("Khong co phan tu duong trong mang");
        return 0;
    }
int vt = index;
int j = index + 1;
while (j < n) {
        if (a[j] > 0 && a[j] < a[vt]) {
            vt = j;
        }
        j++;
    }
printf("Vi tri phan tu duong nho nhat: %d\n", vt);
printf("Gia tri: %d", a[vt]);
return 0;
}
