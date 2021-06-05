#include <iostream>

using namespace std;

#define MONDAY 1
#define TUESDAY 2
#define WEDNESDAY 3
#define THURSDAY 4
#define FRIDAY 5
#define SATURDAY 6
#define SUNDAY 7
#define INVITE cout << "Enter number of day: ";
#define ERROR cout << "Incorrect input!";
#define PRINT(arg) cout << #arg; break;

int main() {
  int day;
  INVITE
  cin >> day;
  switch (day) {
    case MONDAY: PRINT(MONDAY)
    case TUESDAY: PRINT(TUESDAY)
    case WEDNESDAY: PRINT(WEDNESDAY)
    case THURSDAY: PRINT(THURSDAY)
    case FRIDAY: PRINT(FRIDAY)
    case SATURDAY: PRINT(SATURDAY)
    case SUNDAY: PRINT(SAUNDAY)
    default: ERROR
  }
  return 0;
}
