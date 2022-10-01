#include <stdio.h>
#include <string.h>

struct emploeey
{
    int id;
    char name[24];
    float salary;
};

int main()
{
    struct emploeey e1, e2, e3;
    printf("enter id 1");
    scanf("%d", &e1.id);
    printf("enter id name");
    scanf("%s", &e1.name);
    printf("enter id salary");
    scanf("%f", e1.salary);

    printf("enter id 2");
    scanf("%d", &e2.id);
    printf("enter id name");
    scanf("%s", &e2.name);
    printf("enter id salary");
    scanf("%f", e2.salary);  

    printf("enter id 1");
    scanf("%d", &e3.id);
    printf("enter id name");
    scanf("%s", &e3.name);
    printf("enter id salary");
    scanf("%f", e3.salary);

    return 0;
}
