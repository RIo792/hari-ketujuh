#include <stdio.h>
 
long long faktorial(int n) {
    long long hasil = 1;
    int i;
    for (i = 2; i <= n; i++) hasil *= i;
    return hasil;
}
 
long long permutasi(int n, int r) {
    if (r > n) return 0;
    return faktorial(n) / faktorial(n - r);
}
 
int main() {
    int i, j;
    printf("Tabel Permutasi P(n,r):\n");
    printf("   ");
    for (j = 0; j <= 5; j++) printf("r=%-8d", j);
    printf("\n");
    for (i = 0; i <= 7; i++) {
        printf("n=%d ", i);
        for (j = 0; j <= 5; j++) printf("%-10lld", permutasi(i, j));
        printf("\n");
    }
    return 0;
}
