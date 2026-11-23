#include <stdio.h>

int main() 
{
    int n;
    scanf("%d", &n);

    char digits[1000005];
    scanf("%s", digits);

    long long sum = 0;
    for (int i = 0; i < n; i++) {
        sum += digits[i] - '0';
    }

    printf("%lld\n", sum);
    return 0;
}
