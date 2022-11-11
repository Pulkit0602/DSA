#include<iostream>
using namespace std;

int largestRow(int arr[][4] , int row , int col)
{
    int ans = -1;
    int rowSum  = 0;
    for(int i=0 ; i<3 ; i++)
    {        
        int sum = 0;
        for(int j=0 ; j<4 ; j++)
        {
            sum = sum + arr[i][j];                    
        }
        cout<<"Sum of "<<i<<" row "<<sum<<endl;
        if (sum > rowSum)
        {
            rowSum = sum ;
            ans = i ;
        }        
    }  
    return ans ;
}


int main()
{
    //create 2D Array 
    int row = 3;
    int col = 4;
    int a[3][4] = {{5,6,7,8} , {10,4,7,9} , {4,7,2,3}};
    
    //print 2D Arry
    for(int i=0 ; i<3 ; i++)
    {
        for(int j=0 ; j<4 ; j++)
        {
            cout<<a[i][j]<<" ";         
        }
        cout<<endl;;
    }  
    int result = largestRow(a , row , col);
    cout<<"Larhest Row Sum is: "<<result<<endl;
}

