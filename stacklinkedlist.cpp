#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node()
    {
        next = NULL;
    }
};

class stack
{
private:
    Node *top;

public:
    stack()
    {
        top = NULL;
    }

    int push(int value)
    {
        Node *newNode = new Node();
        newNode->data = value;
        newNode->next = top;
        top = newNode;
        cout << "Push value: " << value << endl;
        return value;
    }

    void pop()
    {
        Node *temp = top;
        if (isEmpty())
        {
            cout << "Stack is Empty." << endl;
            return
        }

        cout << "Popped value: " << temp->data << endl;
        top = temp->next;
        delete temp;
    }

    void peek()
    {
        if (isEmpty())
        {
            cout << "List is Empty." << endl;
        }
        else
        {
            Node *current = top;
            while (current != NULL)
            {
                cout << current->data << " " << endl;
                current = current->next;
                cout << endl;
            }
        }
    }

    bool isEmpty()
    {
        return top == NULL;
    }
};

int main()
{
    stack stack;

    int choice = 0;
    int value;

    while (choice != 5)
    {
        cout << "1. Push\n";
        cout << "2. Pop\n";
        cout << "1. Peek\n";
        cout << "1. Exit\n";
        cout << "Enter Your Choise: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter the value to push: ";
            cin >> value;
            stack.push(value);
            break;
        case 2:
            stack.pop();
            break;
        case 3:
            stack.peek();
            break;
        case 4:
            cout << "Exiting program." << endl;
            break;
        default:
            cout << "Invalid choice. Try again." << endl;
            break
        }
        cout << endl;
    }
    return 0
}