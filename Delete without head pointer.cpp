void deleteNode(Node *node)
{
   // Your code here
   Node *temp;
   if(node==NULL)
   return;
   else
   {
    temp=node->next;
    node->data=temp->data;
    node->next=temp->next;
    delete(temp);
       
   }
}

