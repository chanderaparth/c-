/* Structure within structure */

#include <stdio.h>
#include <conio.h>

int main() {

  struct date {
    int month;
    int day;
    int year;
  };

  struct time {
    int hour;
    int min;
    int sec;
  };

  struct date_and_time {
    struct date sdate;
    struct time stime;
  } event;

  clrscr();
  printf("Enter today's date (mm dd yyyy) : ");
  scanf("%d %d %d", &event.sdate.month, &event.sdate.day, &event.sdate.year);

  printf("Enter current time (hh mm ss) :");
  scanf("%d %d %d", &event.stime.hour, &event.stime.min, &event.stime.sec);

  clrscr();
  printf("Today's date is %d/%d/%d.\n\n", event.sdate.month, event.sdate.day, event.sdate.year);
  printf("Current time is %d:%d:%d.\n", event.stime.hour,event.stime.min, event.stime.sec);

  getch();
  return 0;
}