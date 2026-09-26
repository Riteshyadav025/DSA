#include<iostream>
#include<vector>
using namespace std;

int main(){

 vector<int>arr;
 arr.push_back(2); 
 arr.push_back(12); 
 arr.push_back(21); 
 arr.push_back(122); 

 cout<<arr[0]<<endl;
 cout<<arr.front()<<endl;

 cout<<arr[arr.size()-1]<<endl;
 cout<<arr.back()<<endl;


 vector<int>a;
 // copy value 1 vector to another

 a = arr;
 cout<<a.size();
 cout<<endl;
 for(auto it = arr.begin(); it!=arr.end();it++)
 {
  cout<<*it<<" ";
 }
cout<<endl;
 for(auto i: arr)
 cout<<i<<" ";

}