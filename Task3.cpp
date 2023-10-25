// Achive Polymorphism With Function Overloading
// Achive at Compile-Time
#include <iostream>
using namespace std;

class Shape{
    public:
    void box(int a, int b){
        cout << "Size of Box: " << a*b << endl;
    }

    void box(int a, int b, int c){
        cout << "Box: " << a*b*c << endl;
    }
};

int main(){
    Shape s1;
    s1.box(10, 20, 30);
    return 0;
}