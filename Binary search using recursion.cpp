#include<iostream>
using namespace std;
int Binary_search(int arr[],int left,int right,int value)
{
    if(left>right)
        return -1;
    int mid = (left + right)/2;
    if(arr[mid]==value)
        return mid;
    else if(arr[mid]<value)
        return Binary_search(arr,mid+1,right,value);
    else
        return Binary_search(arr,left,mid-1,value);
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
    int result = Binary_search(arr,0,n-1,value);
    if(result==-1)
    {
        cout<<value<<" is not found"<<endl;
    }
    else
    {
        cout<<value<<" is found at position "<<result+1<<endl;
    }

    return 0;

}
