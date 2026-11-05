#include <stdio.h>
int main() {
    int pw;
do {
   scanf("%d", &pw);
   if (pw != 1234) {
            printf("Sai password!");
        }
    } while (pw != 1234);
printf("Ket thuc");
return 0;
}
