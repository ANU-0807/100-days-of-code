//Q10. Write a program to input time in seconds and convert it to hours:minutes: seconds format.
#include <stdio.h>
int main()
{
int time, hr, min, sec;
printf("Enter the time in seconds:");
scanf("%d", &time);

hr = time/3600;
min = (time% 3600)/60;
sec= time%60;

printf("The time in hr:min:sec is %d:%d:%d\n", hr, min, sec);
return 0;
}

