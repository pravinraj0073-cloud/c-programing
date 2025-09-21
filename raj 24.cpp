#include <stdio.h>
#include <time.h>

int main() {
    time_t raw_time;
    struct tm *current_time;

    // Get the current time as a time_t object
    time(&raw_time);

    // Convert the time_t object to a local time structure
    current_time = localtime(&raw_time);

    // Print the time in HH:MM:SS format
    printf("Current time: %02d:%02d:%02d\n", 
           current_time->tm_hour, 
           current_time->tm_min, 
           current_time->tm_sec);

    return 0;
}
