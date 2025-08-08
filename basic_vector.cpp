#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v1(5);
    vector<int> v2(5,10);

    cout<<"v1 : ";
    for(int i=0;i<v1.size();i++){
        cout<<v1[i]<<" ";
    }
    cout<<endl;
    cout<<"v2 : ";
    for(int i=0;i<v2.size();i++){
        cout<<v2[i]<<" ";
    }

    return 0;

}