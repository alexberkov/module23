#include <iostream>

using namespace std;

//#define SPRING 1
#define SUMMER 1
//#define AUTUMN 1
//#define WINTER 1



#if (SPRING)
int main() {
  cout << "SPRING";
  return 0;
}
#endif
#if (SUMMER)
int main() {
  cout << "SUMMER";
  return 0;
}
#endif
#if (AUTUMN)
int main() {
  cout << "AUTUMN";
  return 0;
}
#endif
#if (WINTER)
int main() {
  cout << "WINTER";
  return 0;
}
#endif
