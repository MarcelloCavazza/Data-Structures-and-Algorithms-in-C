#include <stdio.h>

void arrays(){
    int basicArray[3] = {1, 4, 5};
    printf("All values:");
    for(int i = 0; i < sizeof(basicArray) / 4; i++){
        printf(" %d",basicArray[i]);
    }

    printf("\nAt Index 2: %d", basicArray[2]);
    basicArray[2] = 666;
    printf("\nUpdate Index 2: %d", basicArray[2]);
    
}