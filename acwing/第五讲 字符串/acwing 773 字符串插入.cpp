#include <cstdio>
#include <cstring>
//#include <iostream>
using namespace std;
int main()
{
    char str[11],substr[4];
    //char str1[10],str2[10];
    while(scanf("%s %s",&str,&substr)!=EOF)
    {
        int i,max=0;
        //��λ����ַ�
        for(i=1;i<strlen(str);i++)
        {
            if(str[i]>str[max])
            {
                //����ַ���λ��
                max=i;
            }
            //printf("%d",max);
        }
        for(i=0;i<=max;i++)
        {
            printf("%c",str[i]);
        }
        // for(i=0;i<strlen(substr);i++)
        // {
             printf("%s",substr);
        // }
        for(i=max+1;i<strlen(str);i++)
        {
            printf("%c",str[i]);
        }
        printf("\n");
    }
    return 0;
}
