#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>v1;
    cout<<"The size of v1 : "<<v1.size()<<endl;
    cout<<endl;

    vector<int>v2(5,10);
    cout<<"The size of v2 : "<<v2.size()<<endl;
    cout<<"Elements of v2 : ";
    for(int i:v2){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<endl;

    vector<int>v3{1,2,3,4,5,6,7};
    cout<<"The size of v3 : "<<v3.size()<<endl;
    cout<<"The elements of v3 are : ";
    for(int i:v3){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<endl;

    vector<int>v4(v2);
    cout<<"The size of v4 : "<<v4.size()<<endl;
    cout<<"The elements of v4 : ";
    for(int i:v4){
        cout<<i<<" ";
    }
    cout<<endl;
}