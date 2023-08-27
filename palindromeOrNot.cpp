/*
If an array arr contains n elements, then check if the given array is a palindrome or not .
*/
#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>& a){
    for(int i=0;i<a.size();i++) cout<<a[i]<<" ";
    cout<<endl;
}
/* method1
by copy the array in other array in a reverse manner than compare the both array , if both array match then palindrome otherwise not
void reverseEntry(vector<int> b,vector<int>& c){
    int j=b.size()-1;
    for(int i=0;i<b.size();i++){
        c[i]=b[j-i];
    }
}
*/
/* method-2 */
bool isPalindrome(vector<int>& v){
    int j=v.size();
    for(int i=0;i<=j;i++){
        if(v[i] != v[j-1-i]) return false;
    }
    return true;
}
int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(3);
    v.push_back(2);
    v.push_back(1);
    int n=v.size();
    // vector<int> v1(v.size());
    cout<<"Original array : ";
    display(v);
    /*
    reverseEntry(v,v1);
    cout<<"2nd Array : ";
    display(v1);
    if(v==v1) cout<<"Is Palindrome. ";
    else cout<<"Is not Palindrome. ";
    */
    if(isPalindrome(v)) cout<<"Is Palindrome. ";
    else cout<<"Is not Palindrome.";
}