#include <bits/stdc++.h>

using namespace std;

int main()

{
    int n,x,y,xn=0,xp=0;

    cin>>n;

    for(int i = 0 ; i < n; i ++)
    {
        cin>>x>>y;

        if(x>0)
            xp++;
        else
            if(x<0)
              xn++;

    }
    if(xn<2 || xp<2)
        cout<<"YES";
    else
        cout<<"NO";
}
