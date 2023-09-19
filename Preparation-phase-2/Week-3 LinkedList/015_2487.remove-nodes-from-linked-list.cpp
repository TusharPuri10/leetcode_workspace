/*
 * @lc app=leetcode id=2487 lang=cpp
 *
 * [2487] Remove Nodes From Linked List
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
    ListNode* removeNodes(ListNode* head) {
        if(head==NULL || head->next==NULL)
            return head;

        ListNode* prev = head;
        ListNode* curr = head->next;
        int justprev=prev->val;
        while(curr)
        {
            if(justprev<curr->val)
            {
                if(prev->val<curr->val)
                {
                    head=curr;
                    prev=head;
                }
                else
                {
                    ListNode* prevprev=prev;
                    while(prev->val>=curr->val)
                    {
                        prevprev=prev;
                        prev=prev->next;
                    }
                    prevprev->next=curr;
                    prev=head;
                }
            }
            justprev=curr->val;
            curr=curr->next;
        }
        return head;
    }
};
// @lc code=end

