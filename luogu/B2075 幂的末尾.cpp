#include<bits/stdc++.h>
using namespace std;
int a,b,res=1;//注意res应初始化为1
int main(){
	scanf("%d%d",&a,&b);
	for(int i=0;i<b;i++) {//需计算b次
		res*=a;
		res%=1000;//对1000取余
	}
	printf("%03d",res);//这里是用0补足三位输出
	return 0;
}
