#include<bits/stdc++.h>

using namespace std;

struct Nod{
     int inf;

     Nod *next;
};

struct Dl{
    int inf;

    Dl *next,*prev;
};

int main()
{
    int n;
    Nod *first,*last;

    first->inf=7;
    last=first;

    cin>>n;

    for(int i = 0 ; i < n ; i ++)
    {
        int x;
        Nod*p = (Nod*)malloc(sizeof(Nod));
        cin>>x;
        p->inf=x;
        last->next=p;
        last=p;

    }
        Nod*p=first;
    for(int i = 0 ; i <= n ; i ++)
    {
        cout<<p->inf<<" ";
        p=p->next;

    }



}
