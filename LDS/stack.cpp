#include <iostream>
using namespace std;

#define MAX 5


class stack{

    int items[MAX];
    int top = -1;


    public:

    int isEmpty(){
        if(top == -1){
            return 1;
        }else{
            return 0;
        }
    }

    int isFull(){
        if(top == MAX - 1){
            return 1;
        }else{
            return 0;
        }
    }

    void push(int newItem){
        if(isFull()){
            cout << "Stack is Full" << endl;
        }else{
            cout << "Before Push Element in Stack The Value of Top is " << top << endl << endl;
            top++;
            items[top] = newItem;
            cout << "After Push Element in Stack The Value of Top is " << top << endl << endl;
        }
    }

    void pop(){
        if(isEmpty()){
            cout << "Stack is Empty" << endl << endl;
        }else{
            top--;
            items[top];
            cout << "Pop Element from Stack" << endl << endl;
        }
    }

    void display(){
        for(int i = 0; i <= top; i++){
            cout << items[i] << " ";
        }
        cout << endl;
    }
};

int main(){

    stack s;

    cout << "Before Push" << endl << endl;
    s.display();

    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60);

    cout << "After Push" << endl << endl;

    s.display();

    cout << endl;

    cout << "Pop Element from Stack with LIFO Principal" << endl << endl;
    s.pop();
    s.pop();
    s.pop();
    s.pop();
    s.pop();
    s.pop();


    cout << "After Pop" << endl;
    s.display();

    return 0;
}