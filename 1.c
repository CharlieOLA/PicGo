#include <stdio.h>

int main(int argc, char const *argv[])
{
    printf("hello world!");

    
    uint16_t tone[] = {247, 262, 294, 330, 349, 392, 440, 294, 523, 587, 659, 698, 784, 1000};
    uint8_t music[] = {5, 5, 6, 8, 7, 6, 5, 6, 13, 13, 5, 5, 6, 8, 7, 6, 5, 3, 13, 13, 2, 2, 3, 5, 3, 5, 6, 3, 2, 1, 6, 6, 5, 6, 5, 3, 6, 5, 13, 13,
                       5, 5, 6, 8, 7, 6, 5, 6, 13, 13, 5, 5, 6, 8, 7, 6, 5, 3, 13, 13, 2, 2, 3, 5, 3, 5, 6, 3, 2, 1, 6, 6, 5, 6, 5, 3, 6, 1, 13, 8, 9, 10, 10, 9, 8, 10, 9, 8, 6, 13, 6, 8, 9, 9, 8, 6, 9, 8, 6, 5, 13, 2, 3, 5, 5, 3, 5, 5, 6, 8, 7, 6, 6, 10,
                       9, 9, 8, 6, 5, 6, 8};
    uint8_t time[] = {2, 4, 2, 2, 2, 2, 2, 8, 4, 4, 2, 4, 2, 2, 2, 2, 2, 8, 4, 4,
                      2, 4, 2, 4, 2, 2, 4, 2, 2, 8, 2, 4, 2, 2, 2, 2, 2, 8, 4, 4, 2, 4, 2, 2, 2, 2, 2, 8, 4,
                      4, 2, 4, 2, 2, 2, 2, 2, 8, 4, 4, 2, 4, 2, 4, 2, 2, 4, 2, 2, 8, 2, 4, 2, 2, 2, 2, 2, 8, 4, 2, 2, 2, 4, 2, 2, 2, 2, 2, 8, 4, 2, 2, 2, 4, 2, 2, 2, 2, 2, 8, 4, 2, 2, 2, 4, 2, 2, 5, 2, 6, 2, 4, 2, 2, 2, 4, 2, 4, 2, 2, 12};
    return 0;
}
