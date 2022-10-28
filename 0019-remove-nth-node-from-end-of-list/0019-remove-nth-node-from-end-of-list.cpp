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
        if(head->next==nullptr)
            return nullptr;
        
        int len=1;
        ListNode* temp=head;
        while(temp->next)
        {
            len++;
            temp=temp->next;
        }
        if(len==2&&n==1)
        {    head->next=nullptr;
        return head;}
         if(len==2&&n==2)
        return head->next;
    if(len==n)
    {
        head=head->next;
            return head;
    }   
        
        temp=head;
        for(int i=0;i<len-n-1;++i)
            temp=temp->next;
        temp->next=temp->next->next;
        return head;
    }
};
