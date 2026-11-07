#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <stdio.h>

using namespace std;
string elem[1000];
int amount[1000];

bool Pred(string a, string b) {
  return a < b;
}

class Person {
  public: Person(string name, int age) {
    this -> Name = name;
    this -> Age = age;
  }

  string Name;
  int Age;

};

int main() {
  vector < Person > people;
  string name;
  int age;
  // inserting class elements into vector
  while (cin >> name >> age) {

    people.push_back(Person(name, age));
  }

  //putting shortest names in array
  string arrstr[10000];
  int k = 0;
  for (auto ele: people) {
    bool ind = true;
    for (auto elu: people)
      if (ele.Name.length() > elu.Name.length()) {
        ind = false;

      }
    if (ind) {
      arrstr[k] = ele.Name;
      k++;
    }
  }
  // putting shortest names into another array(array2 for example) and putting their accurances into int type array
  int c = 0;
  for (int i = 0; i < k; i++) {
    int b = 0;
    for (int j = 0; j < k; j++) {
      if (arrstr[i] == arrstr[j]) {
        elem[c] = arrstr[i];
        amount[c] = ++b;
      }
    }
    c++;
  }

  // finding max value of amount array 
  int maxi = 0;
  for (int i = 1; i < k; i++) {
    if (amount[i] >= maxi) {
      maxi = amount[i];
    }
  }
  // puting 	array2 elements into another vector called next without any repititions 
  vector < string > next;
  bool indo;
  for (int i = 1; i < k; i++) {
    indo = true;
    for (auto element: next) {
      if (amount[i] != maxi || elem[i] == element) {
        indo = false;
      }

    }
    if (indo) {
      next.push_back(elem[i]);
    }
  }
  // sorting vector in the lexicographical order
  sort(next.begin(), next.end(), Pred);
  //finding matching names from next vector and people vector 
  //calculating each time avarage age of the frequently occured element  and outputting
  for (auto ele: next) {
    int sum = 0;
    int counter = 0;
    for (auto element: people) {
      if (ele == element.Name) {
        sum = sum + element.Age;
        counter++;
      }
    }
    float ans = sum / (float) counter;
    cout << ele;
    printf(" %.2f\n", ans);

  }

}