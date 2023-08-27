/*
Find the difference between the sum of elements at even indices to the sum of elements at odd
indices.
*/
#include<iostream>
#include<vector>
using namespace std;
int evaluateDifference(vector<int>& v){
    int Esum=0,Osum=0;
    for(int i=0;i<v.size();i++){
        if(i%2==0)  Esum+=v[i];
        else Osum+=v[i];
    }
    return (Esum-Osum);
}
int main(){
    vector<int> v;
    v.push_back(3);
    v.push_back(5);
    v.push_back(13);    
    v.push_back(9);
    v.push_back(10);
    v.push_back(8);
    v.push_back(4);
    v.push_back(7);
    cout<<"Diffrence : "<<evaluateDifference(v);
}