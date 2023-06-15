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

Node *removeKthNode(Node *head, int K)
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
    if (count == K)
    {
        return head->next;
    }
    Node *temp2 = head;
    Node *temp3 = new Node();
    for (int i = 0; i < count - K; i++)
    {
        temp3 = temp2;
        temp2 = temp2->next;
    }
    temp3->next = temp2->next;
    return head;
    // Write your code here.
}
