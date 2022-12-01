#include <iostream>

using namespace std;

int main()
{
    int x,n;
    cout<<"Enter no. of rows";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            x=i+(j-1)*(n-i)*2;
            cout<<x<<" ";
        }
        cout<<endl;
    }

    return 0;
}