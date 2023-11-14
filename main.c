#include <stdio.h>
#include "mainheader.h"

int main(){
    int userChoice = -1;

    while (userChoice == -1)
    {
        AskForIntValueToDefine("Which Data Structure do you want to see?\n0-Exit\n1-Arrays\n", &userChoice);
        // printf("\n");
        switch (userChoice)
        {
            case 0:
            break;
            case 1:
                arrays();
            break;
            
            default:
                userChoice = -1;
            break;
        }
    }
    


    return 0;
}