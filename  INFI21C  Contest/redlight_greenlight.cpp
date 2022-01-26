/*     Passe, Time: 0.04sec     */
#include <bits/stdc++.h>
using namespace std;


int redlight_greenlight(int K, vector<int> H){
    /*
    Idea: Need to eliminate all players i, such that Hi > K
    Initialize
        int counter = 0;
    Steps
        Iterate thru H.
            if Height > K then increment counter
        return counter
    */
    int counter = 0;
    for(int h : H){
        if (h > K) counter++;
    }
    return counter;

}

int main()
{
    int T;
    scanf("%d", &T);
    while(T--){
        int N, K;
        vector<int> H;
        
        scanf("%d %d", &N, &K);
        while(N--){
            int hi;
            scanf("%d", &hi);
            H.push_back(hi);
        }
        int ans = redlight_greenlight(K, H);
        printf("%d\n", ans);
    }

    return 0;
}
