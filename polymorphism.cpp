// It is property in which same code behave differently in the different context.

// Runtime - In this, we find at runtime which code/method will get executed, it is comparatively slower.
// 1. Function Overloading. 

// #include<bits/stdc++.h>
// using namespace std;

// class Person{
//     public:
//     void speak(){
//         cout<<"Hello"<<endl;
//     }
//     void speak(string name){
//         cout<<"Hello, My name is "<<name<<endl;
//     }
//     void speak(string fname, string lname){
//         cout<<"My first name is "<<fname<<" and my last name is "<<lname<<endl;
//     }
// };

// int main(){

//     Person p;
//     p.speak();
//     p.speak("Kamal");
//     p.speak("Kamal", "Kansal");

//     return 0;
// }

// 2. Operator Overloading.

// #include<bits/stdc++.h>
// using namespace std;

// class ComplexNum{
//     int real, imag;
//     public:
//     ComplexNum(int a, int b){
//         this->real = a;
//         this->imag = b;
//     }
//     void print(){
//         cout<<this->real<<" + i"<<this->imag<<endl;
//     }
//     // Binary operator overloading.
//     ComplexNum operator + (ComplexNum& c2){
//         return ComplexNum(this->real + c2.real, this->imag + c2.imag);
//     }
//     // Unary operator overloading.
//     // Overload ++ when used as prefix
//     void operator ++ (){
//         cout<<"My name is kamal and i am called by object having real part - "<<this->real<<endl;
//     }
//     // The above example works only when ++ is used as a prefix. To make ++ work as a postfix we use this syntax.
//     // void operator ++ (int) {
//          // code
//     // }
//     // Notice the int inside the parentheses. It's the syntax used for using unary operators as postfix; it's not a function parameter.

//     void operator ++ (int){
//         cout<<"I am postfix Operator and I am called by object having real part - "<<this->real<<endl;
//     }
// };

// int main(){

//     ComplexNum c1(1, 2);
//     ComplexNum c2(3, 4);
//     ComplexNum c3 = c1 + c2;
//     c1.print();
//     c2.print();
//     c3.print();

//     ++c1;
//     c2++;

//     return 0;
// }

// Compile time - In this we find at compile time which function is going to run.
// 1. Function Overriding.

#include<bits/stdc++.h>
using namespace std;

class Car{
    public:
    virtual void speak(){
        cout<<"I am general car"<<endl;
    }
};

class Etois: public Car{
    public:
    void speak(){
        cout<<"I am Etois liva"<<endl;
    }
};
class Mercedes: public Car{
    public:
    void speak(){
        cout<<"I am Mercedes"<<endl;
    }
};

int main(){

    Mercedes m;
    Car c;
    Etois e;
    e.speak();
    c.speak();
    m.speak();

    Car* c1;
    // We equate the car object point to address of mercedes class.
    c1 = &m;
    // By default, it will not behave as the object of mercedes class. we need to use virtual functions here.
    c1->speak();

    return 0;
}

// 2. Virtual functions.

