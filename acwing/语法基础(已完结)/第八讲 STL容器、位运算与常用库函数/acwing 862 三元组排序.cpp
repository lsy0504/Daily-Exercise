#include <iostream>
#include <algorithm>
#define N 10040
using namespace std;
class tup{
    public:
    int n;
    double f;
    string s;
    
    //�����������������������еĳ�Ա���бȽ�
    bool operator<(const tup &t) const
    {
        return n<t.n;
    }
};

int main()
{
    tup p[N];
    int m;
    cin>>m;
    for(int i=0;i<m;i++)
    {
        cin>>p[i].n>>p[i].f>>p[i].s;
    }
    //ʹalgorithm�е������㷨
    sort(p,p+m);
    
        for(int i=0;i<m;i++)
    {
        printf("%d %.2lf %s\n", p[i].n, p[i].f, p[i].s.c_str());
    }
    return 0;
}
