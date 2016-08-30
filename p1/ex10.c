#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i = 0;

    for(i = 0; i < argc; i++) {
        printf("arg %d: %s\n", i, argv[i]);
    }

    char *states[] = {
        "California", "Oregon",
        "Washington", "Texas",
        NULL
    };
    int num_states = 5;
    for(i = 0; i < num_states; i++) {
        states[i] = argv[i];
        printf("state %d: %s\n", i, states[i]);
    }

    return 0;
}