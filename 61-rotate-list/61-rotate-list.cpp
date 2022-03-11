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
       if(k==0 or head==NULL){
           return head;
       } 
        int size=1;
        ListNode* temp=NULL;
        for(temp=head;temp->next;temp=temp->next){
            size++;
        }
        temp->next=head;
        k%=size;
        k=size-k;
        for(int i=0;i<k;i++){
            temp=head;
            head=head->next;
        }
        temp->next=NULL;
        temp=NULL; delete temp;
        return head;
        
    }
};