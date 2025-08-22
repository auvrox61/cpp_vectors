#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>v{1,2,3,4,5};
    v.resize(7,0);
    for(int i:v){
        cout<<i<<" ";
    }
    cout<<endl;
    v.assign(3,3);
    for(int i:v){
        cout<<i<<" ";
    }
    cout<<endl;

    vector<int>v1{1,2,3};
    v.swap(v1);
    for(int i:v){
        cout<<i<<" ";
    }
    cout<<endl;

    for(int i:v1){
        cout<<i<<" ";
    }
    cout<<endl;

    return 0;
}