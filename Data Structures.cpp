#include <iostream>
#include "Stack.h"
#include "Queue.h"

int main()
{
    Queue s(10);

    s.Push(1);
    s.Push(2);

    auto t = s.Pop();
    auto t2 = s.Peek();
}