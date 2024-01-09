// It is the process of hiding the unnecessary information from the user and showing only the relevant one.
// It is implemented using the abstract classes where we have the derived class to implement the abstract class.


// In order to create a abstract class in cpp, we need to have atleast one pure virtal function.
#include<bits/stdc++.h>
using namespace std;

class abstractClass{
    virtual void whoCalledme() = 0;
    virtual void sayHello() = 0;
};

class Derived : abstractClass{
    public:
    void whoCalledme(){
        cout<<"Me derived class called you!"<<endl;
    }
    void sayHello(){
        cout<<"Hello"<<endl;
    }
};

int main(){

    Derived d;
    d.sayHello();

    return 0;
}