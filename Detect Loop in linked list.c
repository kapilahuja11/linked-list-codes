#include <bits/stdc++.h> 
int detectloop(Node *head) {

    
    unordered_set<Node*> s; 
    for(Node *curr=head; curr!=NULL; curr=curr->next)
    {
        if(s.find(curr) != s.end())
          return 1;
         s.insert(curr);
    }
    return 0;
}
