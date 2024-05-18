public class remove_last_nth {
    public class ListNode {
            int val;
            ListNode next;
            ListNode() {}
            ListNode(int val) { this.val = val; }
            ListNode(int val, ListNode next) { this.val = val; this.next = next; }
         }
    public ListNode removeNthFromEnd(ListNode head, int n) {
        ListNode fast=head;
        ListNode slow=head;
        
        for(int i=1;i<=n ;i++)
        {
            fast=fast.next;
        }
        if(fast==null)
        {
            head=head.next;
            //return;
        }
        else
        {
        while(fast.next != null)
        {
            fast=fast.next;
            slow=slow.next;
        }
        slow.next=slow.next.next;
        
        }
        return head;
    }
}
