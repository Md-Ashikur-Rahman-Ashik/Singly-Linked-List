#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int integerValue;
    Node *nextPointer;
};

int main()
{
    Node firstNode, secondNode, thirdNode;
    firstNode.integerValue = 10;
    secondNode.integerValue = 20;
    thirdNode.integerValue = 30;

    firstNode.nextPointer = &secondNode;
    secondNode.nextPointer = &thirdNode;
    thirdNode.nextPointer = NULL;

    // cout << firstNode.integerValue << " " << secondNode.integerValue << " " << thirdNode.integerValue << endl;
    cout << firstNode.integerValue << endl;
    cout << firstNode.nextPointer->integerValue << endl;
    return 0;
}