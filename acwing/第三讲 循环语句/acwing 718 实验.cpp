#include <cstdio>
using namespace std;
int main()
{
    int n,i,num,all_num=0;
    int c_num=0,r_num=0,f_num=0;
    float x,y,z;
    char ch;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d %c",&num,&ch);
        //printf("%c",ch);
        if(ch=='C')
        {
            c_num+=num;
        }else if(ch=='R')
        {
            r_num+=num;
        }else if(ch=='F')
        {
            f_num+=num;
        }
        all_num+=num;
    }
    x = 100.00*float(c_num)/float(all_num);
    y = 100.00*float(r_num)/float(all_num);
    z = 100.00*float(f_num)/float(all_num);
    printf("Total: %d animals\n",all_num);
    printf("Total coneys: %d\n",c_num);
    printf("Total rats: %d\n",r_num);
    printf("Total frogs: %d\n",f_num);
    printf("Percentage of coneys: %.2f %%\n",x);
    printf("Percentage of rats: %.2f %%\n",y);
    printf("Percentage of frogs: %.2f %%",z);
    return 0;
}
