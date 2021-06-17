#include <iostream>
#include <list>
#include "priority-queue.h"
using namespace std;

int main()
{

    PriorityQueue<int> queue;
    //TODO:for jalal refer from page 328

    queue.insert(5);
    queue.insert(9);
    queue.insert(2);
    queue.insert(7);
    queue.min();
    queue.removeMin();
    queue.size();
    queue.min();
    queue.removeMin();
    queue.removeMin();
    queue.removeMin();
    queue.empty();
    queue.removeMin();

    //empty
    return 0;
}