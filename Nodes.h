typedef struct _nodes{
    int id;
    char WKT[50];
}nodes;

typedef struct _node_list {
    nodes data;
    struct _person_list_node *next;
} node_list;

int ReadInputFile(char string[], node_list **pList);

void nodeAdd(node_list **pList, int id, char wkt[255]);