// The user defined LL should have insert (head,tail,idx) , delete(head,tail,idx) , get(idx) and display
// functions.
#include <iostream>
using namespace std;
class Node
{
public:
    int value;
    Node *next;
    Node(int value)
    {
        this->value = value;
        next = NULL;
    }
};
class Linkedlist
{
public:
    Node *head, *tail;
    Linkedlist()
    {
        head = tail = NULL;
    }
    void display()
    {
        Node *temp = head;
        cout << "Linked list nodes are : \n";
        while (temp != NULL)
        {
            cout << temp->value << " ";
            temp = temp->next;
        }
        cout << endl;
    }
    void addFirst(int val)
    {
        Node *temp = new Node(val);
        if (head == NULL)
        {
            head = temp;
        }
        else
        {
            temp->next = head;
            head = temp;
        }
        if (tail == NULL)
            tail = head;
    }
    void addatIndex(int idx, int val)
    {
        if (idx == 0)
            addFirst(val);
        else
        {
            idx--;
            Node *temp = head;
            while (idx-- && temp != NULL)
            {
                temp = temp->next;
            }
            if (temp == NULL)
            {
                cout << "Invalid Index \n";
                return;
            }
            else
            {
                Node *newnode = new Node(val);
                newnode->next = temp->next;
                temp->next = newnode;
            }
        }
    }
    void addatEnd(int val)
    {
        Node *newnode = new Node(val);
        if (tail == NULL)
        {
            head = tail = newnode;
        }
        else
        {
            tail->next = newnode; // Link the current tail to the new node
            tail = newnode;       // Update tail to the new node
        }
    }

    void getatIndex(int idx)
    {
        if (idx == 0)
            cout << head->value << " \n";
        else
        {
            Node *temp = head;
            idx--;
            while (idx--)
            {
                temp = temp->next;
            }
            cout << temp->value << " \n";
        }
    }
    void deletehead()
    {
        if (head == NULL)
            cout << "Linked list is empty \n";
        else

            head = head->next;
    }
    void deleteend()
    {
        if (tail == NULL)
            cout << "Linked List is empty \n";
        else
        {
            Node *temp = head;
            while (temp->next != tail)
            {
                temp = temp->next;
            }

            tail = temp;
            tail->next = NULL;
        }
    }
    void deleteAtIndex(int idx)
    {
        if (idx == 0)
            head = head->next;
        else
        {
            Node *prev = NULL, *curr = head;
            while (idx--)
            {
                prev = curr;
                curr = curr->next;
            }
            prev->next = curr->next;
            curr->next = NULL;
        }
    }
};

int main()
{
    Linkedlist ll;
    ll.addFirst(10);
    ll.addFirst(20);
    ll.addFirst(30);
    ll.display();
    ll.addatEnd(120);
    ll.display();
    ll.addatEnd(50);
    ll.display();
    ll.addatEnd(100);
    ll.display();

    // ll.getatIndex(3);

    ll.deleteend();
    cout << "Linked list after deletion at the end \n";
    ll.display();
    ll.deletehead();
    ll.display();
    ll.addatEnd(78);
    ll.deleteAtIndex(2);
    ll.display();
}
