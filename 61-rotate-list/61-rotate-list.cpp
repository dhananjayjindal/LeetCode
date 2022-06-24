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
public:
    ListNode* rotateRight(ListNode* head, int k) {
       if(k==0 or head==NULL or head->next==NULL){
           return head;
       } 
        ListNode *next;
        ListNode *end;
        ListNode *start;
        int s=0;
        ListNode* temp;
        temp=head;
        while(temp->next!=NULL){
            s++;
            temp=temp->next;
        }
        s=s+1;
        end=temp;
        k=k%s;
        if (k==0)
            return head;
        k=s-k;
        temp=head;
        for(int i=0;i<k-1;i++){
            temp=temp->next;
        }
        start=temp->next;
        temp->next=NULL;
        end->next=head;
        return start;
        
    }
};