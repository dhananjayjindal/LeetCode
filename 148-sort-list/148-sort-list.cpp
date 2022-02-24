class Solution {
public:
    void linkedlist(ListNode** ptr,int num){
        ListNode* temp =new ListNode(num);
        temp->next=*ptr;
        *ptr=temp;
    }
    ListNode* sortList(ListNode* head) {
        vector<int> v;
        ListNode* ans=NULL;
        while(head!=NULL){
            v.push_back(head->val);
            head=head->next;
        }
        sort(v.begin(),v.end());
        int n=v.size();
        for(int i=n-1;i>=0;i--){
            linkedlist(&ans,v[i]);
        }
        return ans;
    }
};