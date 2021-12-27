#include <bits/stdc++.h>
using namespace std;

int second_largest(int a, int b, int c){
    vector<int> v = {a, b, c};
    sort(v.begin(), v.end());
    return v[1];
}

int main()
{
    int T;
    scanf("%d", &T);
    while(T--){
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);
        int ans = second_largest(a,b,c);
        printf("%d\n", ans);
    }
    return 0;
}
