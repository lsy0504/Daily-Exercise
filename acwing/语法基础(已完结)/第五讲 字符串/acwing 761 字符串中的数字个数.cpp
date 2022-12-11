#include <cstdio>
#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    string a;
    int i,count=0;
    getline(cin,a);
    for(i=0;i<a.size();i++)
    {
        if(a[i]>='0'&&a[i]<='9')
        {
            count++;
        }
    }
    printf("%d",count);
    return 0;
}
