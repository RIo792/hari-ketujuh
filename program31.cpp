#include <stdio.h>
 
float fungsi(float x) {
    return x * x + 2 * x + 1;
}
 
float integralTrapesium(float a, float b, int n) {
    float h = (b - a) / n;
    float hasil = fungsi(a) + fungsi(b);
    int i;
    for (i = 1; i < n; i++) {
        hasil += 2 * fungsi(a + i * h);
    }
    return hasil * h / 2;
}
 
int main() {
    printf("Integral f(x)=x^2+2x+1 dari 0 ke 3:\n");
    printf("n=10   : %.6f\n", integralTrapesium(0, 3, 10));
    printf("n=100  : %.6f\n", integralTrapesium(0, 3, 100));
    printf("Analitik: 21.000000\n");
    return 0;
}
