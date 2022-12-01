// binary search
#include <iostream>
#include <vector>
using namespace std;
int main()
{
      vector<int> arr{1,2,3,4,5};
      int low=0,upp=arr.size()-1,mid=(low+upp)/2;
      int se;// element to be searched
      cout<<"Enter element to be searched"<<endl;
      cin>>se;
      int flag=0;
      while(low<=upp)
      {
      if(se==arr[mid])
         {
            flag=1;
            break;
         }
      else if(se>arr[mid])
      {
         low=mid+1;
         mid=(low+upp)/2;
      }
      else if(se<arr[mid])
      {
         upp=mid-1;
         mid=(low+upp)/2;
      }
      }
      if(flag==1)
       cout<<se<<" found at position"<<mid;
      else
        cout<<se<<" not found";
      return 0;
}