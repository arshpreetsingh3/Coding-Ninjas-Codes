#include<bits/stdc++.h>
using namespace std;
bool isSub(char small[],char large[],int sl,int ll){
    if(sl==0){
        return true;
    }
    if(ll==0){
        return false;
    }
    if(small[sl-1]==large[ll-1]){
        return isSub(small,large,sl-1,ll-1);
    }
    return isSub(small,large,sl,ll-1);
}
char* checksequence(char large[], char*small){
    int llength = strlen(large);
    int slength = strlen(small);
    if(isSub(small,large,slength,llength)){
        return small;
    }
}
int main(){
    //Looks for minimum string 
    //mums
    char large[]={'C','+','+','+',' ','+','\0'};
    char small[]={'C','+','+',' ','+','\0'};
    string ans;
    ans= checksequence(large,small);
    cout<<ans;
}