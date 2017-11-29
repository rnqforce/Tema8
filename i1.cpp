#include<bits/stdc++.h>
using namespace std;
struct stud{
      int age;
      char name[25];
};
int main()
{
    int n;
    cin>>n;
    stud *p;
    p=(stud*)malloc(n*sizeof(stud));

    for(int i = 0 ; i < n ; i ++)
    {
        cin>>(p+i)->age>>(p+i)->name;
    }
    for(int i = 0 ; i < n ; i ++)
    {
        cout<<(p+i)->age<<" "<<(p+i)->name<<'\n';
    }

}
