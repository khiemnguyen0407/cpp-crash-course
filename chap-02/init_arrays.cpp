#include <cstdio>

int main()
{
    int array1 [] {1, 2, 3};
    int array2 [5] {};
    int array3 [5] {1, 2, 3};
    int array4 [5];

    for (int i {0}; i < 3; i++)
        printf("%i\n", array1[i]);

    return 0;
}