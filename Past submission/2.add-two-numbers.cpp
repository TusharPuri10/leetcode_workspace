/*
 * @lc app=leetcode id=2 lang=cpp
 *
 * [2] Add Two Numbers
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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry=0,flag=0,k;
        ListNode* head = new ListNode();
        ListNode* ptr = new ListNode();
        while(l1!=NULL || l2!=NULL) 
        {
            if(l1==NULL && l2!=NULL)
                k = l2->val + carry;
            else if(l2==NULL && l1!=NULL)
                k = l1->val + carry;
            else
                k = l1->val + l2->val + carry;
            carry = k/10;
            k = k%10;
            ListNode* p1 = new ListNode(k);
            if(flag==0)
            {
                head = p1;
                ptr = head;
                ptr->next = NULL;
                ++flag;
            }
            else{
                ptr->next = p1;
                ptr = ptr->next;
            }
            if(l1!=NULL)
                l1 = l1->next;
            if(l2!=NULL)
                l2 = l2->next;
        }
        if(l1==NULL && l2==NULL && carry!=0)
        {
            ListNode* p1 = new ListNode(carry);
            ptr->next = p1;
        }
        return head;
    }
};
// @lc code=end

