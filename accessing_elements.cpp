#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>v{1,2,3,4,5};
    cout<<v[1]<<endl;
    cout<<v.at(3)<<endl;
    cout<<v.front()<<endl;
    cout<<v.back()<<endl;
    int *ptr=v.data();
    cout<<ptr<<endl;
    cout<<ptr[0]<<endl;
}