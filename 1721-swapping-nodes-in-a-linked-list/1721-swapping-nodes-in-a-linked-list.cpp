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
    ListNode* swapNodes(ListNode* head, int k) {
        if(head==nullptr||head->next==nullptr)
            return head;
        ListNode* begin=head;
        ListNode* end=head;
        ListNode* temp=head;
        int len=1;
        while(temp->next)
        {
            temp=temp->next;
            len++;
            if(len==k)
                begin=temp;
        }
        temp=head;
        while(temp->next)
        {
            temp=temp->next;
            len--;
            if(len==k)
                end=temp;
        }
        int x=begin->val;
        begin->val=end->val;
        end->val=x;

        return head;
    }
};