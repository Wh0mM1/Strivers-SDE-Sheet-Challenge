/*
Following is the class structure of the Node class:

class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        this->data = 0;
        next = NULL;
    }
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
    Node(int data, Node* next)
    {
        this->data = data;
        this->next = next;
    }
};
*/

Node *findMiddle(Node *head)
{
    if (head == NULL)
    {
        return head;
    }
    Node *temp = head;
    int count = 0;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    count = (count / 2);
    Node *temp1 = head;
    while (count--)
    {
        temp1 = temp1->next;
    }
    return temp1;
    // Write your code here
}
