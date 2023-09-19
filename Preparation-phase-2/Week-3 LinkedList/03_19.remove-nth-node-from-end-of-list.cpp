/*
 * @lc app=leetcode id=19 lang=cpp
 *
 * [19] Remove Nth Node From End of List
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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int count=0;
        ListNode* temp = head;
        while(temp!=NULL)
        {
            ++count;
            temp=temp->next;
        }
        temp = head;
        if(count==n)
        {
            head = head->next;
            delete temp;
            return head;
        }
        while(count-1!=n)
        {
            temp = temp->next;
            --count;
        }
        ListNode* freeptr = temp ->next;
        temp->next = temp->next->next;
        delete freeptr;
        return head;
    }
};
// @lc code=end

