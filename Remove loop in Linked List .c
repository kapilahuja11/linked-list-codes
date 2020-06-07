void removeLoop(Node* head)
{
    // code here
    // just remove the loop without losing any nodes
    Node *slow=head,*fast=head;
     if (head == NULL || head->next == NULL) 
        return; 
        slow = slow->next; 
    fast = fast->next->next; 
    while(fast!=NULL && fast->next!=NULL)
    {
        if(slow==fast)
         break;
        slow=slow->next;
        fast=fast->next->next;
        
    }
    if(slow==fast)
   {
         if(fast==head)
          {
              while(slow->next!=fast)
              {
                  slow=slow->next;
              }
              slow->next=NULL;
          }
          else
          {
          slow=head;
          while(slow->next!=fast->next)
          {
             slow=slow->next;
             fast=fast->next;
          }
          fast->next=NULL;
       }
   }
}
