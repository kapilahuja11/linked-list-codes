Node* addTwoLists(Node* first, Node* second) {
     Node *res=NULL,*temp,*prev=NULL;
     int carry=0,sum;
     while(first!=NULL || second != NULL)
     {
         sum = carry+(first?first->data : 0) + (second ? second->data : 0);
         carry=(sum>=10)?1:0;
         sum=sum%10;
         temp = new Node(sum);
         if(res==NULL)
         res=temp;
         else
         prev->next=temp;
         
         prev=temp;
         
         if(first)
         first=first->next;
         if(second)
         second=second->next;
     }
     if(carry>0)
     temp->next = new Node(carry);
     return res;
}
