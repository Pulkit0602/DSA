#include<iostream>
using namespace std;

int main()
{
    //create 2D Array 
    int row = 3;
    int col = 4;
    int a[3][4] = {{5,6,7,8} , {10,4,7,9} , {4,7,2,3}};
    
    //print 2D Arry
    for(int i=0 ; i<3 ; i++)
    {
        int sum = 0;
        for(int j=0 ; j<4 ; j++)
        {
            sum = sum + a[i][j];                    
        }
        cout<<sum<<endl;;
    }  
}

