#include<bits/stdc++.h>
using namespace std;
bool findPath(int maze[][20],int n,int x,int y,int path[][20]){
 // x and y current position (basically row and col no ) where we are in the maze
 if(x<0 || x>=n || y<0 || y>=n){
     return false;
 }
 if(x == n-1 && y == n-1){
     path[x][y]=1;
     for(int i=0;i<n;i++){
         for(int j=0;j<n;j++){
                cout<<path[i][j] << " ";
         }
         cout<<endl;
     }
     cout<<endl;
     return true;
 }
 if(maze[x][y] == 0 || path[x][y] == 1){
     return false;
 }
 path[x][y]=1;
 //this is done because we have included this x,y coordinate in out solution
 //Right 
 if(findPath(maze,n,x,y+1,path)){
     path[x][y]=0;
     return true;
 }
 //Left
 if(findPath(maze,n,x ,y-1,path)){
     path[x][y]=0;
     return true;
 }
 //top 
 if(findPath(maze,n,x-1,y,path)){
     path[x][y]=0;
     return true;
 }
 //boottom
 if(findPath(maze,n,x+1,y,path)){
     path[x][y]=0;
     return true;
 }
 path[x][y]=0;
 return false;
}
bool findPath(int maze[][20],int n){
  
  int path[20][20]={0};
   return findPath(maze,n,0,0,path);

}
int main(){
    int n= 3;
    int maze[20][20] = {{1,1,0},{1,1,0},{0,1,1}};
    cout<<findPath(maze,n);
}