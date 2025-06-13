#include <stdio.h>
 
void FindMinMax(float *tab, int size, float *min, float *max) {
    *min = *max = tab[0];
    for (int i = 1; i < size; i++) {
        if (tab[i] > *max)
            *max = tab[i];
        if (tab[i] < *min)
            *min = tab[i];
    }
}
 
int main() {
    float tab[10] = {1.5, -3.2, 4.87, -1.1, 3.3, -6.6, 8.9, 2.2, 0.0, -2.4};
    float min, max;
 
    FindMinMax(tab, 10, &min, &max);
 
    printf("Tablica: ");
    for (int i = 0; i < 10; i++)
        printf("%.2f ", tab[i]);
    printf("\nNajwiększa liczba: %.2f\n", max);
    printf("Najmniejsza liczba: %.2f\n", min);
 
    return 0;
}