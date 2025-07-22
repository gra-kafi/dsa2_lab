#include<iostream>
#include<string>
using namespace std;
int main(){
    string str = "hello!!!";
    //insert a string in an index
    str.insert(5," world");//hello world!!!
    cout<<str<<endl;
    //replace world with mina
    //6-> starting index 5-> start index of mina
    str.replace(6,5,"Mina");
    cout<<str<<endl;//hello Mina!!!
    //erase mina 6->start index of Mina
    //4->size of mina
    str.erase(6,4);
    cout<<str<<endl;
}