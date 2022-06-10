#include<iostream>
using namespace std;

long long int maxim(long long int x)
{
    long long int ans;
    ans=x/6;
    if(x%6==4)
    {
        ans++;
    }
    if (x%6==2)
    {
        ans++;
    }
    
    return ans;

}

long long int minim(long long int x)
{
    long long int ans;
    ans=x/4;
    // if(x%4==2)
    // {
    //     ans--;
    // }

    
    return ans;

}


int main()
{
    int sixe;
    cin>>sixe;

    while (sixe--)
    {
        long long int a;
        cin>>a;

        if(a>3)
        {
            if (a%2==0)
            {
            cout<<maxim(a)<<" ";
            cout<<minim(a); 
            }
            else
            {
                cout<<-1;
            }
            
        }
        else
            {
                cout<<-1;
            }
        cout<<endl;


        
    }
    

    
    
} 
