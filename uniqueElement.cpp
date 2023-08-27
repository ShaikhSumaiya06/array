/*
Find the unique number in a given Array where all the elements are being repeated twice with one
value being unique.
*/
#include<iostream>
#include<vector>
using namespace std;
void uniqueElement(vector<int>& v){

    for(int i=0;i<v.size()-1;i++){
        int count=0;
        for(int j=0;j<v.size();j++){
            if(v[i]==v[j] && i!=j) count++;
        }
        if(count==0) cout<<"Unique value : "<<v[i]<<endl;
    }
}
int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(1);    
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(4);
    uniqueElement(v);
    
}