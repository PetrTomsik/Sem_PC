//
// Created by PetrTomsik on 23.10.2021.
//
#include <string.h>
#include <stdio.h>
#include <malloc.h>
#include "Edges.h"

void ReadInputFileEdges(char path[], edge_list **pList);

int personll_add(edge_list ***pList, int i, int i1, int i2, int i3, int i4, char *string);

void personll_print( edge_list ***list);

void ReadInputFileEdges(char path[], edge_list **pList)
{
    printf(" pamet %d",&pList);
    if (path == NULL)
    {
        printf("Invalid vertex file.\n");
    }
    char *temp = path;
    FILE *fpointer = NULL;
    fpointer = fopen(temp,"r");

    if (fpointer==NULL)
    {
        fclose(fpointer);
        printf("Invalid vertex file.\n");
    }

    printf("cesta %s \n", temp);
    char delimit[]=",";
    char line[255];
    char *token[256];
    int id;
    int source;
    int target;
    int capacity;
    int isvalid;
    char lines[256];
    int i=0;
    while (fpointer!=NULL)
    {
        fgets(line, sizeof(line), fpointer);
        memset(lines, '\0', sizeof(lines));
        strcpy(lines, line);

        if (strstr(line, "WKT") != NULL)
        {
            continue;
        }
          token[i] = strtok(line,delimit);
          while (token[i]!=NULL) {
              if (strcmp(token[i]," "))
              {
                  if (i == 0) {
                      id=atoi(token[i]);
                  } else if (i == 1) {
                      source = atoi(token[i]);
                  } else if (i == 2) {
                      target =atoi( token[i]);
                  } else if (i == 3) {
                      capacity = atoi(token[i]);
                  } else if (i == 4) {
                      if(strcmp(token[i],"False"))
                      {
                          isvalid=0;
                      }else{
                          isvalid=1;
                      }
                  }
              }
              i++;
              token[i] = strtok( NULL,delimit);
          }
          personll_add(&pList, id, source, target, capacity, isvalid, lines);
          i=0;
        if( feof(fpointer) )
        {
            break ;
        }
        memset(line,0,sizeof (line));
    }
    personll_print(&pList);
    fclose(fpointer);
}

int personll_add(edge_list ***pList, int i, int i1, int i2, int i3, int i4, char *string)
{
    printf(" pamet %d",&pList);
        edge_list *temp;
        if(!pList)
            return 0;
        temp = (edge_list *)malloc(sizeof(edge_list));
        if (!temp)
            return 0;

        temp->data.id = i;
        temp->data.source = i1;
        temp->data.target = i2;
        temp->data.capacity = i3;
        temp->data.isvalid = i4;
        strncpy(temp->data.WKT, string, 256);

        temp->next = **pList;
        **pList = temp;

        printf("----------------------\n");
        printf("id %d\n",(*(*pList))->data.id);
        printf("%d\n", i1);
        printf("%d\n", i2);
        printf("i3 %d\n", i3);
        printf("true false %d\n", i4);
        printf("%s\n", string);
        printf("----------------------\n");

        return 1;
}

void personll_print( edge_list ***list)
{
    while (**list != NULL)
    {
        printf("id: %d source: %d target: %d capacity: %d isvalid: %d WKT %s \n",(*(*list))->data.id,(*(*list))->data.source,(*(*list))->data.target,(*(*list))->data.capacity,(*(*list))->data.isvalid,(*(*list))->data.WKT);
        *(*list) = (*(*list))->next;
    }
}
