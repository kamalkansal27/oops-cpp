// Encapusalation is defined as the process of binding the data members and member function
// of a class into a single unit. It leads to data hiding.

// For eg: getter and setter functions are used to achieve encapsulation.

#include<bits/stdc++.h>
using namespace std;

class Person{
    private:
    string name;
    int age;
    public:
    void setName(string data){
        this->name = data;
    }
    void setAge(int data){
        this->age = data;
    }
    void getName(){
        cout<<this->name<<endl;
    }
    void getAge(){
        cout<<this->age<<endl;
    }
};

int main(){

    Person ravi;
    ravi.setName("Ravi");
    ravi.setAge(20);
    ravi.getName();
    ravi.getAge();


    return 0;
}