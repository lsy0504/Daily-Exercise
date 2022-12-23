#include <stdio.h>
int main()
{
    long int a;
    char c;
    int price;
    scanf("%ld %c",&a,&c);
    price=8;
    if(a<=1000)
    {
        if(c=='n')
        {
            printf("%d",price);
        }else
        {
            printf("%d",price+5);
        }
    }
    else if(a>1000)
    {
        
        if((a-1000)%500==0)
        {
            price+=((a-1000)/500)*4;
        }else
        {
            price+=(((a-1000)/500)+1)*4;
        }
        if(c=='n')
        {
            printf("%d",price);
        }else
        {
            printf("%d",price+5);
        }
    }
    return 0;
}
