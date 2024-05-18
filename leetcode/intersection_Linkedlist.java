public class intersection_Linkedlist {
    public class ListNode {
        int val;
        ListNode next;
        ListNode(int x) { val = x; }
    }
    public static int length(ListNode head) {
        ListNode trav = head;
        int count = 0;
        while (trav != null) {
            count++;
            trav = trav.next;
        }
        return count;
    }

    public ListNode getIntersectionNode(ListNode headA, ListNode headB) {
        int lengthA = length(headA);
        int lengthB = length(headB);

         
        while (lengthA > lengthB) {
            headA = headA.next;
            lengthA--;
        }
        while (lengthB > lengthA) {
            headB = headB.next;
            lengthB--;
        }

        
        while (headA != null && headB != null) {
            if (headA == headB) {
                return headA;
            }
            headA = headA.next;
            headB = headB.next;
        }

        return null; 
    }
}
