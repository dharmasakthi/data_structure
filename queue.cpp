#include <iostream>
#define SIZE 10
using namespace std;
class Queue
{
  int queue[SIZE];
  int head;
  int tail;
  public:
  Queue()
  {
    head = 0;
    tail = 0;
  }
  void enqueue(int x);
  void dequeue(); // make as int to return the dequeue
  void display();
};

void Queue :: enqueue(int x)
{
  if(tail == SIZE)
  {
    cout << "Queue is fully Loaded" << endl;
  }
  else
  {
    queue[tail++] = x;
    cout << "Inserted element in Queue : " << x << endl;
  }
}

void Queue :: dequeue()
{
  if(head < tail)
  {
    cout << "DEQUEUE : " << queue[head++] << endl;
  }
  else if(head == SIZE)
  {
    cout << "No More Enqueue" << endl;
  }
  else
  {
    cout << "Empty Queue" << endl;
  }
}

void Queue :: display()
{
  if(head < tail)
  {
    for(int i=head; i < tail; i++)
    {
      cout << queue[i] << " ";
    }
    cout << endl;
  }
  else 
  {
    cout << "NONE to display" << endl;
  }
}

int main() 
{
  Queue q ;
  q.dequeue();
  q.enqueue(1);
  q.display();
  q.enqueue(2);
  q.display();
  q.enqueue(3);
  q.display();
  q.enqueue(4);
  q.display();
  q.enqueue(5);
  q.display();
  q.dequeue();
  q.display();
  q.dequeue();
  q.display();
  q.dequeue();
  q.display();
  q.dequeue();
  q.display();
  q.dequeue();
  q.display();
  q.dequeue();
  q.display();
  q.enqueue(6);
  q.display();
  q.enqueue(7);
  q.display();
  q.enqueue(8);
  q.display();
  q.enqueue(9);
  q.display();
  q.enqueue(10);
  q.display();
  q.enqueue(11);
  q.display();
  q.enqueue(12);
  q.display();
  q.dequeue();
  q.display();
  q.dequeue();
  q.display();
  q.dequeue();
  q.display();
  q.dequeue();
  q.display();
  q.dequeue();
  q.display();
  q.dequeue();
  q.display();
  q.dequeue();
  q.display();
  q.dequeue();
  q.display();
  q.dequeue();
  q.display();
  q.dequeue();
  q.display();
  q.dequeue();
  q.display();
  return 0;
}

/*
Empty Queue
Inserted element in Queue : 1
1
Inserted element in Queue : 2
1 2
Inserted element in Queue : 3
1 2 3
Inserted element in Queue : 4
1 2 3 4
Inserted element in Queue : 5
1 2 3 4 5
DEQUEUE : 1
2 3 4 5
DEQUEUE : 2
3 4 5
DEQUEUE : 3
4 5
DEQUEUE : 4
5
DEQUEUE : 5
NONE to display
Empty Queue
NONE to display
Inserted element in Queue : 6
6
Inserted element in Queue : 7
6 7
Inserted element in Queue : 8
6 7 8
Inserted element in Queue : 9
6 7 8 9
Inserted element in Queue : 10
6 7 8 9 10
Queue is fully Loaded
6 7 8 9 10
Queue is fully Loaded
6 7 8 9 10
DEQUEUE : 6
7 8 9 10
DEQUEUE : 7
8 9 10
DEQUEUE : 8
9 10
DEQUEUE : 9
10
DEQUEUE : 10
NONE to display
No More Enqueue
NONE to display
No More Enqueue
NONE to display
No More Enqueue
NONE to display
No More Enqueue
NONE to display
No More Enqueue
NONE to display
No More Enqueue
NONE to display
*/