#include <signal.h>
#include <unistd.h>

#include <cstdlib>
#include <iostream>

using namespace std;

/**
 * @brief Function that handles the signal callback SIGINT which indicates the
 * pressing of Control-C
 *
 * @param signum - The Signal interrupt received
 */
void signal_callback_handler(int signum) {
  cout << "You have pressed Control-C" << endl;
}
int main() {
  // Register signal and signal handler
  signal(SIGINT, signal_callback_handler);
  while (true) {
    sleep(1);
  }
  return EXIT_SUCCESS;
}