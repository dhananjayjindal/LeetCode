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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int rem=0;
        ListNode *ans=NULL;
        ListNode *temp=NULL;
        
       while(l1 and l2){
           int sum=l1->val+l2->val+rem;
           
           if(sum/10==1) rem=1;
           else rem=0;
           
           if(!ans){
               ans=new ListNode(sum%10);
               temp=ans;
           }
           else{
               temp->next=new ListNode(sum%10);
               temp=temp->next;
           }
           l1=l1->next;
           l2=l2->next;
       }
      if(!l1) l1=l2;
        
      while(l1){
          int sum=l1->val+rem;
          if(sum/10==1) rem=1;
          else rem=0;
          temp->next=new ListNode(sum%10);
          temp=temp->next;
          l1=l1->next;
      }  
      if(rem) temp->next=new ListNode(1);
        
        return ans;
    }
};