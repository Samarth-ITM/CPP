//WAP to print 10 natural numbers
#include <iostream>
using namespace std;

int print(int n)
{
    if(n>1)
    {
        return (print(n-1)+1);
    }
    else if(n==1)
    {
        return 1;
    }
    else
    {
        cout<<"Enter positive number"<<endl;
        return 0;
    }
}

int main()
{
    int n;
    cout<<"Enter the number of terms: ";
    cin>>n;

    for(int i=1;i<=n;i++)
    {
        cout<<print(i)<<" ";
    }
    cout<<"\n";
    return 0;

}