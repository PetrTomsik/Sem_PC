typedef struct _nodes{
    int id;
    char WKT[50];
}nodes;

typedef struct _node_list {
    nodes data;
    struct _person_list_node *next;
} node_list;

int* ReadInputFile(char path[], node_list **pList);

void nodeAdd(node_list **pList,const int id,const char wkt[255]);