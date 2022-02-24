#include <stdio.h>

typedef struct node
{
    int data;
    struct node *next;
} NodeList;

NodeList *searchList(NodeList *node, int key)
{
    while (node != NULL)
    {
        if (node->data == key)
            return node;
        else
            node = node->next;
    }
    return NULL;
}

int main()
{
    NodeList n1, n2, n3, n4, n5, n6, n7, n8;
    n8.data = 1;
    n8.next = NULL;
    n7.data = 8;
    n7.next = &n8;
    n6.data = 4;
    n6.next = &n7;
    n5.data = 7;
    n5.next = &n6;
    n4.data = 2;
    n4.next = &n5;
    n3.data = 9;
    n3.next = &n4;
    n2.data = 5;
    n2.next = &n3;
    n1.data = 6;
    n1.next = &n2;

    NodeList *temp = &n1;
    while (temp != NULL)
    {
        printf("%d", temp->data);
        temp = temp->next;
    }
    printf("\n");
    int key;
    printf("enter key: ");
    scanf("%i", &key);
    NodeList * result = searchList(&n1,key);
    if(result != NULL){
        printf("Found: %i\n",key);
    }
    else
    {
        printf("Not Found: %i\n", key);
    }
    return 0;
}
