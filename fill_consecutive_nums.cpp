#include<iostream>
#include<vector>
#include<numeric>
using namespace std;

int main(){
    vector<int> v1(5);

    for(int i=0;i<v1.size();i++){
        iota(v1.begin(),v1.end(),2);
    }
    cout<<"v1 : ";
    for(int i=0;i<v1.size();i++){
        cout<<v1[i]<<" ";
    }
    return 0;
}