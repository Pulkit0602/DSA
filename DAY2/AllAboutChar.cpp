//Lenght of a string
#include<iostream>
using namespace std;

int getLength(char name[])
{
    int count = 0;
    for (int i=0 ; name[i]!='\0' ;i++)
    {
        count++;
    }
    return count;
}

int main()
{
    char name[20];
    cout<<"Enter the name"<<endl;
    cin>>name;    
    int ans = getLength(name);
    cout<<"Length of the Array: "<<ans<<endl;

}