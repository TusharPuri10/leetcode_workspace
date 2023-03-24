/*
 * @lc app=leetcode id=445 lang=cpp
 *
 * [445] Add Two Numbers II
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
    int carry(ListNode** l1, ListNode** l2, int diff)
    {
        if((*l2)==NULL || (*l1)==NULL)
            return 0;

        if(diff>0)
        {
            (*l1)->val = (*l1)->val + carry(&((*l1)->next),l2,diff-1);

            
            if((*l1)->val>9)
            {
                (*l1)->val = (*l1)->val % 10;      
                return 1;
            }
            else
                return 0;
        }
        else if(diff==0)
        {
            (*l1)->val = (*l1)->val + (*l2)->val + carry(&((*l1)->next),&((*l2)->next),0);
            if((*l1)->val>9)
            {
                (*l1)->val = (*l1)->val % 10; 
                (*l2)->val = (*l1)->val;     
                return 1;
            }
            else
            {
                (*l2)->val = (*l1)->val;
                return 0;
            }
        }
        else
        {
            (*l2)->val = (*l2)->val + carry(l1,&((*l2)->next),diff+1);
            if((*l2)->val>9)
            {
                (*l2)->val = (*l2)->val % 10;      
                return 1;
            }
            else
                return 0;
        }
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        //see if numbers are different in size


        int c1=0,c2=0;
        ListNode* temp = l1;
        while(temp)
        {
            temp=temp->next;
            ++c1;
        }
        temp = l2;
        while(temp)
        {
            temp=temp->next;
            ++c2;
        }
        int diff = c1-c2;

        if(c1>c2)
        {
            l1->val = l1->val + carry(&(l1->next),&(l2),diff-1);
            if(l1->val >9)
            {
                l1->val = l1->val % 10;
                ListNode* newnode = new ListNode(1,l1);
                return newnode;
            }
            else
                return l1;
        }
        else if(c1<c2)
        {
            l2->val = l2->val + carry(&(l1),&(l2->next),diff+1);
            if(l2->val >9)
            {
                l2->val = l2->val % 10;
                ListNode* newnode = new ListNode(1,l2);
                return newnode;
            }
            else
                return l2;
        }
        else
        {
            l1->val = l1->val + l2->val + carry(&(l1->next),&(l2->next),diff);
            if(l1->val >9)
            {
                l1->val = l1->val % 10;
                ListNode* newnode = new ListNode(1,l1);
                return newnode;
            }
            else
                return l1;
        }
    }
};
// @lc code=end

