#include <iostream>
#include <algorithm>
using namespace std;

void reverse_number(int T){
    while(T--){
        //get the number
        int b;
        scanf("%d", &b);
        
        //turn it to a string
        string s = to_string(b);
        
        //reverse the string 
        reverse(s.begin(), s.end());
        
        //turn it back to an int and print
        cout << stoi(s) << "\n";
    }
}

int main() {
	int T;
	scanf("%d", &T);
	reverse_number(T);
	
	return 0;
}
