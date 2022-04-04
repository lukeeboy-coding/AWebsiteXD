#include <stdio.h>
#include <stdlib.h>


struct LM35
{
    char weather[4];
    int temperature;
    float exactTemperature;
};

void fun(struct LM35*);

int main()
{
    struct LM35 e = {"abc", 20, 55.5};
    fun(&e);

    return 0;
}

void fun(struct LM35 *obj)
{

}
