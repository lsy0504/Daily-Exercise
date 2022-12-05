#include<iostream>
#include<cstdio>
using namespace std;
int main(){
    double a,b,c;
    cin>>a>>b>>c;
    printf("TRIANGULO: %.3f\n",a*c*(1/2.0));
    printf("CIRCULO: %.3f\n",c*c*3.14159);
    printf("TRAPEZIO: %.3f\n",(a+b)*c/2.0);
    printf("QUADRADO: %.3f\n",b*b);
    printf("RETANGULO: %.3f\n",a*b);
    return 0;
}