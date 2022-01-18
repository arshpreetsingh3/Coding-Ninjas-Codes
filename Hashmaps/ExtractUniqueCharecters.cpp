#include<bits/stdc++.h>
using namespace std;
char* uniqueChar(char *str){
    unordered_map<char,int> seen;
    char *ans = new char[100];
    int j=0;
    for(int i=0;str[i]!='\0';i++){
        if(seen.count(str[i])){
            continue;
        }
        else{
            seen[str[i]]++;
            ans[j]=str[i];
            j++;
        }
    }
    ans[j]='\0';
    return ans;
}
int main(){
    char ans[]={"aabbcc"};
    char *finans = new char[100];
    finans = uniqueChar(ans);
    cout<<finans<<endl;
}