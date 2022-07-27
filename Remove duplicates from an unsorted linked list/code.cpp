Node * removeDuplicates( Node *head) 
    {
     // your code goes here
     Node *curr=head;
     map<int,int>m;
     
     while(curr!=NULL && curr->next!=NULL){
         m[curr->data]++;
         if(m.find(curr->next->data)!=m.end()){
             curr->next=curr->next->next;
         }
         
         else curr=curr->next;
         
     }
     
     return head;
    }
