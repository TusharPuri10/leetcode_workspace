/*
 * @lc app=leetcode id=92 lang=cpp
 *
 * [92] Reverse Linked List II
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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        
        if(left==right)
            return head;
        
        int i=1;
        int flag_l_is_1=0;
        if(left==1)
            flag_l_is_1=1;

        ListNode* tmp = head;
        ListNode* prev_of_l;
        ListNode* l;
        if(flag_l_is_1)
            l = head;
        ListNode* r;
        ListNode* next_of_r;
        while(tmp)
        {
            if(i==left-1 && flag_l_is_1==0)
            {
                prev_of_l = tmp;
                l = tmp->next;
            }
            if(i==right)
            {
                r = tmp;
                next_of_r = tmp->next;
            }
            ++i;
            tmp = tmp->next;
        }

        //now reverse
        int flag_first_time=1;
        ListNode* curr = l;
        ListNode* prev;
        if(!flag_l_is_1)
            prev = prev_of_l;
        ListNode* nxt = curr->next;
        while(curr!=next_of_r)
        {
            if(flag_first_time)
            {
                if(flag_l_is_1)
                {
                    nxt = curr->next;
                    curr->next = next_of_r;
                    prev = curr;
                    curr = nxt;
                    head = r;
                }
                else
                {
                    nxt = curr->next;
                    curr->next = next_of_r;
                    prev = curr;
                    curr = nxt;
                    prev_of_l->next = r;
                }
                flag_first_time=0;
            }
            else
            {
                nxt = curr->next;
                curr->next=prev;
                prev = curr;
                curr = nxt;
            }
        }
        return head;
    }
};
// @lc code=end

