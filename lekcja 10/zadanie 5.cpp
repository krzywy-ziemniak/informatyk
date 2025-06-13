#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 
int main(void) {
    int ile, poczatek, koniec;
    
    printf("Ile liczb chcesz wylosować? ");
    if (scanf("%d", &ile) != 1 || ile <= 0) {
        printf("Niepoprawna liczba.\n");
        return 1;
    }
    
    printf("Podaj wartość początkową: ");
    scanf("%d", &poczatek);
    printf("Podaj wartość końcową: ");
    scanf("%d", &koniec);
 
    if (poczatek > koniec) {
        printf("Zakres niepoprawny: początek większy od końca.\n");
        return 1;
    }
 
    srand((unsigned)time(NULL));
    int *tab = malloc(ile * sizeof(int));
    if (!tab) {
        puts("Brak pamięci.");
        return 1;
    }
 
    for (int i = 0; i < ile; ++i) {
        tab[i] = poczatek + rand() % (koniec - poczatek + 1);
    }
 
    printf("Wylosowane liczby:\n");
    for (int i = 0; i < ile; ++i) {
        printf("%d ", tab[i]);
    }
    printf("\n");
 
    int zgaduj, proby = 0;
    printf("Zgaduj liczbę z powyższej tablicy:\n");
    do {
        printf("Podaj liczbę: ");
        if (scanf("%d", &zgaduj) != 1) {
            printf("Niepoprawne dane.\n");
            free(tab);
            return 1;
        }
        proby++;
 
        int trafione = 0;
        for (int i = 0; i < ile; ++i) {
            if (tab[i] == zgaduj) {
                trafione = 1;
                break;
            }
        }
 
        if (trafione) {
            printf("Zgadłeś!\n");
            printf("Potrzebowałeś %d prób.\n", proby);
            break;
        } else {
            printf("Nie zgadłeś, spróbuj ponownie.\n");
        }
 
    } while (1);
 
    free(tab);
    ret