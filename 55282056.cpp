#include <iostream>
using namespace std;

int sum_digits(int& num){
    int sum = 0;
    string numstr = to_string(num);
    for(char c : numstr){
        string digit_str(1,c);
        sum += (stoi(digit_str));
    }
    return sum;
}

int main()
{
    int T;
    scanf("%d", &T);
    while(T--){
        int a;
        scanf("%d", &a);
        int accum = sum_digits(a);
        printf("%d\n", accum);
    }

    return 0;
}
