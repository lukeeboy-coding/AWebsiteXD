#include <stdio.h>
#include <stdlib.h>


struct LM35
{
    char name[4];
    int age;
    float weight;
};

void fun(struct LM35*);

int main()
{
    struct employee e = {"abc", 20, 55.5};
    fun(&e);

    return 0;
}

void fun(struct LM35 *obj)
{

}
