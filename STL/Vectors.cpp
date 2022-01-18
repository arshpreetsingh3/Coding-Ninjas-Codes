#include<bits/stdc++.h>
using namespace std;
bool f(int x,int y)
{
    return x>y;
}
int main(){

    //Vector 

    vector<int> A;
    A.push_back(11);
    A.push_back(2);
    A.push_back(3);
    A.push_back(14);
    //accessing of vector 
    cout<< A[1] << endl;
    //sort using O(NlogN) time 
    sort(A.begin(),A.end());
    //2,3,11,14
    for(int i=0;i<A.size();i++){
        cout<<A[i]<<endl;
    }
    //O(logN) times - Used for binary search
    bool present = binary_search(A.begin(),A.end(),3);
    if(present){
        cout<<"True"<<endl;
    }
    A.push_back(100);
    A.push_back(100);
    A.push_back(100);
    A.push_back(100);
    A.push_back(123);
    //now finding the first occurence of 100 in the vector
    //or getting the iterator to the first occurence 
    vector<int>::iterator it =lower_bound(A.begin(),A.end(),100);   
    //lower bound = give me the iterator to the first element ehich is greater than or equal to 
    //uppper bound = iterator points to the value stricly greater than 100 tus will point to 123
    vector<int>::iterator it2=upper_bound(A.begin(),A.end(),100);
    cout << *it << " " << *it2 << endl;
    cout << it2-it<<endl; //4 //O(1) time //thus 100 occours 4 times 
    //iterators in vectors are random 
    //arithmetic operations can be performed in const time 
    //sorting in reverse order 
    sort(A.begin(),A.end(),f);
    //using a comparator function and sorting the array into reverse order
    vector<int>::iterator it3;
    for(it3 =A.begin();it3!=A.end();it3++)
    {
        cout << *it3 << endl;
    }
}