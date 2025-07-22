//vector size fixed na,,,, array er size fixed
#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v;
    //inserting some element
    for(int i = 34 ; i<60 ; i+-5){
        v.push_back(i);
    }
    //get element at a particular index
    cout<<v.at(3)<<endl;
    //get first element
    cout<<v.front()<<endl;
    //get last element
    cout<<v.back()<<endl;
    //pointer to the 1st element
    int*first = v.data();
    //print 1st element using pointer
    cout<<"first element: "<<*first<<endl;
    //print 4th element index 3
    first += 3;
    cout<<"4th element"<<v.at(4)<<endl;




}