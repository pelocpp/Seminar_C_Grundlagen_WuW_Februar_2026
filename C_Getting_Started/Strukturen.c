
#include <stdio.h>

// Uhrzeit

struct Time
{
    int hours;
    int minutes;
    int seconds;
};

void printTime(struct Time time)
{
    printf("Time: %02d:%02d:%02d\n",
        time.hours, time.minutes, time.seconds);
}

void resetTime(struct Time* time)
{
    //(*time).hours = 0;
    //(*time).minutes = 0;
    //(*time).seconds = 0;

    time -> hours = 0;
    time -> minutes = 0;
    time -> seconds = 0;
}


void structs()
{
    struct Time now;

    now.hours = 16;
    now.minutes = 31;
    now.seconds = 2;

    printTime(now);

    //printf("%02d:%02d:%02d",
    //    now.hours, now.minutes, now.seconds);

    struct Time ende;

    ende.hours = 17;
    ende.minutes = 0;
    ende.seconds = 0;

    printTime(ende);

    resetTime( & now);

    printTime(now);

}