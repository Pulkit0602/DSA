#include <iostream>
using namespace std;
#include <vector>
void Reverse(vector<int>& arr , int m )
{
    int start = m+1;  
    int end = arr.size()-1;    
    while (start <= end)
    {
        swap(arr[start] , arr[end]);
        start = start + 1;
        end = end - 1;
    }
}
int main()
{
    vector<int> arr {10,9,8,7,6};
    int m = 2; 
    Reverse(arr , m);
    for (int i=0 ; i<arr.size() ; i++)
    {
        cout<<arr[i]<<" ";
    }
}