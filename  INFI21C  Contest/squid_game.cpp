
#include <bits/stdc++.h>
using namespace std;
/* Passed, Time: 0.06 sec */ 


//returns the most prize money possibe given an array of money won for player i [A], and the total number of players [players]
int squid_game(vector<int> A){
    /*Idea: we would win the most money, if the person worth the least wins.
    Proof: given some sorted amounts of money, [m1, m2, .. mx] where mi < mi+1, then the greatest total money will always be sum(m2..mx). 
            Say that the answer is not that sum. That means that m1 > some value within m2..mx. 
            But then, since the array is sorted, m1 wouldnt be the first item in the array - contradiction. 
    Initialize
        int sum
    Steps
        1. Sort the vector O(nlogn) average and worst case
        2. Sum up everything besides the first element (On-1) ~ O(n)
        3. Return that sum
    */
    int sum = 0;
    sort(A.begin(), A.end());
    for(int i = 1; i < int(A.size()); i++){
        sum += A[i];
    }
    return sum;
}

int main()
{
    int T;
    scanf("%d", &T);
    while(T--){
        //take in the number of players
        int players;
        scanf("%d", &players);
        
        //take in the array A
        vector<int> A;
        while(players--){
            int ai;
            scanf("%d", &ai);
            A.push_back(ai);
        }
        int ans = squid_game(A);
        printf("%d\n", ans);
    }

    return 0;
}
