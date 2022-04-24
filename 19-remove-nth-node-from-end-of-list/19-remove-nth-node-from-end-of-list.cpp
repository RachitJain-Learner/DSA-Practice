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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int ct = 0;
        ListNode* temp = head ;
        
        while(temp != NULL){
        ct++;
        temp = temp -> next ;
        }   
        
        int x = ct - n -1 ; 
        temp = head;
        
        if(x == -1){
            head = temp->next  ;
            delete temp ;
        }
        else if(x == 0){
            ListNode* a = temp -> next;
            temp->next = temp->next->next ;
            delete a ;
        }
        else{
        while(x--){
            temp = temp -> next ;
            
        }
        ListNode* a = temp -> next;
        
        temp -> next = temp -> next -> next  ;
            delete (a) ;
        
        }
     return head ;   
    }
};