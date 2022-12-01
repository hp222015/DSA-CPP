// Searching in array
// Linear Search
#include <iostream>
#include <array>
using namespace std;
int main()
{
      int arr[]={1,2,3,4,5};
      cout<<"Enter the element to be searched:"<<endl;
      int se;// element to be searched
      int flag=0,i;
      cin>>se;
      for(i=0;i<5;i++)
      {
            if(arr[i]==se)
              {
                  flag=1;
                  break;
              }
      }
      if(flag==1)
        cout<<se<<" found at position "<<i;
      else
      cout<<se<<" not found";
      return 0;
}