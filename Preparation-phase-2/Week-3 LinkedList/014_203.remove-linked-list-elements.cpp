/*
 * @lc app=leetcode id=203 lang=cpp
 *
 * [203] Remove Linked List Elements
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
    ListNode* removeElements(ListNode* head, int val) {

        if(head==NULL || (head->next==NULL && head->val == val))
            return NULL;
        else if(head->next==NULL)
            return head;
        
        ListNode* prev = head;
        ListNode* curr = head->next;
        while(curr)
        {
            if(curr->val==val)
            {
                ListNode* temp = curr;
                curr=curr->next;
                prev->next=curr;
                delete(temp);
            }
            else
            {
                curr=curr->next;
                prev=prev->next;
            }
        }
        if(head->val==val)
        {
            ListNode* temp = head;
            head=head->next;
            delete(temp);
        }
        return head;
    }
};
// @lc code=end

