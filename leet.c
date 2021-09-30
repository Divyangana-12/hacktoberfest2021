#include<iostream>
using namespace std;
int targ(int arr[], int k, int n, int target,int* j,int* x)
{
    int sum=0;
    while(*j<n)
    {
        sum = sum+arr[*j];
        if(*j-*x+1<k)
        {
            *j++;
        }
        else if(*j-*x+1==k && sum==target)
        {
            break;
        }
        else if(*j-*x+1==k)
        {
            sum = sum -arr[*x];
            *x++;
            *j++;
        }
    }
    return (x,j);
}
int main()
{
    int target,i,n,k=2;
    int j=0,x=0;
    cout<<"Enter nums size:\n";
    cin>>n;
    int arr[n];
    cout<<"Target:\n";
    cin>>target;
    cout<<"Enter num elements:\n";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Output="<<"["<<targ(arr,k,n,target,&j,&x)<<"]";
    return 0;   
}
