public class linked_list_cylce_ii {
    public class ListNode {
        int val;
        ListNode next;
        ListNode(int x) { val = x; }
    }
    public ListNode detectCycle(ListNode head) {
        ListNode fast=head;
        ListNode slow=head;
        boolean flag=false;
        while(fast != null && fast.next != null)
        {
            fast=fast.next.next;
            slow=slow.next;
            if(fast == slow)
            {
                flag=true;
                break;
            }
        }
        if(flag==true)
        {
            ListNode temp=head;
            while(temp != slow)
            {
                temp=temp.next;
                slow=slow.next;
            }
            return slow;
        }
        return null;
    }
}
