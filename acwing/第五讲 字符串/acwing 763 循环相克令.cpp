#include <cstdio>
#include <string>
#include <iostream>
using namespace std;
int main()
{
    int n;
    string p1,p2;
    scanf("%d",&n);
    while(n--)
    {
        cin>>p1>>p2;
        if((p1=="Hunter"&&p2=="Gun")||(p1=="Gun"&&p2=="Bear")||(p1=="Bear"&&p2=="Hunter"))
        {
            printf("Player1\n");
        }
        else if((p1=="Gun"&&p2=="Hunter")||(p1=="Bear"&&p2=="Gun")||(p1=="Hunter"&&p2=="Bear"))
        {
            printf("Player2\n");
        }
        else if((p1=="Gun"&&p2=="Gun")||(p1=="Hunter"&&p2=="Hunter")||(p1=="Bear"&&p2=="Bear"))
        {
            printf("Tie\n");
        }
    }
    return 0;
}
