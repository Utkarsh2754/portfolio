#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;
    for (int i = 0; i < tc; i++)
    {
        int n, P, l, t;
        cin>>n>>P>>l>>t;
        int rest, x;
        x = n/7;

        for(int i=n; i>0; i--)
        {
          
           if( x >= 2 && (i/7)>=2)
           {
              if((2*t + l)>=P)
              {
                rest=i-1; 
                break;
              }
              else
              {
                x=x-2;
              }
           }
           else
           {
              if((1*t + ))
           }
        
        }

    }
}