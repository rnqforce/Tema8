#include <bits/stdc++.h>

using namespace std;

int main()

{
int a,b,c;
  cin>>a>>b>>c;
    a = a%b*10;


    for(int i = 1 ; i < 100000 ; i ++)
        {
        int cat = a / b;
        if(cat == c) {
            cout << i;
            return 0;
        }
     a=a%b*10;

    }
    cout<<-1;
}
