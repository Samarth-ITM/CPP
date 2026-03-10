#include <iostream>
using namespace std;

int main()
{
    int n;
    for(n=0;n<10;n++)
    {   
        cout<<n<<endl;
    
        if (n==5){
            cout<< n << " is 5"<< endl;
            break;
        }
        else if (n==4){
            continue;
        }
        else{
            cout<<n << "is not 5"<< endl;
        }
    }
}