#include <stdbool.h>

typedef struct _edges{
    int id;
    int source;
    int target;
    int capacity;
    int isvalid;
    char WKT[256];
}edges;

typedef struct _edges_list {
    edges data;
    struct _edges_list *next;
} edge_list;

void ReadInputFileEdges(char path[], edge_list **pList);

int personll_add(edge_list ***pList, int i, int i1, int i2, int i3, int i4, char *string);

void personll_print( edge_list ***list);