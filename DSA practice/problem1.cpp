/*
https://www.geeksforgeeks.org/write-a-program-to-reverse-an-array-or-string/
*/
//first by iterative approach
#include<iostream>
using  namespace std;
int main(){
    int n;
    int a[n];
    cin>>n;
    //entering array
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int j=n-1;
    for(int i=0;i<n;i++){
        if(i<j){
           int  temp = a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
      
}

//now recursive approach

