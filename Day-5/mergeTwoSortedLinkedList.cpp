#include <bits/stdc++.h>

/************************************************************

    Following is the linked list node structure.

    template <typename T>
    class Node {
        public:
        T data;
        Node* next;

        Node(T data) {
            next = NULL;
            this->data = data;
        }

        ~Node() {
            if (next != NULL) {
                delete next;
            }
        }
    };

************************************************************/

Node<int> *sortTwoLists(Node<int> *first, Node<int> *second)
{
    if (first == NULL && second == NULL)
    {
        return first;
    }
    if (first == NULL)
    {
        return second;
    }
    if (second == NULL)
    {
        return first;
    }
    Node<int> *temp1 = first;
    Node<int> *temp2 = second;
    vector<int> ele;
    while (temp1 != NULL)
    {
        ele.push_back(temp1->data);
        temp1 = temp1->next;
    }
    while (temp2 != NULL)
    {
        ele.push_back(temp2->data);
        temp2 = temp2->next;
    }
    sort(ele.begin(), ele.end());
    reverse(ele.begin(), ele.end());
    Node<int> *head1 = NULL;
    for (int i = 0; i < ele.size(); i++)
    {
        Node<int> *temp3 = new Node<int>(ele[i]);
        temp3->next = head1;
        head1 = temp3;
    }
    return head1;
    // Write your code here.
}
