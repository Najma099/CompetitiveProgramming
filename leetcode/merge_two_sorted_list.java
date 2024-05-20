public class merge_two_sorted_list {
    public class ListNode {
        int val;
        ListNode next;
        ListNode(int x) { val = x; }
    }
    public ListNode mergeTwoLists(ListNode list1, ListNode list2) {
        
        if (list1 == null) return list2;
        if (list2 == null) return list1;
        
        ListNode n= new ListNode(0);
        ListNode t=n;
        

        
        while (list1 != null && list2 != null) 
        {
            if (list1.val < list2.val) {
                t.next = list1;
                list1 = list1.next;
            } else {
                t.next = list2;
                list2 = list2.next;
            }
            t=t.next;
        }

       
        if (list1 != null) 
        {
            t.next = list1;
        } 
        else 
        {
            t.next = list2;
        }

        return n.next;
    }
}
