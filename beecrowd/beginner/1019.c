/*
 * Read an integer value, which is the duration in 
 * seconds of a certain event in a factory, and 
 * inform it expressed in hours:minutes:seconds.
 * Input
 * The input file contains an integer N.
 * Output
 * Print the read time in the input file (seconds) 
 * converted in hours:minutes:seconds like the following example.
 * ---------------------------------------------
 * 		Input Sample	|		Output Sample
 *  566					| 0:9:16
 *  1					| 0:0:1
 *  140153				| 38:55:53
 */
#include <stdio.h>
int main(void) {
    int durationInSeconds = 0;
    int hours = 0;
    int minutes = 0;
    int seconds = 0;
    scanf("%d", &durationInSeconds);
    hours = durationInSeconds / 3600;
    minutes = durationInSeconds % 3600 / 60;
    seconds = durationInSeconds % 60;
    printf("%d:%d:%d\n", hours, minutes, seconds);
    return 0;
}
