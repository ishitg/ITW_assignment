#include<bits/stdc++.h>
using namespace std;

void selection_Sort(int arr[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=i;j<=n-1;j++)
        {
            if(arr[i] > arr[j])
            {
                swap(arr[i],arr[j]);
            }
        }
    }
}

int main()
{
    int arr[] = {5,2,1,9,3};
    selection_Sort(arr,5);
    for(auto it: arr)
    {
        cout<<it<<" ";
    }
}