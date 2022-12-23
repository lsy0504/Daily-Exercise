#include <iostream>
using namespace std;

int main() {
    int m, n, cnt;
    cin >> m >> n; // 读入药品总量和取药的人数
    cnt = 0; // 初始化取药失败的人数
    while(n--) {
        int a;
        cin >> a; // 读入病人希望取走的药品数量

        if(m-a>=0)
        {
            m-=a;  // 更新药品数量
        }else
        {
            cnt++;
        }
    }
    cout << cnt << endl; // 输出取药失败的人数
    return 0;
}

