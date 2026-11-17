class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        vector<int> values;
        for (int i = 0; i < lists.size(); i++) {
            ListNode* curr = lists[i];
            while (curr != nullptr) {
                values.push_back(curr->val);
                curr = curr->next;
            }
        }
        sort(values.begin(), values.end());
        if (values.empty()) {
            return nullptr;
        }
        ListNode* dummyHead = new ListNode(0);
        ListNode* current = dummyHead;
        for (int i = 0; i < values.size(); i++) {
            current->next = new ListNode(values[i]);
            current = current->next;
        }
        return dummyHead->next;
    }
};
