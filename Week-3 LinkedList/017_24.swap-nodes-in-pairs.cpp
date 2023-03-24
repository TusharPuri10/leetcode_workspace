/*
 * @lc app=leetcode id=24 lang=cpp
 *
 * [24] Swap Nodes in Pairs
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
    ListNode* swapPairs(ListNode* head) {
                if(head==NULL || head->next==NULL)
            return head;
        
        ListNode* prev = head;
        ListNode* nxt = head->next;
        head = nxt;
        prev->next = nxt->next;
        nxt->next = prev;
        if(prev->next == NULL || prev->next->next == NULL)
                return head;
            
        ListNode* tmp = prev;
        prev=prev->next;
        nxt=prev->next;
        
        while(1)
        {
            prev->next = nxt->next;
            nxt->next = prev;
            tmp->next = nxt;
            if(prev->next == NULL || prev->next->next == NULL)
                break;

            tmp = prev;
            prev=prev->next;
            nxt=prev->next;
        }
        return head;
    }
};
// @lc code=end

