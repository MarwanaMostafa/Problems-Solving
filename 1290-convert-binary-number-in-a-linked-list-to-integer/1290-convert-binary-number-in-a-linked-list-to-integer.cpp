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
    int getDecimalValue(ListNode* head) {
        
    string result = "";
    int resultt=0;
    while (head->next)
    {
        result += head->val ;
        head = head->next;
    }
        result += head->val ;
        
    reverse(result.begin(),result.end());
    for(int i=0;i<result.size();i++)
        resultt+=(int)result[i] * pow(2,i);
    return resultt;
    }
};