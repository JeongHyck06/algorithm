#include <stdio.h>

int main() {
    long long n;
    scanf("%lld", &n);

    if (n >= -32768 && n <= 32767) {
        printf("short\n");
    } else if (n >= -2147483648LL && n <= 2147483647LL) {
        printf("int\n");
    } else {
        printf("long long\n");
    }

    return 0;
}