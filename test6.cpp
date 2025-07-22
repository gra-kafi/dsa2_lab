#include<iostream>
#include<vector>
using namespace std;
template<typename T>
void printVector(vector<T>v){
    cout<<"print vector: ";
    for(int i= 0 ; i<v.size() ; i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int maint(){
    vector<int>v;
    v.push_back(2);
    v.push_back(4);
    v.push_back(10);

    //sum of elements
    int s = 0;
    for(int i = 0 ; i<v.size() ; i++){
        s += v[i];
    }
    cout<<"sum: "<<s<<endl;
    //update an element at an index
    v[2] = 3;
    //remove the last elemen  t
    v.pop_back();
    //insert beginning
    v.insert(v.begin(),14);
    //insert at index 2
    v.insert(v.begin()+2,32);
    //remove v[1]
    v.erase(v.begin()+1);
    printVector(v);   
    return  0;
}

//map,set