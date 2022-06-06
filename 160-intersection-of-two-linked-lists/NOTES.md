![](https://assets.leetcode.com/users/images/3fc569bd-b03d-4598-a8a9-040d50a18d0a_1654476966.8546433.jpeg)
​
while(ptr1 != ptr2){
ptr1 = ptr1->next;
ptr2 = ptr2->next;
// break the loop if they reach the end together or collide
// if(ptr1 == ptr2) break;
// if the pointer reaches the end of A, go to B and vice versa for ptr2
if(ptr1 == NULL) ptr1 = headB;
if(ptr2 == NULL) ptr2 = headA;
}
// return the collided pointer
return ptr1;