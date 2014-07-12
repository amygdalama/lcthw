#include <stdio.h>

int main(int argc, char *argv[])
{
    int bugs = 100;
    double bug_rate = 1.2;
    printf("%d bugs at %f rate\n", bugs, bug_rate);

    long universe_of_defects = 1L * 1024L * 1024L * 1024L;
    printf("the whole universe has %ld bugs\n", universe_of_defects);

    double expected_bugs = bugs * bug_rate;
    printf("expected bugs: %f\n", expected_bugs);

    double part_of_universe = expected_bugs / universe_of_defects;
    printf("that is only a %e portion of the universe\n", part_of_universe);

    char nul_byte = '\0';
    int care_percentage = bugs * nul_byte;
    printf("which means you should care %d%%.\n", care_percentage);

    return 0;
}