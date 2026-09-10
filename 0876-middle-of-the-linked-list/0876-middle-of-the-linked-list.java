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
    public ListNode middleNode(ListNode head) {
        ListNode prev=null;
        ListNode slow=head;
        ListNode fast=head;
        ListNode temp=head;
        int n=0;
        while(temp != null){
            n++;
            temp=temp.next;
        }

        while(fast.next != null || fast != null){
            System.out.println(fast.val);
            prev=slow;
            slow=slow.next;
            if(fast.next == null || fast.next.next == null) break;
            fast=fast.next.next;
        }
        head=slow;
        if(n % 2 != 0)
        head = prev;
        return head;
    }
}