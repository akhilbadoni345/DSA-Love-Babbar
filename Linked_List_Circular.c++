Question - Check If Circular Linked List
/* Link list Node 
struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
    
}; 
*/

/* Should return true if linked list is circular, else false */
bool isCircular(Node *head)
{
   // Your code here
   Node* slow=head;
   Node* fast=head->next;
   
   while(fast!=NULL and fast!=slow){
       fast=fast->next;
       if(fast!=NULL) fast=fast->next;
       slow=slow->next;
   }
   return (fast==slow);
}

*****************************************************************************************************
Question - 
