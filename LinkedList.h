#include <iostream>
#ifndef LinkedList_h
#define LinkedList_h

using namespace std;

struct Node {
    int data;
    Node* next;
};

class LinkedList
{    
public:
    
    bool isEmpty(Node* head)
    {
        if (head == NULL)
            return false;
        else
            return true;
    }
    
    void insertFirst(struct Node * head, struct Node * last, int number)
    {
        Node * temp = new Node;
        temp -> data = number;
        temp -> next = NULL;
        head = temp;
        last = temp;
    }
    
    void add_node(struct Node* head, struct Node * last, int n)
    {
        if(isEmpty(head))
            insertFirst(head, last, n);
        else
        {
            Node * temp = new Node;
            temp -> data = n;
            temp -> next = NULL;
//            last -> next = temp;
            last = temp;
        }

    }
    
    void delete_node(struct Node* head, struct Node* last)
    {
        if(isEmpty(head))
            cout << "The list is already empty, you cannot remove any node." << endl;
        else if (head == last)
        {
            delete head;
            head = NULL;
            last = NULL;
        }
        else
        {
            Node * temp = head;
            head = head -> next;
            delete temp;
        }
    }
    
    void show_list(struct Node * current)
    {
        if (isEmpty(current))
        {
            cout << "The list is empty." << endl;
        }
        else
        {
            while(current != NULL)
            {
                cout << current -> data << endl;
                current = current -> next;
            }
        }
    }
    
    void sum(struct Node * head)
    {
        Node * temp = head;
        int sum = 0;
        
        while(temp != NULL)
        {
            sum += temp -> data;
            temp = temp -> next;
        }
        cout << "The sum is: " << sum << endl;
    }
    
};

#endif /* LinkedList_h */
