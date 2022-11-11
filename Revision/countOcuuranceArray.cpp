#include<iostream>
using namespace std;

int countOccurnace(int arr[] , int length , int key )
{
    //first Occurance 
    int start = 0 ;
    int end = length-1;
    int mid;
    int ans1 = -1;
    while(start<=end)
    {
        mid = (start + end)/2;
        if(arr[mid]== key)
        {
            ans1 = mid;
            end = mid - 1;
        }
        else if (arr[mid]<key)
        {
            start = mid + 1;
        }
        else if(arr[mid]>key)
        {
            end = mid-1;
        }
    }
    //last Occurance    
    start = 0 ;
    end = length-1;
    mid = (start + end)/2;
    int ans2 = -1;
    while(start<=end)
    {
        mid = (start + end)/2;
        if(arr[mid]== key)
        {
            ans2 = mid;
            start = mid + 1;
        }
        else if (arr[mid]<key)
        {
            start = mid + 1;
        }
        else if(arr[mid]>key)
        {
            end = mid-1;
        }
    }
    if((ans2-ans1) == 0)
    {
        return -1;
    }
    else
    {
        return (ans2-ans1)+1;
    }
    
}

int main()
{
    int arr[14] = {1,1,1,1,15,8,12,16,16,16,19,23,28,29};
    int key = 34; 
    int length = 14;
    cout<<"Start"<<endl;
    int ans = countOccurnace(arr , length , key );
    cout<<"ans: "<<ans<<endl;
}
