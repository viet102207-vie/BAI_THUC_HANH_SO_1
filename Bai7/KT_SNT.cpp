#include <stdio.h>
#include <math.h>

int main() {
    int N;
    scanf("%d", &N);
    int count = 0;
    int i = 2;
while (i <= sqrt(N)) {
        if (N % i == 0) {
            count++;
        }
        i++;
    }
if (count == 0 && N >= 2) {
        printf("Nguyen to");
    } else {
        printf("Khong phai nguyen to\n");
    }
  return 0;
}
