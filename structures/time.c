#include <stdio.h>

struct time {
    int hours;
    int minutes;
    int seconds;
};

int main(void)
{
    struct time time1, time2;

    printf("Time 1 (hours minute seconds): ");
    scanf("%d %d %d", &time1.hours, &time1.minutes, &time1.seconds);

    printf("Time 2 (hours minute seconds): ");
    scanf("%d %d %d", &time2.hours, &time2.minutes, &time2.seconds);

    int hours = time1.hours + time2.hours + ((time1.minutes + time2.minutes) / 60);
    int minutes = ((time1.minutes + time2.minutes) % 60) + (time1.seconds + time2.seconds) / 60;
    int seconds = (time1.seconds + time2.seconds) % 60;

    printf("%02d:%02d:%02d\n", hours, minutes, seconds);
    return 0;
}