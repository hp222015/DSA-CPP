/* Selection Sort is a sorting technique in which we traverse the whole array and select the
    smallest element and bring it to the first index and after that we select the smallest 
    element in the remaining array and bring it to the second index and we repeat this until
    we reach the end of the array.*/
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
      int arr[10]={9,8,7,6,5,4,3,2,1,0};
      int min_idx;
    for(int j=0;j<10;j++)
    {
      min_idx=j;
      for(int i=j+1;i<10;i++)
      {
            if(arr[i]<arr[min_idx])
             min_idx=i;
      }
         swap(arr[j],arr[min_idx]);
    }
    for(int i=0;i<10;i++)
     cout<<arr[i]<<",";
}