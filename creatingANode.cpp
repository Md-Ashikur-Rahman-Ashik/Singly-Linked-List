#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int integerValue;
    Node *nextPointer;

    Node(int integerValue)
    {
        this->integerValue = integerValue;
        this->nextPointer = NULL;
    }
};

int main()
{
    Node firstNode(10), secondNode(20), thirdNode(30);

    firstNode.nextPointer = &secondNode;
    secondNode.nextPointer = &thirdNode;
    thirdNode.nextPointer = NULL;

    // cout << firstNode.integerValue << " " << secondNode.integerValue << " " << thirdNode.integerValue << endl;
    cout << firstNode.integerValue << endl;
    cout << firstNode.nextPointer->integerValue << endl;
    return 0;
}