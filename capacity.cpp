#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>v;
    cout<<v.size()<<" "<<v.capacity()<<" "<<endl;
    v.reserve(10);
    cout<<v.capacity()<<" "<<endl;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    cout<<v.size()<<" "<<v.capacity()<<" "<<endl;
    v.shrink_to_fit();
    cout<<v.size()<<" "<<v.capacity()<<" "<<endl;
    
    return 0;
}