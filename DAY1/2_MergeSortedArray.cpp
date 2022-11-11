#include <iostream>
using namespace std;
#include <vector>
void MergeSortedArray(vector<int>& nums1, int m, vector<int>& nums2, int n, vector<int>& arr3)
{
    int i=0,j=0;       
    while (i < m && j < n)
    {
        if(nums1[i]<nums2[j])
        {
            arr3.push_back(nums1[i]);
            i++;
        }
        else
        {
            arr3.push_back(nums2[j]);
            j++;    
        }
    }
    while (i < m)
    {
        arr3.push_back(nums1[i]);
        i++;
    }
    while (j < n)
    {
        arr3.push_back(nums2[j]);
        j++;
    }
        

}
int main()
{
    vector<int> arr1 {1,3,5,7,9};
    int m = 5;
    vector<int> arr2 {2,4,6};  
    int n = 3 ; 
    vector<int> arr3;
    MergeSortedArray(arr1,m,arr2,n,arr3);
    for (int i=0 ; i<arr3.size() ; i++)
    {
        cout<<arr3[i]<<" ";
    }
}