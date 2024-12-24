#include <stdio.h>
#include <ncurses.h>
#include "colour.h"
#include <unistd.h>
#include <signal.h>
#include <string.h>
#include <stdlib.h>
struct sigaction old_action;
bool STOP = false;
  void codetoexec(int signal) {
    printf("%sHave a happy 2025 from RCS\n", reset);
    STOP = true;
  }
int main() {
initscr();
     struct sigaction action;
    memset(&action, 0, sizeof(action));
        action.sa_handler = &codetoexec;
    sigaction(SIGINT, &action, &old_action);
while (main) {
          if (STOP) {
            break;
        }
	  clear();
refresh();
printf("%sMerry %sChristmas\n", RED, GRN);
clear();
refresh();
printf("%sMerry %sChristmas\n", GRN, BLU);
clear();
refresh();
printf("%sMerry %sChristmas\n", BLU, YEL);
clear();
refresh();
 printf("%sMerry %sChristmas\n", YEL, RED);
clear();
refresh();
printf("%sMerry %sChristmas\n", RED, BLU);
clear();
refresh();
printf("%sMerry %sChristmas\n", GRN, YEL);
}
}
