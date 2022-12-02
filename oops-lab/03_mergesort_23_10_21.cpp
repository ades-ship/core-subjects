#include<iostream>
using namespace std;
int main(){
    int m,n;
     cout<<"\n enter the size of array1 and array 2";
     cin>>m>>n;
     int a1[m], a2[n];
    int a3[m+n],i=0,j=0,k=0;
    cout<<"\n enter the element of array1 in sorted ordered ";
    for(int c=0 ; c<m ; c++)
    cin>>a1[c];
    cout<<"\n enter the elment of array 2 in sorted order";
    for(int c=0 ; c<n ; c++)
    cin>>a2[c];

    while(i<m && j<n)
    {
          if(a1[i]<=a2[j])
          {
              a3[k++]=a1[i];
              i++;
          }
          else
          {
              a3[k++]=a2[j];
              j++;
          }
    }
    while(i<m){
        a3[k++]=a1[i];
         i++;
    }
    while(j<n){
        a3[k++]=a2[j];
        j++;
    }
    for(i=0 ; i<k  ; i++)
    cout<<a3[i]<<" ";
    return 0;
}
