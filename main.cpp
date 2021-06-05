#include <iostream>
#include <vector>

using namespace std;

#define GO_THROUGH(size) for (int i = 0; i < (size); i++)
#define OU(b) ((b) ? "overfilled" : "unfilled")

void print(bool b, vector<int> v) {
  cout << "Numbers of " << OU(b) << " wagons: ";
  GO_THROUGH(v.size()) cout << v[i] << " ";
  cout << endl;
}

void scan (vector<int> &e, vector<int> &f) {
  int passengers;
  GO_THROUGH(10) {
    cout << "Enter number of people in car " << i + 1 << ": ";
    cin >> passengers;
    if (passengers > 20) f.push_back(i + 1);
    if (passengers < 20) e.push_back(i + 1);
  }
}

int main() {
  vector<int> empty, full;
  scan(empty,full);
  print(true, full);
  print(false, empty);
  return 0;
}
