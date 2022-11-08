#include<iostream>
using namespace std;

int main()
{
    int n, rev=0, rem,orgi;

    cin>>n;
    orgi=n;
    while(n!=0)
    {
        rem=n%10;
        rev= rev*10+rem;
        n/=10;
    }
    if(orgi==rev)
    {
        cout<<orgi<<"pali";
    }
    else {
        cout<<orgi<<"not";
    }
}
