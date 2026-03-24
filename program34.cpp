#include <stdio.h>
 
void faktorisasiPrima(int n) {
    int faktor = 2;
    printf("Faktorisasi prima %d = ", n);
    while (n > 1) {
        while (n % faktor == 0) {
            printf("%d ", faktor);
            n /= faktor;
        }
        faktor++;
    }
    printf("\n");
}
 
int main() {
    faktorisasiPrima(360);
    faktorisasiPrima(1024);
    faktorisasiPrima(9999);
    return 0;
}
