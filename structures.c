#include <stdio.h>
#include <stdlib.h>

struct Car {
    char color[20];
    int numberOfDoors;
    int numberOfSeats;
};

int main() {
    struct Car* car1 = (struct Car*)malloc(sizeof(struct Car));
    struct Car* car2 = (struct Car*)malloc(sizeof(struct Car));

    printf("Enter the values for member of elements of car 1: ");
    scanf("%d\n", &(car1->numberOfDoors));
    scanf("%d\n", &(car1->numberOfSeats));
    scanf("%s", &(car1->color));

    printf("Enter values for member elements of car 2: ");
    scanf("%d\n", &(car2->numberOfDoors));
    scanf("%d\n", &(car2->numberOfSeats));
    scanf("%s", &(car2->color));


 


    printf("\nValues you gave for car 1:\n");
    printf("Doors: %d\n", car1->numberOfDoors);
    printf("Sits: %d\n", car1->numberOfSeats);
    printf("Color: %s\n", car1->color);

    printf("\nvalues you gave for car 2\n");
    printf("Doors: %d\n", car2->numberOfDoors);
    printf("Sits: %d\n", car2->numberOfSeats);
    printf("Color: %s\n", car2->color);

    // Free the allocated memory
    free(car1);
    free(car2);

    return 0;
}

