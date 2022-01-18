#include<bits/stdc++.h>
using namespace std;
void merge(int arr1[], int size1, int arr2[], int size2, int ans[]){
    
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Save the merged array in ans[] array passed as argument.
     * Don't return or print anything.
     * Taking input and printing output is handled automatically.
     */
   int i = 0, j = 0, k = 0;
 
    // Traverse both array
    while (i<size1 && j <size2)
    {
        // Check if current element of first
        // array is smaller than current element
        // of second array. If yes, store first
        // array element and increment first array
        // index. Otherwise do same with second array
        if (arr1[i] < arr2[j])
            ans[k++] = arr1[i++];
        else
            ans[k++] = arr2[j++];
    }
 
    // Store remaining elements of first array
    while (i < size1)
        ans[k++] = arr1[i++];
 
    // Store remaining elements of second array
    while (j < size2)
        ans[k++] = arr2[j++];
}
int main(){
    int arr1[]={11,22,33};
    int arr2[]={12,23,31};
    int ans[6];
    merge(arr1,3,arr2,3,ans);
    for(int i=0;i<6;i++){
        cout<<ans[i]<<" ";
    }
}