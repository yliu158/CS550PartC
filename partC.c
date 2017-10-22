truct timeval gtodTimes[N];
char *procClockTimes[N];

...
/* allocate memory for character buffers HERE before you use them */

fd = open("/dev/mytime", O_RDONLY);
/* check for errors HERE */

for( i=0; i < N; i++)
{
	gettimeofday(&gtodTimes[i], 0);
	bytes_read = read(fd, procClockTime[i], MAX_LENGTH);
	/* check for errors HERE */
}

close(fd);

for(i=0; i < N; i++) {
	printf("...", gtodTimes[i], procClockTime[i]);
	/* fix the output format appropriately in the above line */
}
