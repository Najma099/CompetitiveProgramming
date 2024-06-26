public class middle_of_linked_list {
    public class ListNode {
        int val;
        ListNode next;
        ListNode(int x) { val = x; }
    }
    public ListNode middleNode(ListNode head) {
        ListNode fast=head;
        ListNode slow=head;
        while(fast !=null && fast.next != null)
        {
            fast=fast.next.next;
            slow=slow.next;
        }
        return slow;
    }
}
