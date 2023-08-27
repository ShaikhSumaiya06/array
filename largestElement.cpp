/*
find the largest three elements in the array
*/
#include<iostream>
#include<vector>
#include<climits>
using namespace std;
void largest3Element(vector<int>& v){
    int max1,max2,max3;
    max1=max2=max3=INT_MIN;
    for(int i=0;i<v.size();i++){
        if(v[i]>max1){
            max3=max2;
            max2=max1;
            max1=v[i];
        }
        else if(v[i]>max2){
            max3=max2;
            max2=v[i];
        }
        else if(v[i]>max3 ){
            max3=v[i];
        }
    }
    cout<<"Max1 : "<<max1<<endl;
    cout<<"Max2 : "<<max2<<endl;
    cout<<"Max3 : "<<max3<<endl;
}
int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(3);
    v.push_back(2);
    v.push_back(4);
    v.push_back(7);
    v.push_back(9);
    v.push_back(11);
    v.push_back(6);
    largest3Element(v);
}