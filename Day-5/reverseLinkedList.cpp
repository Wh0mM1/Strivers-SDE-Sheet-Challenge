#include <bits/stdc++.h>

/****************************************************************

    Following is the class structure of the LinkedListNode class:

    template <typename T>
    class LinkedListNode
    {
    public:
        T data;
        LinkedListNode<T> *next;
        LinkedListNode(T data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

*****************************************************************/

LinkedListNode<int> *reverseLinkedList(LinkedListNode<int> *head)
{
    if (head == NULL)
    {
        return head;
    }

    LinkedListNode<int> *temp1 = head;
    LinkedListNode<int> *head1 = NULL;
    while (temp1 != NULL)
    {
        LinkedListNode<int> *temp = new LinkedListNode<int>(temp1->data);
        temp->next = head1;
        head1 = temp;
        temp1 = temp1->next;
    }
    return head1;
    // Write your code here
}