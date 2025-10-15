#include <stdio.h>

int main(void) {
    char stringa[] = "i topi non avevano nipoti";
    char *inizio = stringa;
    char *fine = stringa;
    while (*fine != '\0') {
        fine++;
    }
    fine--;

    while (inizio <= fine) {
        while (*inizio == ' ') {
            inizio++;
        }
        while (*fine == ' ') {
            fine--;
        }
        if (*inizio != *fine) {
            printf("Frase non palindroma");
            return 0;
        }
        inizio++;
        fine--;
    }
    printf("Frase palindroma");

    return 0;
}