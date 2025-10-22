#include<iostream>
using namespace std;
void Binary_search(int arr[],int n,int value)
{
    int left=0,right=n-1,flag=-1;
    while(left<=right)
    {
        int mid = (left + right)/2;
        if(arr[mid]==value)
        {
            cout<<value<<" found at index "<<mid;
            flag=0;
            break;
        }
        else if(arr[mid]<value)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }
    if(flag==-1)
    {
        cout<<value<<" Is not found";
    }
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
    Binary_search(arr,n,value);
    return 0;

}
