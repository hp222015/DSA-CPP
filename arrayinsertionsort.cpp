// sorting an array using insertion sort technique
/* array is divided into 2 parts sorted and unsorted for sorted part we take the value at 
zero index of array(assume A) and for unsorted we take rest of array and then we check whether
A is greater than then first element of sorted part say B and if A>B then we will shift A to
 the right and check for the previous element in sorted array (in this case since we are at 0
  right now so no previous element is there) but if previous element is there i.e. element 
  before A then we will compare B with that element and if B is smaller than that element 
  then we will shift that element too rightwards and do this until we reach the first element 
  of sorted array and place B to the position where the sorted part element is smaller than B.
  And now we will take the whole sorted part including B to be the sorted part and then do the
  above same procedure for next element of unsorted part till we reach the end of unsorted part
*/
#include <iostream> 
using namespace std;
int main()
{
  int arr[10]={9,8,7,6,5,4,3,2,1,0};
  for(int i=1;i<10;i++)
  {
      int temp=arr[i];
      int j=i-1;
      while(j>=0 && arr[j]>temp)
      {
            arr[j+1]=arr[j];
            j--;
      }
      arr[j+1]=temp;
  }
  for(int i=0;i<10;i++)
   cout<<arr[i];
  return 0;
}