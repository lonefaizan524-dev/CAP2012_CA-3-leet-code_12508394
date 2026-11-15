class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {

        // Step 1: Find length
        int length = 0;
        ListNode* temp = head;

        while (temp != NULL) {
            length++;
            temp = temp->next;
        }

        // Step 2: Find position from beginning
        int position = length - n;

        // If first node needs to be removed
        if (position == 0) {
            return head->next;
        }

        // Step 3: Go to node before the node to delete
        temp = head;

        for (int i = 1; i < position; i++) {
            temp = temp->next;
        }

        // Step 4: Delete the node
        temp->next = temp->next->next;

        return head;
    }
};
