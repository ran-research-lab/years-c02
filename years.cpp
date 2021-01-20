/*
1. animarles a que usen el command line interface para input
2. animarles a que usen STL y sus algoritmos



*/



#include <iostream>
#include <string>

using namespace std;

int main() {
  int tmpAge, ctr = 0; 
  string tmpName;
  int age[100];
  string name[100];

  // Read the data
  while (cin >> tmpName >> tmpAge) {
    name[ctr] = tmpName;
    age[ctr] = tmpAge;
    ctr++;
  }
  
  // Selection sort, shamefully adapted for parallel arrays

  for (int i = 0; i < ctr - 1; i++) {
    // Determine the minimum out of the elements not yet sorted
    int minIdx = i;
    for (int j = i + 1; j < ctr; j++) 
      if (age[j] < age[minIdx]) minIdx = j;
    
    if (minIdx != i) {
      int dummyInt;
      string dummySt;
      dummyInt = age[i];
      age[i] = age[minIdx];
      age[minIdx] = dummyInt; 
      dummySt = name[i];
      name[i] = name[minIdx];
      name[minIdx] = dummySt;
    } 
  }

  for (int i = 0; i < ctr; i++) 
    cout << name[i] << " " << age[i] << endl;

  return 0;
}
