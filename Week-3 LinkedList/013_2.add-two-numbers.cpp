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

        ListNode* head=l1;
        ListNode* tail=l1;
        int carry=0;
        while(l1 && l2)
        {
            l1->val=l1->val+l2->val+carry;
            if(l1->val>9){
                carry=1;
                l1->val=l1->val%10;
            }
            else
                carry=0;
            tail=l1;
            l1=l1->next;
            l2=l2->next;
        }
        if(l1==NULL && l2==NULL && carry==0)
            return head;
        else if(l1==NULL && l2==NULL && carry==1)
        {
            ListNode* newnode = new ListNode(1);
            tail->next = newnode;
        }
        else if(l1==NULL)
        {
            tail->next=l2;
            while(carry && l2)
            {
                l2->val=l2->val+carry;
                if(l2->val>9){
                    carry=1;
                    l2->val=l2->val%10;
                }
                else
                    carry=0;
                tail=l2;
                l2=l2->next;
            }
            if(carry==1)
            {
                ListNode* newnode = new ListNode(1);
                tail->next = newnode;
            }
        }
        else
        {
            while(carry && l1)
            {
                l1->val=l1->val+carry;
                if(l1->val>9){
                    carry=1;
                    l1->val=l1->val%10;
                }
                else
                    carry=0;
                tail=l1;
                l1=l1->next;
            }
            if(carry==1)
            {
                ListNode* newnode = new ListNode(1);
                tail->next = newnode;
            }
        }
        return head;

    }
};
// @lc code=end

