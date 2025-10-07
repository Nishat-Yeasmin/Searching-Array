#include<iostream>
using namespace std;
int main()
{
    int n,i,j;
    cout<<"Enter array size: ";
    cin>>n;
    int arr[n];
    cout<<"Enter array elements: ";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int l;
    cout<<"Enter the no. of value you want to search: ";
    cin>>l;
    int value[l];
    cout<<"Enter the value you want to search: ";
    for(j=0;j<l;j++)
    {
       cin>>value[j];
    }
    for(j=0;j<l;j++)
    {
        int count=0;
        for(i=0;i<n;i++)
        {
            if(value[j]==arr[i])
            {
                count++;
            }
        }
           if(count==0)
           {
                cout<<value[j]<<" is Not found in the array."<<endl;
           }
           else
            cout<<value[j]<<" is found in the array."<<endl;

       }

}

