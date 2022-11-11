#include<iostream>
using namespace std;

bool isPresent( int arr[][4] , int target , int row , int col)
{
    int rowx =  row;
    int colx = col;
    for(int i=0 ; i< rowx ; i++)
    {
        for(int j=0 ; j<colx ; j++)
        {
            if(arr[i][j] == target)  
            {
                return 1;
            }      
        }
    }
    return 0 ;
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
        cout<<endl;
    }
    
    int target;
    cout<<"Enter the element you want to find"<<endl;
    cin>>target;

    if(isPresent(a , target , row , col))
    {
        cout<<"Elemnet found"<<endl;
    }
    else
    {
        cout<<"Elemnet Not found"<<endl;
    }
}

