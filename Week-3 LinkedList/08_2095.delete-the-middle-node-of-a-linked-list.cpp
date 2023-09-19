/*
 * @lc app=leetcode id=2095 lang=cpp
 *
 * [2095] Delete the Middle Node of a Linked List
 */

// @lc code=start
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
    ListNode* deleteMiddle(ListNode* head) {

        if(head->next==NULL)
            return NULL;
        ListNode* dummy = new ListNode(-1,head);
        ListNode* fast = head;
        ListNode* slow = dummy;

        while(fast!=NULL && fast->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode* freetemp = slow->next;
        slow->next = slow->next->next;
        delete freetemp;
        return head;
    }
};
// @lc code=end

