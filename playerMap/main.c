#include <stdio.h>
#include <stdlib.h>

#define ARRAY_SIZE 5

void InitArr3D (char arr[ARRAY_SIZE][ARRAY_SIZE][ARRAY_SIZE], char symbol);
void PrintArr3d (char arr[ARRAY_SIZE][ARRAY_SIZE][ARRAY_SIZE])

int main()
{
    char arr[ARRAY_SIZE][ARRAY_SIZE][ARRAY_SIZE];
    InitArr3D(arr, '-');

    return 0;
}

void InitArr3D (char arr[ARRAY_SIZE][ARRAY_SIZE][ARRAY_SIZE], char symbol)
{
    for (int x = 0; x < ARRAY_SIZE; x++)
    {
        for (int y = 0; y < ARRAY_SIZE; y++)
        {
            for (int z = 0; z < ARRAY_SIZE; z++)
            {
                arr[x][y][z] = symbol;
            }
        }
    }
}
