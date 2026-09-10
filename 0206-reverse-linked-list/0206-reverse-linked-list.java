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
    public ListNode reverseList(ListNode head) {
        int n=0;
        ListNode temp=head;
        while(temp != null){
            n++;
            temp=temp.next;
        }
        if(n == 0)
        return null;
        if(n == 1)
        return head;
        temp=head;
        ListNode nxt=temp.next;

        while(n>=0){
            ListNode nxxt = nxt.next;
            if(nxxt == null){
                nxt.next=temp;
                break;
            }
            nxt.next=temp;
            temp=nxt;
            nxt=nxxt;
            n--;
        }
        head.next=null;
        //System.out.println(head.val);
        head=nxt;
        //System.out.println(head.next.next.next.next.next.val);
        return head;
    }
}