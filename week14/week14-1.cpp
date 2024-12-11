class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode*ans=new ListNode();
        ListNode*noe=ans;
        while(l1!=nullptr){
            noe->next=new ListNode(l1->val);
            l1=l1->next;
            noe=now->next;
        }
        return ans->next
    }
};
