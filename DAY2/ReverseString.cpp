#include<iostream>
using namespace std;

void reverseString(char name[] , int length)
{
    int start = 0;
    int end = length-1; 
    while(start<=end)
    {
        swap(name[start],name[end]);
        start ++;
        end --;
    }

} 

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
    reverseString(name ,ans);
    cout<<"Array: "<<name<<endl;

}