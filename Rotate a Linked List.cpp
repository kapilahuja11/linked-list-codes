Node* rotate(Node* head, int k) {
    // Your code here
  struct Node* cur=head,*knode;
  int count=1;
  while(count<k && cur!=NULL)
  {
      cur=cur->next;
      count++;
  }
  knode=cur;
  while(cur->next!=NULL)
  {
      cur=cur->next;
  }
  cur->next=head;
  head=knode->next;
  knode->next=NULL;
  return head;
}
