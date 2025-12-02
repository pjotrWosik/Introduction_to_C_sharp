#include <stdio.h>
#include <math.h>

float dodaj(float liczba1, float liczba2) {return liczba1 + liczba2;}
float odejmij(float liczba1, float liczba2) {return liczba1 - liczba2;}
float pomnurz(float liczba1, float liczba2) {return liczba1 * liczba2;}
float podziel(float liczba1, float liczba2) {return liczba1 / liczba2;}
float poteguj(float liczba1, float liczba2) {return pow(liczba1, liczba2);}
float pierwiastkuj(float liczba1, float liczba2) {return sqrt(liczba1);}

float (*operacje[])(float, float) = {dodaj, odejmij, pomnurz, podziel, poteguj, pierwiastkuj};

int main(void) {

    float liczba1, liczba2;
    int wybur;

    printf("[------------------------------]\n"
        "menu: \n"
        "    1 - dodawanie\n"
        "2 - odejmowanie\n"
        "    3 - mnorzenie\n"
        "    4 - dzielenie\n"
        "    5 - potegowanie\n"
        "    6 - pierwiastkowanie (tylko pierwsza liczba sie liczy)\n"
        "    7 - historia\n"
        "    8 - zakoncz program\n"
        "[------------------------------]\n"
        "podaj swuj wybur: \n"
        );
    scanf("%d", &wybur);

    printf("Podaj pierwsza liczbe: ");
    scanf("%f", &liczba1);
    printf("Podaj druga liczbe: ");
    scanf("%f", &liczba2);

    float wynik = operacje[wybur - 1](liczba1, liczba2);

    printf("wynik = %f", wynik);
    return 0;
}
