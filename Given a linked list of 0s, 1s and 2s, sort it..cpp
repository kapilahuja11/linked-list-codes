Node* segregate(Node *head) {
    
    int i=0,j=0,k=0;
    Node* temp=head;
    while(temp!=NULL)
    {
        if(temp->data==0)
        i++;
        if(temp->data==1)
        j++;
        if(temp->data==2)
        k++;
        temp=temp->next;
    }
    temp=head;
    while(i>0 && temp!=NULL)
    {
        temp->data=0;
        temp=temp->next;
        --i;
    }
    while(j>0 && temp!=NULL)
    {
        temp->data=1;
        temp=temp->next;
        --j;
        
    }
    while(k>0 && temp!=NULL)
    {
        temp->data=2;
        temp=temp->next;
        --k;
    }
    
    return head;
}
