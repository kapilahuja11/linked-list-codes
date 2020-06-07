int countNodesinLoop(struct Node *head)
{
     // Code here
     Node *slow=head,*fast=head;
     while(fast!=NULL && fast->next!=NULL)
     {
         slow=slow->next;
         fast=fast->next->next;
         if(slow==fast)
         break;
     }
     if(slow==fast)
     {
     Node* temp=slow;
     int count=1;
     while(temp->next!=slow)
     {
         count++;
         temp=temp->next;
     }
     return count;
     }
     else
     return 0;
     
}
