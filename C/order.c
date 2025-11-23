#include <stdio.h>

int main() {
    int year;

    printf("Enter a year: ");
    scanf("%d", &year);

    if (year % 400 == 0)
        printf("Year %d is a leap year — bonus launch window open.\n", year);
    else if (year % 100 == 0)
        printf("Year %d is not a leap year — no bonus window.\n", year);
    else if (year % 4 == 0)
        printf("Year %d is a leap year — bonus launch window open.\n", year);
    else
        printf("Year %d is not a leap year — no bonus window.\n", year);

    return 0;
}

