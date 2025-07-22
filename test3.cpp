#include<iostream>
#include<string>
using namespace std;
int main(){
    string str = "data structure";
    string str2 = "Algorithms";

    //length of the string
    int l = str.length();

    //char at a particular index
    cout<<"length: "<<l<<endl;
    char c = str.at(2);
    cout<<"char at index 4: "<<c<<endl;

    //concanating string
    string course_name = str + " and"+str2+ to_string(2);
    cout<<"course name : "<<course_name<<endl;

    if(str==str2){
        cout<<"same"<<endl;
    }
    else{
        cout<<"no"<<endl;
    }

    //convert a character to upper case
    str[3] = toupper(str[3]); // tolower same

    


}