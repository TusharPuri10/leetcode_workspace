/*
 * @lc app=leetcode id=234 lang=cpp
 *
 * [234] Palindrome Linked List
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
    ListNode* reverse(ListNode* head)
    {
        if(head==NULL || head->next==NULL)
            return head;
        
        ListNode* prev = NULL;
        ListNode* current = head;
        ListNode* next_node = head->next;
        while(next_node!=NULL)
        {
            current->next = prev;
            prev=current;
            current=next_node;
            next_node=next_node->next;
        }
        current->next = prev;
        return current;
    }
    bool isPalindrome(ListNode* head) {
        // ListNode* head2 = reverse(head);
        // ListNode* temp = head;
        // while(head && head2)
        // {
        //     cout<<head->val<<" "<<head2->val<<endl;
        //     if(head->val != head2->val)
        //         return false;
        //     head=head->next;
        //     head2=head2->next;
        // }
        // return true;

        // by reversing the whole list we 
        // are losing the original list
        //because list toh ek hi hai na
        

        if(head==NULL || head->next==NULL || (head->next->next==NULL && head->val==head->next->val))
            return true;
        int size=0;
        ListNode* temp = head;
        while(temp)
        {
            ++size;
            temp=temp->next;
        }
        // 1 2 2 1
        // 0 1 2 3

        // 1 2 3 2 1
        // 0 1 2 3 4
        temp = head;
        int i=0;
        while(i!=size/2)
        {
            temp=temp->next;
            ++i;
        }
        temp=reverse(temp);
        while(temp!=NULL)
        {
            cout<<head->val<<" "<<temp->val<<endl;
            if(head->val!=temp->val)
                return false;
            head=head->next;
            temp=temp->next;
        }
        return true;

    }
};
// @lc code=end

