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
    struct emploeey facebook[100];
    facebook[0].id = 100;
    strcpy(facebook[0].name,"harry");
    facebook[0].salary = 333;
  
   facebook[1].id = 10;
    strcpy(facebook[1].name,"sg");
    facebook[1].salary = 33;

 facebook[2].id = 10;
    strcpy(facebook[2].name,"ha");
    facebook[2].salary = 3;
    printf("done");


    return 0;
}