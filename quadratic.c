/* Westmont College CS 144 Fall 2024
 * In-class Exercise 01, Task 2
 * Your Name <yname@westmont.edu>
 */

#include <studio.h>
#include <math.h>

void solve_quadratic(double a, double b, double c) {
    double discriminant = b * b - 4 * a * c;  // Berechnet das, was unter der Quadratwurzel steht
    double sqrt_val = sqrt(fabs(discriminant));  // Berechnet die Quadratwurzel des diskriminanten Werts

    if (discriminant > 0) {  // Wenn das Ergebnis positiv ist, gibt es zwei Lösungen
        printf("Die Gleichung hat zwei reale Wurzeln: %.2f und %.2f\n",
               (-b + sqrt_val) / (2 * a), (-b - sqrt_val) / (2 * a));
    } else if (discriminant == 0) {  // Wenn es 0 ist, gibt es nur eine Lösung
        printf("Die Gleichung hat eine doppelte Wurzel: %.2f\n", -b / (2 * a));
    } else {  // Wenn es negativ ist, gibt es keine realen Lösungen
        printf("Die Gleichung hat keine reellen Wurzeln.\n");
    }
}

int main() {
    double a, b, c;
    char choice;

    do {
        // Benutzer nach den drei Zahlen fragen
        printf("Geben Sie die Koeffizienten a, b und c ein (a darf nicht 0 sein):\n");
        scanf("%lf %lf %lf", &a, &b, &c);

        // Überprüfen, ob die Eingabe eine quadratische Gleichung ist
        if (a == 0) {
            printf("Dies ist keine quadratische Gleichung, da a gleich 0 ist.\n");
        } else {
            // Die Funktion aufrufen, um die Lösung zu berechnen
            solve_quadratic(a, b, c);
        }

        // Benutzer fragen, ob er das Programm erneut ausführen möchte
        printf("Möchten Sie eine weitere Gleichung lösen? (j/n): ");
        scanf(" %c", &choice);
        while (getchar() != '\n'); // Eingabepuffer leeren

    } while (choice == 'j' || choice == 'J'); // Wiederholen, wenn der Benutzer "j" eingibt

    return 0;  // Beenden des Programms

