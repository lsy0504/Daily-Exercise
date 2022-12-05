#include <cstdio>
using namespace std;
int main()
{
    float a,b,c,d,avg;
    scanf("%f%f%f%f",&a,&b,&c,&d);
    float avg2;
    scanf("%f",&avg2);
    avg = (a*2.0+b*3.0+c*4.0+d)/10.0;
    if(avg>=5.0&&avg<7.0)
    {
        printf("Media: %.1f\n",avg);
        printf("Aluno em exame.\n");
        printf("Nota do exame: %.1f\n",avg2);
        avg = (avg+avg2)/2;
        if(avg>=5.0) printf("Aluno aprovado.\n");
        else printf("Aluno reprovado.\n");
        printf("Media final:%.1f",avg);
    }else if(avg<5.0) {
        printf("Media: %.1f",avg);
        printf("Aluno reprovado.\n");
    }else if(avg>=7.0) {
        printf("Media: %.1f",avg);
        printf("Aluno aprovado.");
    } 

}