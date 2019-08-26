#include <iostream>
using namespace std;
class Stack
{
  int top;
  public:
  int stack[10];
  Stack()
  {
    top = -1;
  }
  void push(int x);
  int pop();
  void isEmpty();
};
void Stack :: push(int x)
{
  if(top >= 9)
  {
    cout << "Stack Overflow" << endl;
  }
  else
  {
    stack[++top] = x;
    cout << "Element Inserted " << x << endl;
  }
}
int Stack :: pop()
{
  if(top < 0 )
  {
    cout << "Stack UnderFlow ";
    return 0;
  }
  else
  {
    int pop = stack[top--];
    return pop;
  }
}
void Stack :: isEmpty()
{
  if(top < 0)
    cout << "Stack Empty" << endl;
  else
    cout << "Stack is Loaded" << endl;
}
int main() 
{
  Stack s1;
  s1.push(0);
  s1.push(2);
  s1.push(3);
  s1.push(4);
  s1.push(5);
  s1.push(6);
  s1.push(7);
  s1.push(8);
  s1.push(9);
  s1.push(10);
  s1.push(11);
  s1.push(12);
  s1.isEmpty();
  cout << s1.pop() << endl;
  cout << s1.pop() << endl;
  cout << s1.pop() << endl;
  cout << s1.pop() << endl;
  cout << s1.pop() << endl;
  cout << s1.pop() << endl;
  cout << s1.pop() << endl;
  cout << s1.pop() << endl;
  cout << s1.pop() << endl;
  cout << s1.pop() << endl;
  cout << s1.pop() << endl;
  s1.isEmpty();
  return 0;  
}
/*
OUTPUT:

Element Inserted 0
Element Inserted 2
Element Inserted 3
Element Inserted 4
Element Inserted 5
Element Inserted 6
Element Inserted 7
Element Inserted 8
Element Inserted 9
Element Inserted 10
Stack Overflow
Stack Overflow
Stack is Loaded
10
9
8
7
6
5
4
3
2
0
Stack UnderFlow 0
Stack Empty
*/