/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public boolean isPalindrome(ListNode head) {
       ArrayList<Integer> result = new ArrayList<>();
        while (head.next != null) {
            result.add(head.val);
            head = head.next;
        }
        result.add(head.val);

        int len = result.size();
        for (int i = 0; i < len/2; i++)
            if (result.get(i) != result.get(len - i - 1))
                return false;

        return true;
        
        
        
        
    }
}