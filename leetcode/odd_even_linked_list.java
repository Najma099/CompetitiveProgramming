public class odd_even_linked_list {
    public class ListNode {
        int val;
        ListNode next;
        ListNode(int x) { val = x; }
    }
    public ListNode oddEvenList(ListNode head) {
        ListNode even = new ListNode(0);
        ListNode e=even;
        ListNode odd = new ListNode(0);
        ListNode o=odd;
        int i=0;
        while(head != null)
        {
            if((i & 1) !=0)
            {
                e.next=head;
                head=head.next;
                e=e.next;
            }
            else
            {
                o.next=head;
                head=head.next;
                o=o.next; 
            }
            i++;
        }
        o.next=even.next;
        e.next=null;
        return odd.next;
    }
}
