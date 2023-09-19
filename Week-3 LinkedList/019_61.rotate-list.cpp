/*
 * @lc app=leetcode id=61 lang=cpp
 *
 * [61] Rotate List
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
    ListNode* rotateRight(ListNode* head, int k) {

        if(head==NULL || head->next==NULL)
            return head;
        int count = 0;
        ListNode* tmp = head;
        ListNode* last = head;
        while(tmp)
        {
            ++count;
            last = tmp;
            tmp=tmp->next;
        }

        k = k%count;
        if(k==0)
            return head;
        tmp = head;
        ListNode* prev  = head;
        while(count!=k)
        {
            --count;
            prev = tmp;
            tmp=tmp->next;
        }
        prev->next=NULL;
        last->next=head;
        return tmp;

    }
};
// @lc code=end

