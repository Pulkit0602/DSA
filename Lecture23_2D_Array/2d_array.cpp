#include<iostream>
using namespace std;


int main()
{
    //create 2D Array 
    int a[3][4];
    cout<<"Enter the value in 2D array"<<endl;
    for(int i=0 ; i<3 ; i++)
    {
        for(int j=0 ; j<4 ; j++)
        {
            cin>>a[i][j];            
        }
    }

    for(int i=0 ; i<3 ; i++)
    {
        for(int j=0 ; j<4 ; j++)
        {
            cout<<a[i][j]<<" ";        
        }
        cout<<endl;
    }
}

//print 2D Arry
