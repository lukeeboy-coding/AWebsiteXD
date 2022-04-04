
#include <stdio.h>
#include <stdlib.h>


struct employee
{
    char name[4];
    int age;
    float weight;
};

void fun(struct employee*);

int main()
{
    struct employee e = {"abc", 20, 55.5};
    fun(&e);

    return 0;
}

void fun(struct employee *obj)
{

}

int *ptr;
char *ptr;
float *ptr;
double *ptr; 