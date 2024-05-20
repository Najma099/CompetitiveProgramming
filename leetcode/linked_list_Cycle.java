public class linked_list_Cycle {
    public class ListNode {
        int val;
        ListNode next;
        ListNode(int x) { val = x; }
    }
    public boolean hasCycle(ListNode head) {
        //boolean flag =false;
        ListNode Slow=head;
        ListNode Fast=head;
        if(head==null || head.next == null)
        {
            return false;
        }
        while( Fast != null && Fast.next !=null)
        {
            Fast=Fast.next.next;
            Slow=Slow.next;
            if(Fast == Slow)
            return true;
        }
        return false;
    }
}
