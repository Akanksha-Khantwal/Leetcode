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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        vector<int> values;
        for (auto list : lists) {
            while (list) {
                values.push_back(list->val);
                list = list->next;
            }
        }
        sort(values.begin(), values.end());
        ListNode dummy(0);
        ListNode* tail = &dummy;

        for (auto item : values) {
            tail->next = new ListNode(item);
            tail = tail->next;
        }
        return dummy.next;
    }
};