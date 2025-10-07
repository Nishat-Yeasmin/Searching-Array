#include<iostream>
using namespace std;
int main()
{
    int n,i;
    cout<<"Enter array size: ";
    cin>>n;
    int arr[n];
    cout<<"Enter array elements: ";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int value;
    cout<<"Enter the value you want to search: ";
    cin>>value;
    int pos = -1;
    for(i=0;i<n;i++)
    {
       if(value==arr[i])
       {
           pos = i+1;
       }
    }
    if(pos==-1)
        cout<<"Not found."<<endl;
    else
        cout<<value<<" is found in the array and this position is: "<<pos<<endl;

}
