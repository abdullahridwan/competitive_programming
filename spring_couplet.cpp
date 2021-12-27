#include <iostream>
#include <string>
#include <vector>
using namespace std;


bool isInverse(char c1, char c2){
    vector<char> level = {'1', '2'};
    vector<char> oblique = {'3', '4'};
    if(find(level.begin(), level.end(), c1) != level.end() && find(oblique.begin(), oblique.end(), c2) != oblique.end()){
        return true;
    }
    if(find(level.begin(), level.end(), c2) != level.end() && find(oblique.begin(), oblique.end(), c1) != oblique.end()){
        return true;
    }
    return false;
}

bool tonal(vector<string>& in1, vector<string> in2){
  for(int i=0; i<int(in1.size()); i++){
      char c1 = in1[i].back();
      char c2 = in2[i].back();
      if(i == (int(in1.size())-1) && (c1 == '1' || c1 == '2')){
          return false;
      }
      if(!isInverse(c1,c2)){
          return false;
      }
  }
  return true;
}


int main() {
  int T;
  scanf("%d", &T);
  while(T--){
      int num;
      scanf("%d", &num);
      vector<string> s1;
      vector<string> s2;
      for(int i = 0; i<num; i++){
          string x;
          cin >> x;
          s1.push_back(x);
      }
      for(int i = 0; i<num; i++){
          string x;
          cin >> x;
          s2.push_back(x);
      }
      bool ans = tonal(s1,s2);
      string sans = (ans == 1) ? "YES" : "NO";
      cout << sans << endl;
  }



  return 0;
} 

