#include <iostream>
#include <time.h>
using namespace std;
void sleepcp(int milli) {
   // Cross-platform sleep function
   clock_t end_time;
   end_time = clock() + milli * CLOCKS_PER_SEC/1000;
   while (clock() < end_time) {
      //blank loop for waiting
   }
}
int main() {
   cout << "Staring counter for 7 seconds (7000 Milliseconds)" << endl;
   sleepcp(7000);
   cout << "Timer end" << endl;
}
