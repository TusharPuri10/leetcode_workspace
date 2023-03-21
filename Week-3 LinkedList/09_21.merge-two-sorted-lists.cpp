/*
 * @lc app=leetcode id=21 lang=cpp
 *
 * [21] Merge Two Sorted Lists
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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        
        //recursive appraoch

        // if(l1==NULL)
        //     return l2;
        // if(l2==NULL)
        //     return l1;

        // if(l1->val<=l2->val)
        // {
        //     l1->next=mergeTwoLists(l1->next,l2);
        //     return l1;
        // }
        // else
        // {
        //     l2->next=mergeTwoLists(l1,l2->next);
        //     return l2;
        // }

        //iterative approach with dummy node
        ListNode* dummy = new ListNode(0);
        ListNode* current = dummy;

        while(l1 && l2)
        {
            if(l1->val <= l2->val)
            {
                current->next = l1;
                l1=l1->next;
            }
            else
            {
                current->next = l2;
                l2=l2->next;
            }
            current=current->next;
        }

        if(!l1)//means if l1 is NULL
            current->next=l2;
        else
            current->next=l1;
        
        return dummy->next;

    }
};
// @lc code=end

