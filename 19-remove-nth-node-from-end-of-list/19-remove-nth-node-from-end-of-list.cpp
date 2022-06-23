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
ListNode* removeNthFromEnd(ListNode* head, int n) {
    ListNode*prev;
    ListNode*temp;
    ListNode*next; 
    int c=0;
    if (head->next==NULL&&n==1)
    return NULL;
    
    
    temp=head;
    while(temp)
    {
        temp=temp->next;
        c++;
    }
    if(c==n)
    return head->next;
    
    c=c-n;
    temp=head;
    for(int i=1;i<c;i++){
        temp=temp->next;
    }
    temp->next=temp->next->next;
    return head;
    
    
}
};
//     temp=head;
//     if (n=1)
//     {
//         while (head->next!=NULL)
//             head=head->next;
//         if(head=head->
//     }
   
//      while (head)
//      {
//          next=head->next;
//          head->next=prev;
//          prev=head;
//          head=next;
//      }
//     temp=head;
//     for(int i=0;i<n-2;i++)
//         temp=temp->next;
    
//     temp->next=temp->next->next;
//     while (head)
//      {
//          next=head->next;
//          head->next=prev;
//          prev=head;
//          head=next;
//      }
//     return head;