void traverse(struct node **temp)
{
    struct node *ptr = *temp;
    while ( ptr != NULL)
    {
        // printing the current node data;
        printf("%d->",(ptr->data));
        // going with the next node;
        ptr = ptr->next;
    }
    printf("NULL");
}
