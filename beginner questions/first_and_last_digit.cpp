#include <bits/stdc++.h>
using namespace std;

int first_and_last(string s){
    int l = int(s.size());
    return ((s[0] - '0') + (s[l-1] - '0'));
}

int main()
{
    int T;
    scanf("%d", &T);
    while(T--){
        string s;
        cin >> s;
        int ans = first_and_last(s);
        printf("%d\n", ans);
    }
    return 0;
}
