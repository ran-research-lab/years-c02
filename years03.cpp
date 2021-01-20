#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
  int tmpAge; 
  string tmpName;
  vector< pair<int,string> > ageName;

  while (cin >> tmpName >> tmpAge) 
    ageName.push_back(pair<int,string>(tmpAge,tmpName));
  
  sort(ageName.begin(), ageName.end());

  for (int i = 0; i < ageName.size(); i++) 
    cout << ageName[i].first << " " << ageName[i].second << endl;


  return 0;
}
