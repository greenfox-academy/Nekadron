#include <stdio.h>
#include <stdlib.h>
/** TODO:
 * Create a function called "range" that creates a new array and returns a pointer to it.
 * It should fill the array with numbers based on it's paramters.
 * It should take 3 paramters:
 * int from: the first number in the array
 * int to: it will fill the array till it would reach this number (so this number is not in the array)
 * int step: the step between the numbers
 *
 * Examples:
 * range(0, 10, 2) -> {0, 2, 4, 6, 8}
 * range(1, -8, -3) -> {1, -2, -5}
 *
 * It should delete any dynamically allocated resource before the program exits.
 */
int *range(int from, int to, int step)
{
    if (from == to)
        return NULL;

    if (from < to){
        int size = 0;
        int tmp = from;

        while(tmp > to) {
            tmp = tmp + step;
            size++;
        }
        int *array = (int*) calloc(size, sizeof(int));

        for (int i = 0; i < size; i++) {
            array[i] = from + step * i;

        }
        return array;
    } else {

        int size = 0;
        int tmp = from;

        while (tmp > to) {
            tmp = tmp + step;
            size++;
        }

        int *array = (int*) calloc(size, sizeof(int));

        for (int i = 0; i < size; i++) {
            array[i] = from + step *i;
        }
        return array;
    }
}

int main()
{
    int* array1 = range(0, 10, 2);
    for (int i = 0; i < 5; i++) {
        printf("%d\n", array1[i]);
    }
    int* array2 = range(1, -13, -3);
    for (int i = 0; i < 5; i++) {
        printf("%d", array2[i]);
    }



    free(array1);
    free(array2);

    return 0;
}
