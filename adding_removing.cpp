#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>v{1,2,3};
    v.push_back(4);
    v.emplace_back(5);
    cout<<"After pushing/emplacing : ";
    for(int i:v){
        cout<<i<<" ";
    }
    cout<<endl;

    v.insert(v.begin()+2,7);
    cout<<"After inserting : ";
    for(int i:v){
        cout<<i<<" ";
    }
    cout<<endl;

    v.pop_back();
    cout<<"Updated element list : ";
    for(int i:v){
        cout<<i<<" ";
    } 
    cout<<endl;

    v.erase(v.begin()+1);
    cout<<"After erasing : ";
    for(int i:v){
        cout<<i<<" ";
    }
    cout<<endl;

    v.clear();
    cout<<"Size of v : "<<v.size()<<endl;

    return 0;
}