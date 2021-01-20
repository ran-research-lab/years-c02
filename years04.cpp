#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
  int tmpAge; 
  string tmpName;
  vector< pair<string,int> > ageName;

  while (cin >> tmpName >> tmpAge) 
    ageName.push_back(pair<string,int>(tmpName,tmpAge));
  
  sort(ageName.begin(), ageName.end());

  for (auto e: ageName) 
    cout << e.first << " " << e.second << endl;


  return 0;
}
