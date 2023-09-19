/*
 * @lc app=leetcode id=141 lang=cpp
 *
 * [141] Linked List Cycle
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head==NULL || head->next==NULL)
            return false;
        
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast->next && fast->next->next)//NULL -> false checking for last and second last
        {
            slow=slow->next;
            fast=fast->next->next;
            if(slow == fast)
                return true;
        }
        return false;
    }
};
// @lc code=end

