#include <iostream>
using namespace std;

int main() {
    int m, n, cnt;
    cin >> m >> n; // ����ҩƷ������ȡҩ������
    cnt = 0; // ��ʼ��ȡҩʧ�ܵ�����
    while(n--) {
        int a;
        cin >> a; // ���벡��ϣ��ȡ�ߵ�ҩƷ����

        if(m-a>=0)
        {
            m-=a;  // ����ҩƷ����
        }else
        {
            cnt++;
        }
    }
    cout << cnt << endl; // ���ȡҩʧ�ܵ�����
    return 0;
}

