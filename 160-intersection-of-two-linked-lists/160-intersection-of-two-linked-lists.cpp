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
        if(headA == NULL || headB == NULL)
            return NULL ;
        
        ListNode *l1 = headA ;
        ListNode *l2 = headB ;
        int c1 = 0 , c2 = 0 ;
        bool a = false ;
        
        while(l1 != NULL){
            l2 = headB ;
            while(l2 != NULL){
                if(l1 == l2)
                    return l1 ;
                l2 = l2->next ;
            }
            l1 = l1->next ;
        }
        return NULL ;
    }
};