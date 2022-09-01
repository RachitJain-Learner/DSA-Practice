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
    ListNode* middle(ListNode* head){
        ListNode* slow = head ;
        ListNode* fast = head->next;    //for 1st middle node in even nodes
        
        while(fast && fast->next ){
            slow = slow->next ;
            fast = fast->next->next ;
        }
        return slow ;
    }
    
    ListNode* reverseLL(ListNode* head){
        ListNode* cur = head ;
        ListNode* nxt = NULL ;
        ListNode* prv = NULL ;
        
        while(cur != NULL){
            nxt = cur->next ;
            cur -> next = prv ;
            prv = cur ;
            cur = nxt ;
        }
        return prv ;
    }
    
    bool compare(ListNode* head, ListNode* temp){
        while(temp){
            if(head->val != temp->val){
                return false ;
            }
            head = head->next ;
            temp = temp->next ;
        }
        return true ;
    }
public:
    bool isPalindrome(ListNode* head) { 
        
        if(head == NULL || head->next == NULL )
            return true ;
        
        ListNode* mid = middle(head) ;
        mid->next = reverseLL(mid->next) ;
        
        ListNode* temp = mid->next ;
        bool ans = compare(head, temp) ;
        
        mid->next = reverseLL(mid->next) ;
        
        return ans ;
    }
};