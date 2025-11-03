#include <cstdio>

int main()
{
    int array[] = {1, 2, 3, 4};
    printf("The third element is %d.\n", array[2]);

    array[2] = 100;
    printf("The third element is %d.\n", array[2]);

    int my_array[5];
    for (int i {0}; i < 5; ++i)
        my_array[i] = 3 * i;
    
    for (int i {0}; i < 5; ++i)
        printf("my_array[%d] = %d\n", i, my_array[i]);
}