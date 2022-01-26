#include <iostream>
using namespace std;


int odd_repeat(int n, int k, int s){
    int sum = 0;
    int i = 1;
    while(n--){
        sum += i;
        i += 2;
    }
    k--;
    return int((s - sum)/k);
}

int main()
{
    int T;
    scanf("%d", &T);
    while(T--){
        int a,b,c;
        scanf("%d %d %d",&a, &b, &c);
        int ans = odd_repeat(a,b,c);
        printf("%d\n", ans);
    }
}

