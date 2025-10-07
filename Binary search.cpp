#include<iostream>
using namespace std;
int binary_search(int n,int arr[],int value)
{
    int left = 0,right = n-1;
    while(left<=right)
    {
        int mid = (left + right)/2;
        if(value==arr[mid])
        {
            return mid;
        }
        else if(value>arr[mid])
        {
            left= mid+1;
        }
        else
        {
            right = mid-1;
        }
    }
    return -1;
}
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
    int index = binary_search(n,arr,value);
    if(index!=-1)
    {
        cout<<value<<" Is found at index "<<index;
    }
    else
    {
        cout<<value<<" Is not found";
    }
    cout<<endl;
    return 0;
}
