#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;
string get(vector<int>& v) {
  sort(v.begin(), v.end());
  string n;
  for (size_t i = 0; i < v.size(); ++i)
    n += to_string(v[i]);
  return n;
}

int main() {
  map<string, int> dict;

  int n = 0;
  scanf("%d", &n);

  int students = 0;
  int popular = 1;
  while (n--) {
    vector<int> v;
    for (int i = 0; i < 5; ++i) {
      int c = 0;
      scanf("%d", &c);
      v.push_back(c);
    }

    const string course = get(v);
    ++dict[course];

    if (dict[course] == popular) {
      students += dict[course];
    } else if (dict[course] > popular) {
      popular = dict[course];
      students = dict[course];
    }
  }

  printf("%d\n", students);

  return 0;
}