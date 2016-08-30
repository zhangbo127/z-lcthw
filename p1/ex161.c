#include <stdio.h>

struct Person
{
    char *name;
    int age;
    int height;
    int weight;
} people[2] = {
    {"Joe Alex", 32, 64, 140},
    {"Frank Blank", 20, 72, 180}
};

void Person_print(struct Person p[], int sizeofp)
{
    for (int i = 0; i < sizeofp; i ++) {
        printf("Name: %s\n", p[i].name);
        printf("\tAge: %d\n", p[i].age);
        printf("\tHeight: %d\n", p[i].height);
        printf("\tWeight: %d\n", p[i].weight);
    }
}

int main(int argc, char const *argv[])
{
    int sizeofp = sizeof(people) / sizeof(people[0]);
    Person_print(people, sizeofp);
    return 0;
}