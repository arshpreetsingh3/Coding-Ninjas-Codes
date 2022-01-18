#include<bits/stdc++.h>
using namespace std;
void findMedian(int arr[], int n){
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Print output as specified in the question.
     */

  
  // 2 pr banegi
  // 1 max pq(6) or 1 min pq(2)
  //max ka top shoud be less thn min ka top 
  // to swap both the top agar less thnn nhi hai 
  //
  //jb ele even honge then min or max dono pq mai top nikal k divide by 2 krke print 
  //jb ele odd thn max ka top 
  // 
  priority_queue<int , vector<int> , greater<int> > minp;
  priority_queue<int> maxp;
  maxp.push(arr[0]); 
  int ele = maxp.top();
   cout<<ele<<endl;
  for(int i=1;i<n;i++)
  {
  int ele = maxp.top();
  if(arr[i] > ele)
  {
    minp.push(arr[i]);
  }
    else{
      maxp.push(arr[i]);
    }
  int minsize = minp.size();
  int maxsize = maxp.size();
  if(maxsize - minsize > 1 || minsize - maxsize > 1) 
  {
     if(maxsize > minsize)
     {
       int top = maxp.top();
       maxp.pop();
       minp.push(top);
     }else {
       int top = minp.top();
       minp.pop();
       maxp.push(top);
     }
   }
        int ans = 0,ans1 = 0 ;
        int tsum = minsize + maxsize;
    if(tsum%2 != 0)
    {
      if(minsize > maxsize)
      {
          ans = minp.top();
        
      }
      else{
        ans = maxp.top();
     
      }
    }else{
      if(!minp.empty())
      {
        ans += minp.top();
      }
       if(!maxp.empty())
      {
        ans += maxp.top();
      }
      ans = ans/2;
      
    }
    cout << ans << endl;
  }
     
}
int main(){
 int arr[] = {6, 2, 1, 3 ,7 ,5};
 findMedian(arr,6);
}