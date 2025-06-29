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
    Node *fourthNode = new Node(40);

    head->nextPointer = secondNode;
    secondNode->nextPointer = thirdNode;
    thirdNode->nextPointer = fourthNode;

    Node *newPointer = head;

    while (newPointer != NULL)
    {
        cout << newPointer->integerValue << endl;
        newPointer = newPointer->nextPointer;
    }

    return 0;
}