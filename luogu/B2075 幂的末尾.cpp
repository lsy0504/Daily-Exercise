#include<bits/stdc++.h>
using namespace std;
int a,b,res=1;//ע��resӦ��ʼ��Ϊ1
int main(){
	scanf("%d%d",&a,&b);
	for(int i=0;i<b;i++) {//�����b��
		res*=a;
		res%=1000;//��1000ȡ��
	}
	printf("%03d",res);//��������0������λ���
	return 0;
}
