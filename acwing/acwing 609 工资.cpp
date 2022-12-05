#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
    int number,time;
    float salary;
    cin>>number;
    cin>>time;
    cin>>salary;
    printf("NUMBER = %d\n",number);
    printf("SALARY = U$ %.2f",salary*time);
    return 0;
}
