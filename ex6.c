#include <stdio.h>

int main(int argc, char *argv[])
{
    int distance = 100;
    float power = 2.345f;
    double super_power = 56789.4532;
    char initial = 'E';
    char first_name[] = "Amy";
    char last_name[] = "Hanlon";

    printf("You are %d miles away.\n", distance);
    printf("You have %f levels of power.\n", power);
    printf("You have %f awesome super powers.\n", super_power);
    printf("My name is %s %c. %s\n", initial, first_name, last_name);

    return 0;
}