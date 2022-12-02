#include<iostream>
using namespace std;

int main()
{
    int n;
    int sum = 0;
    cout<<"Enter the n: ";
    cin>>n;
    for(int i=1; i<=n;i++)
    {
        sum=sum+i;
        cout<<"The sum is"<<sum<<endl;
    }
    // cout<<"The sum is"<<sum<<endl;
    return 0;
}