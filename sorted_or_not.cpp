/*
check if the given array is sorted or not
*/
// in sorted array 'ith' element is always smaller than 'ith + 1' element
#include<iostream>
#include<vector>
#include<climits>
using namespace std;
void display(vector<int>& b){
    for(int i=0;i<b.size();i++){
        cout<<b[i]<<" ";
    }
    cout<<endl;
}

// void Sort(vector<int>& a){
//     int max=INT_MIN;
//     int min=INT_MAX;
//     for(int i=0;i<a.size()-1;i++){
//         for(int j=i+1;j<a.size();j++){
//             if(a[i]>a[j]){
//                 int temp=a[i];
//                 a[i]=a[j];
//                 a[j]=temp;
//             }
//         }
//     }
// }
bool sorted_or_not(vector<int>& a){
    
    for(int i=0;i<a.size()-1;i++){
        if(a[i] > a[i+1]){
            return false;
        }       
    }
    return true;
}
int main(){
    vector<int> v; // 1st array or original array/vector
    v.push_back(3);
    v.push_back(5);
    v.push_back(7);    
    v.push_back(11);
    v.push_back(9);
    v.push_back(10);
    v.push_back(14);
    v.push_back(17);
    if(sorted_or_not(v)) cout<<"Sorted"<<endl;
    else cout<<"UnSorted "<<endl;
}