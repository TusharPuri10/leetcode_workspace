/*
 * @lc app=leetcode id=876 lang=cpp
 *
 * [876] Middle of the Linked List
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
    ListNode* middleNode(ListNode* head) {
        ListNode* tmp = head;
        int count=0;
        while(tmp!=NULL)
        {
            ++count;
            tmp=tmp->next;
        }
        tmp = head;
        int i=0;
        while(i!=count/2)
        {
            tmp=tmp->next;
            ++i;
        }
        return tmp;
    }
};
// @lc code=end

