#include<bits/stdc++.h>
using namespace std;
void removeConsecutiveDuplicates(char input[]){
    for(int i=0;input[i]!='\0';i++){
        int j = i;
        while(input[j]==input[j+1]){
            int k=j;
            while(input[k]!='\0'){
                input[k]=input[k+1];
                k++;
            }
        }
    }
}
void remove(char arr[]){
    int nextIndex = 1;
    char lastChar = arr[0];
    for(int i=0;arr[i]!='\0';){
        if(arr[i] == lastChar){
            i++;
        }else{
            arr[nextIndex] = arr[i];
            nextIndex++;
            lastChar = arr[i];
            i++;
        }
    }
    arr[nextIndex]= '\0';
}
int main(){
    char arr[10];
    cin>>arr;
    remove(arr);
    cout<<arr<<endl;

}