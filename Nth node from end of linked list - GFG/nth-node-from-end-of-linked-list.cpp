//{ Driver Code Starts
// C program to find n'th Node in linked list
#include <stdio.h>
#include <stdlib.h>
#include<iostream>
using namespace std;

/* Link list Node */
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};


/* Function to get the nth node from the last of a linked list*/
int getNthFromLast(struct Node* head, int n);



/* Driver program to test above function*/
int main()
{
  int T,i,n,l,k;

    cin>>T;

    while(T--){
    struct Node *head = NULL,  *tail = NULL;

        cin>>n>>k;
        int firstdata;
        cin>>firstdata;
        head = new Node(firstdata);
        tail = head;
        for(i=1;i<n;i++)
        {
            cin>>l;
            tail->next = new Node(l);
            tail = tail->next;
        }

    cout<<getNthFromLast(head, k)<<endl;
    }
    return 0;
}
// } Driver Code Ends


/* struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/

// void helper(Node *head, int &k, int &ans)
// {   
//     if(head == NULL)
//         return ;
    
//     helper(head->next, k, ans) ;

//     k-- ;
//     if(k == 0){
//         ans = head->data ;
//     }
// }


void helper(Node *head, int &n, int &ans)
{   
    if(head == NULL)
        return ;
    
    helper(head->next, n, ans) ;
    
    n-- ;
    if(n == 0){
        ans = head->data ;
    }
}

//Function to find the data of nth node from the end of a linked list.
int getNthFromLast(Node *head, int n)
{   
    Node *slow = head , *fast = head ;
    
    while(n--){
        if(fast == NULL)
            return -1 ;
        
        fast = fast->next ;
    }
    while(fast){
        slow = slow->next ;
        fast = fast->next ;
    }
    return slow->data ;
}

