#include <stdio.h>
#define ll long long

ll fb[100] = {0};

ll fibo(ll n) {
    fb[0] = 0;
    fb[1] = 1;
    for (ll i = 2; i <= n; i++) {
        fb[i] = fb[i - 1] + fb[i - 2];
    }
    return fb[n];
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%lld", fibo(n));
    return 0;
}

