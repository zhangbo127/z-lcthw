#include <stdio.h>

void printf_array(int *ages, char *names[], int count) {
    for (int i = 0; i < count; i ++) {
        printf("%s is %d years old.(printf_array)\n", names[i], ages[i]);
    }
}

int main(int argc, char const *argv[])
{
    int ages[] = {23, 43, 12, 89, 2};
    char *names[] = {
        "Alan", "Frank",
        "Mary", "John", "Lisa"
    };

    int count = sizeof(ages) / sizeof(int);
    int i = 0;

    printf_array(ages, names, count);

    printf("---\n");

    int *cur_age = ages;
    char **cur_name = names;

    for (i = 0; i < count; i ++) {
        printf("%s is %d years old.\n", *(cur_name + i), *(cur_age + i));
    }

    printf("---\n");

    for (i = 0; i < count; i ++) {
        printf("%s is %d years old again.\n", cur_name[i], cur_age[i]);
    }

    printf("---\n");

    for (cur_name = names, cur_age = ages; (cur_age - ages) < count; cur_name ++, cur_age ++) {
        printf("%s lived %d years so far.\n", *cur_name, *cur_age);
    }

    printf("---\n");


    int last_index = count - 1;
    cur_name = names + last_index, cur_age = ages + last_index;
    while (last_index) {
        printf("%s lived %d years so far. %p %p\n", *(cur_name - last_index), *(cur_age - last_index), cur_name, cur_age);
        last_index --;
    }

    return 0;
}