#include <stdio.h>
#include <ctype.h>
#include <string.h>

int can_print_it(char ch);
void print_letters(char arg[], int len);

void print_arguments(int argc, char *argv[])
{
    int i = 0;
    int len = 0;
    for(i = 0; i < argc; i ++) {
        len = strlen(argv[i]);
        print_letters(argv[i], len);
    }
}

void print_letters(char arg[], int len)
{
    int i = 0;

    printf("%s len: %d\n", arg, len);
    for (i = 0; i < len; i ++) {
        char ch = arg[i];
        if (can_print_it(ch)) {
            printf("'%c' == %d\n", ch, ch);
        }
    }
}

int can_print_it(char ch)
{
    return isalpha(ch) || isblank(ch);
}

int main(int argc, char const *argv[])
{
    print_arguments(argc, argv);
    return 0;
}