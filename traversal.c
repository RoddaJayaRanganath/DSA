void traverse(struct node **temp)
{
    struct node *ptr = *temp;
    while ( ptr != NULL)
    {
        printf("%d->",(ptr->data));
        ptr = ptr->next;
    }
    printf("NULL");
}