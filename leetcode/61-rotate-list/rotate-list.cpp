/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        //we need last ke all the element
        // we need to first find the length

        if (!head || !head->next || k == 0) return head;

        ListNode* temp = head;
        int length = 1;
        while(temp!= nullptr && temp->next != nullptr) {
            temp = temp->next;
            length++;
        }
        temp->next = head;
        k = k % length;
        
        temp = head;
        int steps = length - k - 1;
        while(steps) {
            temp = temp->next;
            steps--;
        }

        ListNode* newhead = temp->next;
        temp->next = nullptr;
        return newhead;
    }
};