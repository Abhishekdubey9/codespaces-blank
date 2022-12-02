#include<iostream>

using namespace std;
int main()
{
    int s, e;
    cout<<"enter a start:"<<endl;
    cin>>s;
    cout<<"enter end:";
    cin>>e;
    for(int n= s;n<=e;n++)
    {
        if (n%2==0)
        {
            cout<<n<<endl;
        }
    }
    return 0;
}