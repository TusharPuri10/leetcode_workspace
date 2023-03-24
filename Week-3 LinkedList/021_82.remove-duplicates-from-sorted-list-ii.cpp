/*
 * @lc app=leetcode id=82 lang=cpp
 *
 * [82] Remove Duplicates from Sorted List II
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
    ListNode* deleteDuplicates(ListNode* head) {
        
        //head will be checked in last
        if(head==NULL || head->next==NULL)
            return head;

        int flag_for_delete_head=0;
        if(head->val == head->next->val)
            flag_for_delete_head=1;

        ListNode* prev = head;
        ListNode* curr = head->next;
        ListNode* nxt = curr->next;

        int flag_for_delete_curr=0;
        while(nxt)
        {
            if(curr->val == nxt->val)
            {
                flag_for_delete_curr=1;
                ListNode* tmp = nxt;
                nxt = nxt->next;
                delete(tmp);
            }
            else if(flag_for_delete_curr)
            {
                ListNode* tmp = curr;
                prev->next = nxt;
                curr = nxt;
                nxt = nxt->next;
                delete(tmp);
                flag_for_delete_curr=0;
            }
            else
            {
                prev = curr;
                curr = nxt;
                nxt = nxt->next;
            }
        }
        if(flag_for_delete_curr)
        {
            ListNode* tmp = curr;
            prev->next = NULL;
            delete(tmp);
        }

        if(flag_for_delete_head)
        {
            if(head->val == head->next->val)
            {
                ListNode* tmp1 = head;
                ListNode* tmp2 = head->next;
                head = head->next->next;
                delete(tmp1);
                delete(tmp2);
            }
            else
            {
                ListNode* tmp1 = head;
                head = head->next;
                delete(tmp1);
            }
        }
        return head;
        

        //now check head;
    }
};
// @lc code=end

