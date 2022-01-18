#include<bits/stdc++.h>
using namespace std;
void stringcompression(char str[]){
    int count = 1;
    char currentchar = str[0];
    int i;
    int nextIndex = 1;
    for(i =1;str[i]!='\0';i++){
        //count the occurencse of consecutive duplicate charecters
        if(str[i] == currentchar){
            count++;
        }else{
            //apend the count with string
            if(count > 1){
                str[nextIndex] = char(count + 48);
                nextIndex++;
            }
            currentchar = str[i];
            str[nextIndex] = str[i];
            nextIndex++;
            count =1;
        }
    }
    if(count > 1){
        str[nextIndex] = char(count + 48);
        nextIndex++;
    }
    str[nextIndex] = '\0';
}
int main(){
  char str[100];
  cin >> str;
  cout << char(48) <<endl;
  stringcompression(str);
  cout<<str<<endl;

}