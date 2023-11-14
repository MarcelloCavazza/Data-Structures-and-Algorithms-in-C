#include <stdio.h>

void AskForIntValueToDefine(char *label, int *variable){
    printf("%s", label);
    scanf("%d", variable);
}