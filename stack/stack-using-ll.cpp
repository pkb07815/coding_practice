// C++ program for linked list implementation of stack 
#include <iostream> 
using namespace std; 
  
// A structure to represent a stack 
class StackNode { 
public: 
    int data; 
    StackNode* next; 
}; 
  
StackNode* newNode(int data) 
{ 
    StackNode* stackNode = new StackNode(); 
    stackNode->data = data; 
    stackNode->next = NULL; 
    return stackNode; 
} 
  
int isEmpty(StackNode* root) 
{ 
    return !root; 
} 
  
void push(StackNode** root, int data) 
{ 
    StackNode* tmp=NULL;

    tmp= newNode(data);
     
     tmp->next=*root;

     *root = tmp;

     cout << data << " pushed to stack\n"; 
    
} 
  
int pop(StackNode** root) 
{ 

    if (isEmpty(*root)) 
        return INT_MIN; 

 StackNode* tmp=NULL;

  tmp=*root;

  *root=(*root)->next; 

  int popped=tmp->data;

  free(tmp);
  return popped;

   
} 
  
int peek(StackNode* root) 
{ 

    if (isEmpty(root)) 
        return INT_MIN; 
    return root->data; 
   
} 
  
int main() 
{ 
    StackNode* root = NULL; 
  
    push(&root, 10); 
    push(&root, 20); 
    push(&root, 30); 
  
    cout << pop(&root) << " popped from stack\n"; 
  
    cout << "Top element is " << peek(root) << endl; 
  
    return 0; 
} 
  