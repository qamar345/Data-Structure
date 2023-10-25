#include <iostream>
using namespace std;

#define MAX 5
// int size = 0;

class stack
{
    int items[MAX];
    int top = -1;
    // int size;

public:
    // stack()
    // {
    //     int top = -1;
    // }

    int isFull()
    {
        if (top == MAX - 1)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }

    int isEmpty()
    {
        if (top == -1)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }

    void push(int newItem)
    {
        if (isFull())
        {
            cout << "Stack is Full" << endl;
        }
        else
        {
            cout <<"Bfore: " << top << endl;
            top++;
            items[top] = newItem;
            cout <<"After: " << top << endl;
        }
        // size++;
    }

    void pop()
    {
        if (isEmpty())
        {
            cout << "Stack is Empty" << endl;
        }
        else
        {
            top--;
            cout << "Element Popped from Stack" << endl;
        }
        // size--;
    }

    void display()
    {

        for (int i = 0; i <= top; i++)
        {
            cout << items[i] << " ";
        }
        cout << endl;
    }
};

int main()
{
    stack s;

    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    // s.push(50);

    s.display();


    s.pop();
    s.pop();
    s.pop();
    s.pop();
    // s.pop();
    // s.pop();



    s.display();
    return 0;
}