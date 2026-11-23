#include <stdio.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    long long arr[105][105];

    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < m; j++) {
            scanf("%lld", &arr[i][j]);
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = m - 1; j >= 0; j--) {
            printf("%lld", arr[i][j]);
            if (j > 0) {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
