#include <stdio.h>

int main() {
    int n, amount;
    char type;
    int total = 0, c = 0, r = 0, s = 0;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d %c", &amount, &type);
        total += amount;

        if (type == 'C') {
            c += amount;
        } else if (type == 'R') {
            r += amount;
        } else if (type == 'S') {
            s += amount;
        }
    }

    double p_c = (c * 100.0) / total;
    double p_r = (r * 100.0) / total;
    double p_s = (s * 100.0) / total;

    printf("Total: %d cobaias\n", total);
    printf("Total de coelhos: %d\n", c);
    printf("Total de ratos: %d\n", r);
    printf("Total de sapos: %d\n", s);
    printf("Percentual de coelhos: %.2f %%\n", p_c);
    printf("Percentual de ratos: %.2f %%\n", p_r);
    printf("Percentual de sapos: %.2f %%\n", p_s);

    return 0;
}