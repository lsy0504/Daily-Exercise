#include <stdio.h>
int main()
{
    int i;
    double t1,t2;
    scanf("%d",&i);
    t1=i/1.2;
    t2=i/3.0+50.0;
    if(t1-t2==0.0)
    {
        printf("All");
    }
    else if(t1-t2<0.0)
    {
        printf("Walk");
    }
    else
    {
        printf("Bike");
    }
    return 0;
}
