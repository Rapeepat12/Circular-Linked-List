// self-referential structure
#include <iostream>
using namespace std;

#include "ll.h"

int main()
{
    CircularLL ll;

    ll.insert(4);
    ll.insert(1);
    ll.insert(3);
    ll.insert(7);
    ll.print();
    ll.remove(7);
    ll.print();
}