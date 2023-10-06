//{ Driver Code Starts
#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;
/* A linked list node */


struct Node
{
    int data;
    struct Node *next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
    
};

struct Node *start = NULL;

/* Function to print nodes in a given linked list */
void printList(struct Node *node)
{
    while (node != NULL)
    {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("\n");
    
}

void insert()
{
    int n,value;
    cin>>n;
    struct Node *temp;
    for(int i=0;i<n;i++)
    {
        cin>>value;
        if(i==0)
        {
            start = new Node(value);
            temp = start;
            continue;
        }
        else
        {
            temp->next = new Node(value);
            temp = temp->next;
        }
    }
}


// } Driver Code Ends
/*
  reverse alternate nodes and append at the end
  The input list will have at least one element  
  Node is defined as 
  struct Node
  {
      int data;
      struct Node *next;
    
      Node(int x){
        data = x;
        next = NULL;
      }
    
   };

*/
class Solution
{   
    Node* reverseLL(Node *temp){
        Node *prev = NULL, *next ;
        Node *curr = temp ;
        while(curr){
            next = curr->next ;
            curr->next = prev ;
            prev = curr ;
            curr = next ;
        }
        return prev ;
    }
    public:
    void rearrange(struct Node *head)
    {   
        if(head->next == NULL){
            return ;
        }
        Node *prev = head ;
        Node *curr = head->next ;
        Node *dummy = head->next ;
        
        // 1. Making altenate connections
        while(prev->next && curr->next){
            prev->next = curr->next ;
            prev = prev->next ;
            if(prev)
                curr->next = prev->next ;
            if(curr->next)
                curr = curr->next ;
        }
        // 2. Reverse the LL
        Node *temp = reverseLL(dummy) ;
        
        // 3. Join reverse LL
        prev->next = temp ;
    }
};



//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while (t--) {
        insert();
        Solution ob;
        ob.rearrange(start);
        printList(start);
    }
    return 0;
}

// } Driver Code Ends