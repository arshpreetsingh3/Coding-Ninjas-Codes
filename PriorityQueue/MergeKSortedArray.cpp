#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
vector<int> mergeKSortedArrays(vector<vector<int>*> input){
    vector<int> v;
    priority_queue<int, vector<int>, greater<int> > pq;
    //inbuilt min pq
    unordered_map<int,vector<int>> mp1; //to store element and its vector no 
    unordered_map<int,int> mp2;//for vector numbercls and its current index
    for(int i=0;i<input.size();i++){
        
    if(mp1.count(input[i]->at(0)))
    {
      vector<int> v1=mp1[input[i]->at(0)];
      v1.push_back(i);
      mp1[input[i]->at(0)]=v1;
    }
    else
    {
      vector<int> v1;
      v1.push_back(i);
      mp1[input[i]->at(0)]=v1;
    }
    mp2[i]=1;
    pq.push(input[i]->at(0));
    }
     while(1)
  {
    if(pq.top()==INT_MAX)
    { break; }
    
    int temp=pq.top();
    v.push_back(temp);
    pq.pop();
    
    vector<int> vTemp=mp1[temp];
    int vNumber=vTemp[vTemp.size()-1];
    vTemp.pop_back();
    if(vTemp.size()==0)
    { mp1.erase(temp); }
    else
    { mp1[temp]=vTemp; }
    
    int vIndex=mp2[vNumber];
    if(vIndex<input[vNumber]->size())
    {
      int element=input[vNumber]->at(vIndex);
      pq.push(element);
      if(mp1.count(element))
      {
        vector<int> vPresent=mp1[element];
        vPresent.push_back(vNumber);
        mp1[element]=vPresent;        
      }
      else
      {
        vector<int> temp;
        temp.push_back(vNumber);
        mp1[element]=temp;
      }
      mp2[vNumber]++;
    }
    else
    { pq.push(INT_MAX); }
  }
  return v;
}
int main(){
    vector<int> *v1 = new vector<int>(3);
    v1->push_back(1);
    v1->push_back(5);
    v1->push_back(9);
    vector<int> *v2 = new vector<int>(2);
    v2->push_back(45);
    v2->push_back(90);
    vector<int> *v3 = new vector<int>(5);
    v3->push_back(2);
    v3->push_back(6);
    v3->push_back(78);
    v3->push_back(100);
    v3->push_back(234);
    vector<int> *v4 = new vector<int>(1);
    v4->push_back(0);
    vector<vector<int>* > v ;
    v.push_back(v1);
    v.push_back(v2);
    v.push_back(v3);
    v.push_back(v4);
    vector<int> ans = mergeKSortedArrays(v);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<endl;
    }

    return 0;
}