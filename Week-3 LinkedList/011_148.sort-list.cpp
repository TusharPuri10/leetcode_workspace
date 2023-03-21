/*
 * @lc app=leetcode id=148 lang=cpp
 *
 * [148] Sort List
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
    ListNode* mergelist(ListNode* l1, ListNode* l2)
    {
        ListNode* dummy = new ListNode();
        ListNode* curr=dummy;

        while(l1 && l2)
        {
            if(l1->val <= l2->val)
            {
                curr->next = l1;
                l1=l1->next;
            }
            else
            {
                curr->next = l2;
                l2=l2->next;
            }
            curr=curr->next;
        }
        if(!l1)//if l1 null then it will execute
            curr->next = l2;
        else
            curr->next = l1;
        
        return dummy->next;
    }
    ListNode* sortList(ListNode* head) {


    // NULL evaluates to false,
    // since C considers any non-zero value true and
    // any zero value false.
    // NULL is essentially the zero address and
    // is treated as such in comparisons,

        //return if null or single node
        if(head==NULL || head->next==NULL)
            return head;
        
        //now finding mid of linked list
        ListNode* temp = head;
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast && fast->next)
        {
            temp = slow;
            slow = slow->next;
            fast = fast->next->next;
        }

        //temp will be tail of first half of list
        temp->next=NULL;

        ListNode* l1 = sortList(head);
        ListNode* l2 = sortList(slow);

        return mergelist(l1,l2);
    }
};
// @lc code=end

