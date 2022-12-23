#include<bits/stdc++.h>
using namespace std;
int a,b,n; 
int main()
{
	scanf("%d%d%d",&a,&b,&n);
	for(int i=1;i<=n;i++) a%=b,a*=10;
	a/=b;
	printf("%d",a);
	return 0;
}
