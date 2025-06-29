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
    Node *head = new Node(10);
    Node *secondNode = new Node(20);
    Node *thirdNode = new Node(30);

    head->nextPointer = secondNode;
    secondNode->nextPointer = thirdNode;

    cout << head->integerValue << endl;
    cout << head->nextPointer->integerValue << endl;

    return 0;
}