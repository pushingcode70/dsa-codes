//stack using array
#include <iostream>
using namespace std;
class STACK{
  int *arr;
  int top;
  int capacity;
  public : 
  STACK (int size){
      arr= new int [size]; //assigning values
      capacity=size;
      top=-1;
  }
       ~STACK(){
           delete []arr;//syntax to delete array;
       }
  bool isfull(){
      return top==capacity-1;
  }
  bool isempty(){
      return top==-1;
  }
  void push(int x){
      if (isfull()){
          cout<<"stack overflow"<<endl;
      }
       arr[++top]=x;//increments the top and then  giving new value to arr[top].. top++ is not bcz it will give index -1
  }
 void pop(){
      if (isempty()){
          cout<<"stck underflow"<<endl;
          return ;
      }
     cout<<"the popped element is " <<arr[top--]<<endl;//returns the current top(which helps in finding popped element) then decrement the top..if we want the popped element then we cant do --top 
  }
  int peek(){
      if (isempty()){
          cout<<"stack is empty"<<endl;
      }
      return arr[top];
  }
  
};


int main()
{
   STACK s(5);//invoking constructor
   s.push(3543);
    s.push(3500);  
    s.push(355);
   s.push(3);
   s.push(40);
  s.push(467);
 
   
  
    return 0;
}
