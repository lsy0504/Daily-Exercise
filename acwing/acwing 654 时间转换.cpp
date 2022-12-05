#include<iostream>
#include<cstdio>
using namespace std;
int main(){
    int time,hour,minute,second;
    cin>>time;
    hour = time/3600;
    time = time%3600;
    minute = time/60;
    time = time%60;
    second = time;
    printf("%d:%d:%d",hour,minute,second);
}