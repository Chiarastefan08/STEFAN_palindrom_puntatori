#include <stdio.h>

int main(void) {
    char testo[] = "i topi non avevano nipoti";
    char *fine = testo;
    char *inizio = testo;

    while (*fine != '\0') {
        fine++;
    }
    fine--; //così teoricamente dovrebbe essere arrivato all'ultima cifra TEORICAMENTE

    while (inizio <= fine) {
        if (*inizio == ' ') {
            inizio++;
        }
        if (*fine == ' ') {
            fine--;
        }
    }



}
