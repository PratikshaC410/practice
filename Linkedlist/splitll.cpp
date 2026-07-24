#include <iostream>
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
class Solution
{
public:
    vector<ListNode *> splitListToParts(ListNode *head, int k)
    {

        int n = 0;
        ListNode *temp = head;

        while (temp)
        {
            n++;
            temp = temp->next;
        }

        int size = n / k;
        int extra = n % k;

        vector<ListNode *> ans(k, nullptr);

        ListNode *curr = head;

        for (int i = 0; i < k; i++)
        {

            if (curr == nullptr)
            {
                ans[i] = nullptr;
                continue;
            }

            ans[i] = curr;

            int partSize = size + (extra > 0 ? 1 : 0);

            if (extra > 0)
                extra--;

            for (int j = 1; j < partSize; j++)
                curr = curr->next;

            ListNode *nextPart = curr->next;
            curr->next = nullptr;
            curr = nextPart;
        }

        return ans;
    }
};