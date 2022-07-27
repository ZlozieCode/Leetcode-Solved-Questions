  void deleteNode(Node *del)
    {
       // Your code here
       swap(del->data,del->next->data);
       del->next=del->next->next;
    }
