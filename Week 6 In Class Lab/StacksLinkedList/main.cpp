#include <iostream>

#include <chrono>
using namespace std;
using namespace std::chrono;
#include<bits/stdc++.h>

struct Node {
   int data;
   struct Node *next;
};
struct Node* top = NULL;
void push(int newData) {
   struct Node* newnode = (struct Node*) malloc(sizeof(struct Node));
   newnode->data = newData;
   newnode->next = top;
   top = newnode;
}

void isEmpty(){
    if (top==NULL){
        cout<<"Yes, the stack is empty"<<endl;
    }
    else{
        cout<<"The stack is not empty"<<endl;
    }

}


void pop() {
   if(top==NULL)
   cout<<"Stack Underflow"<<endl;//  when no elements in the stack to pop
   else {
      //cout<<"The popped element is "<< top->data <<endl;
      top = top->next;
   }
}
void display() {
   struct Node* pointer;
   if(top==NULL)
   cout<<"stack is empty";
   else {
      pointer = top;
      cout<<"Stack elements are: ";
      while (pointer != NULL) {
         cout<< pointer->data <<" ";
         pointer = pointer->next;
      }
   }
   cout<<endl;
}
int main() {
    auto start = chrono::steady_clock::now();


push(5);
    push(8);
    push(10);
    push(5);
    push(10);




    pop();
    pop();

    display();


     auto end = chrono::steady_clock::now();
     cout<<"Time taken is ";
    cout<<chrono::duration_cast<chrono::microseconds>(end-start).count()<< " microseconds" << endl;


    auto duration = duration_cast<microseconds>(end - start);
   return 0;
}
