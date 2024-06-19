#include <stdio.h>
#include <math.h>

int tach(int n) {
    int m = n;
    int dem = 0;
    while (m > 0) {
        dem++;
        m /= 10;
    }

    int sum = 0;
    m = n; 
    while (m > 0) {
        int r = m % 10;
        sum += pow(r, dem);
        m /= 10;
    }

    if (sum == n) return 1;
    else return 0;
}

int main() {
    int n;
    scanf("%d", &n);
    if (tach(n)) printf("YES\n");
    else printf("NO\n");
    return 0;
}

