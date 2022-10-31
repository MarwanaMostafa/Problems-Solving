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
    ListNode* mergeNodes(ListNode* head) {
        ListNode* tempResult=new ListNode();
        ListNode* result=tempResult;
        int summation=0;
        while(head->next)
        {
            head=head->next;
            summation+=head->val;
            if(head->val==0)
            {
                tempResult->next=new ListNode(summation);
                tempResult=tempResult->next;
                summation=0;
            }
        }
        return result->next;
    }
};