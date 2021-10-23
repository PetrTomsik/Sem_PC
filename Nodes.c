//
// Created by PetrTomsik on 23.10.2021.
//
#include <string.h>
#include <stdio.h>
#include "Nodes.h"

int ReadInputFile(char string[])
{

    FILE  * fpointer= NULL;
    char *temp =string;
    printf("%s\n",temp);
    char line[255];
    fpointer = fopen(temp,"r");

    if (fpointer==NULL)
    {
        fclose(fpointer);
        printf("Invalid vertex file.\n");
        return -1;
    }
    fgets(line,255, fpointer);
    printf("%s", line);
    return 0;
}