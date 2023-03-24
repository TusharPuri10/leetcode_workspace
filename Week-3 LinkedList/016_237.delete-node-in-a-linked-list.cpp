/*
 * @lc app=leetcode id=237 lang=cpp
 *
 * [237] Delete Node in a Linked List
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
    void deleteNode(ListNode* node) {
        //node will have address of the element to be deleted
        //but we cannot change the address of node because
        // if we do change the address then it will not effect
        // the actual address because we passed a pointer
        // not a reference to the pointer

        ListNode* last2ndnode;
        while(node->next)
        {
            node->val = node->next->val;
            last2ndnode = node;
            node = node->next;
        }
        last2ndnode->next = NULL;
    }
};
// @lc code=end

