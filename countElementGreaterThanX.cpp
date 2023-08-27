/*
count the number of elements strictly greater than x
*/
#include<iostream>
#include<vector>
using namespace std;
void count(vector<int>& vect,int a){
    int cx=0;
    for(int i=0;i<vect.size();i++){
        if(vect[i]>a) cx++;
    }
    cout<<"No. of element greater than "<<a<<" : "<<cx;
    cout<<endl;
}
int main(){
    vector<int> v;
    v.push_back(3);
    v.push_back(5);
    v.push_back(1);
    v.push_back(3);
    v.push_back(9);
    v.push_back(10);
    v.push_back(8);
    v.push_back(4);
    v.push_back(7);
    int x;
    cout<<"Enter target : ";
    cin>>x;
    count(v,x);

}