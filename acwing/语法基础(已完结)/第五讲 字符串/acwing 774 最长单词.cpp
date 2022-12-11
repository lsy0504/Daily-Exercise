#include <iostream>
#include <string>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    int max = 0;
    string maxs;
    for (int i = 0; i < s.size(); i++){
        int j = i;
        int cnt = 0;
        string a;

        for (j = i; s[j] != '.' && s[j] != ' '; j ++){
            a = a + s[j];
            //¼ÇÂ¼³¤¶È 
            cnt++;
        }
        if (cnt > max) {
            max = cnt;
            maxs = a;
        }
    }
    cout << maxs << endl;

    return 0;
}
