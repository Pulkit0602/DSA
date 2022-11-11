#include <iostream>
using namespace std;
#include <vector>
void MoveZeroes(vector<int>& arr , int m )
{
    int j=0,i=0;
    while(i<m)
    {
        if(arr[i]!=0)
        {
            swap(arr[j],arr[i]);            
            j++;
            i++;
        }
        else
        {
            i++;
        }
    }
}
int main()
{
    vector<int> arr {1};
    int m = 1; 
    MoveZeroes(arr , m);
    for (int i=0 ; i<arr.size() ; i++)
    {
        cout<<arr[i]<<" ";
    }
}