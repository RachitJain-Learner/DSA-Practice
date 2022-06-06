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
        
        ListNode *tmp1 = headA;
        ListNode *tmp2 = headB;
        
        //add both linked list (See side notes)
        
        while(tmp1 != tmp2){     // we have to reach same address not same value
            
            tmp1 = tmp1 == NULL ? headB : tmp1->next;     //either incrementing in same LL or moving to next LL
            tmp2 = tmp2 == NULL ? headA : tmp2->next;
        }
        return tmp1;
    }
};