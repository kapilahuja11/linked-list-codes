Node *removeDuplicates(Node *root)
{
    struct Node *curr=root;
    struct Node *next;
    while(curr->next!=NULL)
    {
        if(curr->data == curr->next->data)
        {
            next=curr->next->next;
            free(curr->next);
            curr->next=next;
        }
        else
        {
            curr=curr->next;
        }
    }
    return root;
}
