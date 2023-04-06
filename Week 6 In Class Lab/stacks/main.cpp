#include <iostream>
#include <chrono>
using namespace std;
using namespace std::chrono;
#include<bits/stdc++.h>

int newstack1[50];// we are going to use a stack of size 5
int n=50;
int top= -1; // in the beginning as there are no elements top=-1


void push(int val) {
   if(top>=n-1) //checks whether stack contains size-1 number of elements
   cout<<"Stack Overflow"<<endl;
   else {
      top++; //in crease the top and assign new element to the new top position
      newstack1[top]=val;
   }
}
void pop() {
   if(top<=-1)
   cout<<"Stack Underflow"<<endl;
   else {
      //ut<<"The popped element is "<< newstack1[top] <<endl;
      top--;
   }
}
void display() {
   if(top>=0) {
      cout<<"Stack elements are:";
      for(int i=0; i<=top; i++)
      cout<<newstack1[i]<<" ";
      cout<<endl;
   } else
   cout<<"Stack is empty";
}

void isEmpty(){
    if (top<0){
        cout<<"The stack is empty."<<endl;
    }
    else{
        cout<<"The stack is not empty"<<endl;
    }



}

void isFull(){
    if (top==4){
        cout<<"The stack is full"<<endl;

    }
    else{
        cout<<"The stack is not full"<<endl;
    }

}

void stackTop(){
    cout<<"The top element is ";
    cout<<newstack1[top]<<endl;


}




int main() {
    cout<<"Array Implementation"<<endl;

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
    cout<<chrono::duration_cast<chrono::microseconds>(end-start).count()<< " microseconds" << endl;


    auto duration = duration_cast<microseconds>(end - start);
   return 0;
}
