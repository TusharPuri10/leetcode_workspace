/*
 * @lc app=leetcode id=23 lang=cpp
 *
 * [23] Merge k Sorted Lists
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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        int size = lists.size();
        if(size==0)
            return NULL;
        
        vector<ListNode*> counter(size);
        for(int i=0;i<size;i++)
        {
            counter[i] = lists[i];
        }

        int first_flag=1;
        int min=-1;
        for(int i=0;i<size;i++)
        {
            if(counter[i]==NULL)
                continue;
            if(first_flag)
            {
                min=i;
                first_flag=0;
            }
            else if(counter[i]->val < counter[min]->val)
            {
                min = i;
            }
        }
        if(min==-1)
            return NULL;

        ListNode* curr_min = counter[min];
        counter[min]=counter[min]->next;
        ListNode* head =  curr_min;

        int flag=size;
        while(flag)
        {
            flag=size;
            first_flag=1;
            for(int i=0;i<size;i++)
            {
                if(counter[i]==NULL)
                {
                    --flag;
                    continue;
                }
                if(first_flag)
                {
                    min=i;
                    first_flag=0;
                }
                else if(counter[i]->val <= counter[min]->val)
                {
                    min=i;
                }
            }
            if(counter[min]!=NULL)
            {
                curr_min->next = counter[min];
                counter[min]=counter[min]->next;
                curr_min=curr_min->next;
            }
        }
        return head;
    }
};
// @lc code=end

