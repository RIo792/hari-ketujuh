#include <stdio.h>
 
float deretHarmonis(int n) {
    float jumlah = 0;
    int i;
    for (i = 1; i <= n; i++) {
        jumlah += 1.0 / i;
    }
    return jumlah;
}
 
int main() {
    int n;
    printf("Deret Harmonis H(n) = 1 + 1/2 + 1/3 + ... + 1/n:\n");
    for (n = 1; n <= 20; n++) {
        printf("H(%2d) = %.6f\n", n, deretHarmonis(n));
    }
    return 0;
}
