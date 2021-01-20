#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
  int tmpAge; 
  string tmpName;
  vector<int> age;
  vector<string> name;

  while (cin >> tmpName >> tmpAge) {
    name.push_back(tmpName);
    age.push_back(tmpAge);
  }

  for (int i = 0; i < age.size()-1; i++) {
    int minIdx = i;
    for (int j = i + 1; j < age.size(); j++) 
      if (age[j] < age[minIdx]) minIdx = j;
    
    if (minIdx != i) {
      swap(age[i], age[minIdx]);
      swap(name[i], name[minIdx]);
    }
  }

  for (int i = 0; i < age.size(); i++) 
    cout << name[i] << " " << age[i] << endl;


  return 0;
}
