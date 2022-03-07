class Solution
{
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode* new_node = new ListNode(0);
        ListNode* temp = new_node;
        while(l1 != NULL && l2 != NULL)
        {
            if(l1->val < l2->val)
            {
                temp->next = l1;
                l1 = l1->next;
            }
            else{
                temp->next = l2;
                l2 = l2->next;
            }
            temp = temp->next;
        }
        if(l1 == NULL)
        {
            temp->next = l2;
        }
        else if(l2 == NULL)
        {
            temp->next = l1; 
        }
        return new_node->next;   
    }
    
};