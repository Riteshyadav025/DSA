#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;

int main(){

  vector<int>ans;
  ans.push_back(5);
  ans.push_back(235);
  ans.push_back(15);
  ans.push_back(54);
  ans.push_back(154);

  // sort in increasing order
  sort(ans.begin(),ans.end());
  for(int i=0;i<ans.size();i++)
  cout<<ans[i]<<" ";

  cout<<endl;

  // sort in decreasing order
  // sort(ans.begin(),ans.end(),greater<int>());
  // for(int i=0;i<ans.size();i++)
  // cout<<ans[i]<<" ";

  // search in binaray search
  cout<<binary_search(ans.begin(),ans.end(),54)<<endl;

  cout<<find(ans.begin(),ans.end(),54)-ans.begin()<<endl;
}