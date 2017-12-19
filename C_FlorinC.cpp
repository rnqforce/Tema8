#include <bits/stdc++.h>

using namespace std;

struct prmutation{
     int a,b;
}a[100003];

vector<int> v;

int main()

{
    int n , x , mx2=0 , mx=0,ans=0,k=0;

    cin>>n>>x;

    for(int i = 0 ; i < n-1 ; i ++)
    {

        cin>>x;
        v.push_back(x);
    }

    for(int i = 1 ; i < n ; i ++ )
    {
        if(v[i-1]<v[i])
            mx++;
        else{
            a[k++].a=v[i-1];
        }
    }







}
