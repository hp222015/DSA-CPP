// sorting an array using bubblesort technique
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
  int arr[10]={10,9,8,7,6,5,4,3,2,1};
  for(int i=0;i<10-1;i++)
  {
      for(int j=0;j<10-i-1;j++)
      {
            if(arr[j]>arr[j+1])
              swap(arr[j],arr[j+1]);
      }
  }
  for(int i=0;i<10;i++)
    cout<<arr[i]<<",";
}
// time complexity
//Best case: O(n) since for the best case the array is sorted so only the inner j loop will run for n times
            // once and after that it is found that the array is same so no changes for rest and hence i loop won't run again .
// Worst case: O(n^2)