#include <cstddef>
#include <cstdio>

int main()
{
    unsigned long maximum = 0;
    unsigned long my_array[] = {10, 15, 50, 45, 35, 30};
    for (size_t i = 0; i < 5; i++)
    {
        if (my_array[i] > maximum)
            maximum = my_array[i];
    }
    printf("The maximum value is %lu\n", maximum);

    return 0;
}