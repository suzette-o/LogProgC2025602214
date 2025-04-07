#include <stdio.h>
#include <string.h>

int main() {
    char pizza[16];
    int ingrediente;

    printf("Bienvenido(a),\n ¿tu pizza es vegetariana o normal?: ");
    scanf("%s", pizza);

    if (strcmp(pizza, "vegetariana") == 0) {
        printf("¿Qué ingrediente llevara tu pizza?\n Elige uno:  1. Pimiento o 2. Tofu: ");
        scanf("%d", &ingrediente);

        if (ingrediente == 1) {
            printf("Tu pizza es Vegetariana,\n llevara: Mozzarella, Tomate y Pimiento\n");
        } else {
            printf("Tu pizza es Vegetariana,\n llevara: Mozzarella, Tomate y Tofu\n");
        }

    } else {
        printf("¿Qué ingrediente llevará tu pizza?\n Elige uno:  1. Peperoni, 2. Jamon o 3. Salmon: ");
        scanf("%d", &ingrediente);

        if (ingrediente == 1) {
            printf("Tu pizza es Normal,\n llevara: Mozzarella, Tomate y Peperoni\n");
        } else if (ingrediente == 2) {
            printf("Tu pizza es Normal,\n llevara: Mozzarella, Tomate y Jamon\n");
        } else {
            printf("Tu pizza es Normal,\n llevara: Mozzarella, Tomate y Salmon\n");
        }
    }

    return 0;
}

