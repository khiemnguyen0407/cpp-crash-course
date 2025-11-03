#include <cstdio>

int main()
{
    unsigned long max = 0;
    unsigned long values[] = {10, 15, 40, 35, 30, 25, 20};
    for (unsigned long value : values)
    {
        if (value > max)
            max = value;
    }
    printf("The maximum value is %lu.\n", max);
}