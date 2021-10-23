//
// Created by PetrTomsik on 23.10.2021.
//
#include <string.h>
#include <stdio.h>
#include "Nodes.h"



int ReadInputFile(char string[], node_list **nList)
{
    if (string==NULL)
    {
        printf("Invalid vertex file.\n");
        return 1;
    }
    FILE  * fpointer= NULL;
    char *temp =string;
    printf("%s",temp);
    char firstLine[255];
    char line[255];
    char *tokenFirst;
    char *token;
    fpointer = fopen(temp,"r");

    if (fpointer==NULL)
    {
        fclose(fpointer);
        printf("Invalid vertex file.\n");
        return 1;
    }
    char delimit[]=",";
    int lenght= strlen(token);
    int IdOrWkt=1;

    fgets(firstLine, sizeof(line), fpointer);
    printf("První radek %s", firstLine);
    tokenFirst = strtok(firstLine,delimit);

    if(strcmp(tokenFirst,"id")){
        printf("seper\n");
        IdOrWkt=0;
    }
     tokenFirst = strtok( NULL,"");
    while (fpointer!=NULL)
    {
    fgets(line, sizeof(line), fpointer);
    //printf("%s", line);
    token = strtok(line,delimit);


        for (int i = 0; i < lenght; ++i)
        {
            if(IdOrWkt==0){

            }
            if(token!=NULL){
            printf("%s\n", token);
            token = strtok( NULL,"");
            }
        }

       /* while (token!=NULL){
            printf("%s\n", token);
            token = strtok( NULL,"");
        }*/

        if( feof(fpointer) )
        {
            break ;
        }
    }
    fclose(fpointer);
    return 0;
}