/*
Given an array of integers, change the value of all odd indexed elements to its second multiple
and increment all even indexed values by 10.
*/
#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>& a){
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
void changes(vector<int>& v){
    for(int i=0;i<v.size();i++){
        if(i%2==0){
            v[i] +=10;
        }
        else{
            v[i] *=2;
        }
    }
}
int main(){
    vector<int> v;
    v.push_back(6);
    v.push_back(3);
    v.push_back(2);
    v.push_back(4);
    v.push_back(9);
    v.push_back(7);
    v.push_back(1);
    cout<<"Original Array : ";
    display(v);
    changes(v);
    cout<<"After updation : ";
    display(v);
}