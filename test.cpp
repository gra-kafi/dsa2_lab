#include<iostream>
#include<string>
using namespace std;

struct Person{
    string name;
    int day;
    int month;
    int year
    void setName(string _name){
        name = _name;
    }
    void setDob(int _day,int _month, int _year){
    day = _day;
    month = _month;
    year = _year;
    }
    void printName(){
    cout<<name<<endl;
    }
    string printDOB(){
        cout<<"My DOB is " <<day<<"/"<<year<<endl;
    }

};

int main(){
    Person person1;
    person1.setName("Wally west");
    person1.setDob(1,2,2000);
    person1.printName();
    person1.printDOB();
    return 0;
}
