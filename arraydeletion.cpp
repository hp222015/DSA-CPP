// Delete an element from random position in an array
#include <iostream> 
using namespace std;
int deleteX(int arr[],int n,int pos)
{
      for(int i=pos-1;i<n;i++)
      {
            arr[i]=arr[i+1];
      }
      n--;
      return n;
}

int main()
{
  int arr[100];
  for (int i=0;i<10;i++)
  {
      arr[i]=i+1;
  }
  int pos=3;
  int size=deleteX(arr,10,pos);
  //int size=sizeof(arr)/sizeof(arr[0]);
  for(int i=0;i<size;i++)
    std::cout<<arr[i]<<",";
  return 0;
}