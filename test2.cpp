#include<iostream>
#include<string>
using namespace std;
int main(){

    //For find string position
    string string1("Hello World");
    string string2("Hola World");

    int position = string1.find("World");
    cout<<"The world World starts at position: "<<position<<endl;

    //For find sub string

    string subString = string1.substr(0,5); //0->start index 0 to 5->end index
    cout<<"Sub string "<<subString<<endl;

    return 0;
}