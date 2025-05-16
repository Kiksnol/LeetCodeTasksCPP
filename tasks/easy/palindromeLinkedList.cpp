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
    bool isPalindrome(ListNode* head) {
        ListNode *tmp = head;

        int cnt = 0;
        while (tmp != nullptr) {
            cnt++;
            tmp = tmp->next;
        }


        ListNode *cur = head, *prev = nullptr, *next;
        for (int i = 0; i < cnt / 2; ++i) {
            next = cur->next;
            cur->next = prev;
            prev = cur;
            cur = next;
        }

        if (cnt % 2 == 1)
            cur = cur->next;

        while (prev != nullptr && cur != nullptr) {
            if (cur->val != prev->val)
                return false;

            cur = cur->next;
            prev = prev->next;
        }

        return true;
    }
};
