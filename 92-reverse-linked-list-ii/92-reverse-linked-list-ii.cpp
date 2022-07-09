/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
    
    ListNode* reverse(ListNode* head){
        
        ListNode* prev=NULL;
        ListNode* next=NULL;
        ListNode* curr=head;
        
        while(curr!=NULL){
           next=curr->next;
           curr->next=prev;
           prev=curr;
           curr=next;
        }
        return prev;
    }
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        
        //if(head==NULL || head->next==NULL || left==right)return head;
        if(head==NULL)return head;
        ListNode* slow=head;
        ListNode* prev=NULL;
        ListNode* curr=head;
        
        int c=1;
        
        while(c<left){
            prev=curr;
            curr=curr->next;
            c++;
        }
        ListNode* start=curr;
        
        while(c<right){
            curr=curr->next;
            c++;
        }
        
        ListNode* temp=curr->next;
        curr->next=NULL;
        
        ListNode* rev=reverse(start);
        if(prev!=NULL)prev->next=rev;
        
        curr=rev;
        
        while(curr->next!=NULL){
            curr=curr->next;
        }
        
        curr->next=temp;
        
        if(left == 1){
            return rev;
        }
        else{
            return head;
        }
        return head;
    }
};