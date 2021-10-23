//
// Created by PetrTomsik on 23.10.2021.
//
#include <string.h>
#include <stdio.h>
#include <malloc.h>
#include "Nodes.h"


void nodeAdd(node_list **pList, int id, char wkt[255]);

int ReadInputFile(char string[], node_list **nList)
{
    if (string==NULL)
    {
        printf("Invalid vertex file.\n");
        return 1;
    }
    int id;
    char *wkt;
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
            if(IdOrWkt==i){
                id=(int)token;
            }else{
                wkt=token;
            }
            if(token!=NULL){
            printf("%s\n", token);
            token = strtok( NULL,"");
            }
        }
        nodeAdd(nList,id,wkt);
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


/**
 * Zkontrolovat pointry
 * @param pList
 * @param id
 * @param wkt
 */
void nodeAdd(node_list **pList, int id, char *wkt) {
    node_list *temp;

    if (!pList || !id || !wkt)    /* Tady nesmí být !*list. V mainu jej máš na NULL sám nastaven! */
       printf("Mistake");

    temp = (node_list *)malloc(sizeof(node_list));
    if (!temp)
        printf("Mistake");

    temp->data.id = id;
    strncpy(temp->data.WKT, wkt, 255);

    temp->next = *pList;
    *pList = temp;

}
