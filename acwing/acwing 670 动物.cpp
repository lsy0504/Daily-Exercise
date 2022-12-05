#include <cstdio>
#include <string>
using namespace std;
int main()
{
    char name[15];
    scanf("%s",&name);
    if(name[0]=='v'){
        scanf("%s",&name);
        if(name[0]=='a'){
            scanf("%s",&name);
            if(name[0]=='c'){
                printf("aguia");
            }else{
                printf("pomba");
            }
        }else{
            scanf("%s",&name);
            if(name[0]=='o'){
                printf("homem");
            }else{
                printf("vaca");
            }
        }
    }else if(name[0]!='v'){
        scanf("%s",&name);
        if(name[0]=='i'){
            scanf("%s",&name);
            if(name[2]=='m'){
                printf("pulga");
            }else{
                printf("lagarta");
            }
        }else{
            scanf("%s",&name);
            if(name[0]=='h'){
                printf("sanguessuga");
            }else{
                printf("minhoca");
            }
        }
    }
    return 0;
}