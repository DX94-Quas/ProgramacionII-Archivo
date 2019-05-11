#include <iostream>
#include "console.h"
#include "vector.h"
#include "queue.h"
#include "stack.h"

using namespace std;

void mirror(Queue<string>& q)
{
    Stack<string> s1;
    for(int i =0; i < q.size(); i++)
    {
        string temporal = q.dequeue();
        s1.push(temporal);
        q.enqueue(temporal);
    }
    while (!s1.isEmpty())
    {
        q.enqueue(s1.pop());
    }
}

int main()
{
    Queue<string> k {"a","b","c"};
    mirror(k);
    cout << k.toString() << endl;
    return 0;
}
