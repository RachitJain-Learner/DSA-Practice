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

// slow & fast pointer approach --> condition to check (fast != NULL && fast->next != NULL)

class Solution {                                                 //     NOTE -->
public:
    ListNode* middleNode(ListNode* head) {
        if(head == NULL || head->next == NULL)
            return head ;
        
        ListNode* slow = head ;                               
        ListNode* fast = head ;
        
        while(fast != NULL && fast->next != NULL){
                                         //<<---if(fast->next->next == NULL) return slow ;--
            slow = slow -> next ;        //for first middle node in even nodes at first or last
            fast = fast->next->next ;            //to compensate the cond we have used and                                                       operation in while loop   
        }                            
        return slow ;                
    }
};