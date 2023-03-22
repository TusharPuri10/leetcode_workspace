/*
 * @lc app=leetcode id=160 lang=cpp
 *
 * [160] Intersection of Two Linked Lists
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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int c1=0;
        int c2=0;

        //getting number of nodes in headA;
        ListNode* temp = headA;
        while(temp)
        {
            ++c1;
            temp=temp->next;
        }
        
        //getting number of nodes in headB;
        temp = headB;
        while(temp)
        {
            ++c2;
            temp=temp->next;
        }
        if(c1==0 || c2==0)
            return NULL;
        
        int diff = abs(c1-c2);
        if(diff==0)
            goto equalnow;


        if(c1>c2)
        {
            while(diff)
            {
                --diff;
                headA=headA->next;
            }
        }
        else
        {
            while(diff)
            {
                --diff;
                headB=headB->next;
            }

        }
        equalnow:

        while(headA)
        {
            if(headA==headB)
                return headA;
            headA=headA->next;
            headB=headB->next;
        }
        return NULL;
    }
};
// @lc code=end

