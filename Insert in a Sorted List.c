Node *sortedInsert(struct Node* head, int data) {
    struct Node *current;
    struct Node *newnode = new Node(data);
    if(head==NULL || head->data >= data)
    {
       newnode->next = head;
       head = newnode;
       return head;
    }
    else
    {
        current = head;
        while(current->next->data < data && current->next!=NULL)
        {
            current=current->next;
        }
        newnode->next = current->next; 
        current->next = newnode; 
    
    }
    return head;
}
