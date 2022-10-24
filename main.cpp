#include <iostream>
#include <vector>
#include "LinkedList.h"

using namespace std;

void insertAfter(vector<int> & numb, int firstValue, int secondValue)
{
    for (int i = 0; i < numb.size(); i++)
    {
        if (numb.at(i) == firstValue)
            numb.insert(numb.begin() + i+1, secondValue);
    }
    
}

int main()
{
    vector<int> v;
    int n, v1, v2;

        cout << "Enter elements in vector" << endl;
        
        for (int i = 0; i < 5; i++)
        {
            cin >> n;
            v.push_back(n);
        }
        
        cout << "Elements in vector" << endl;
        
        for (int i = 0; i < 5; i++)
        {
            cout << v[i] << " ";
        }
        cout << endl;
    
    cout << "Enter first value: ";
    cin >> v1;
    cout << "Enter second value: ";
    cin >> v2;
        
    insertAfter(v, v1, v2);
    
    Node * head = NULL;
    Node * last = NULL;
    Node * current = NULL;
    
    LinkedList x;
        
    x.insertFirst(5);
    
    x.add_node(head, last, 30);
    x.add_node(head, last, 40);
    x.add_node(head, last, 50);
    x.add_node(head, last, 40);
    
    x.delete_node(head, last);
    
    x.show_list(current);
    
    cout << endl;
    
    x.sum(head);
    
    return 0;
}
