#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	const double speed = 1.0;
	const unsigned repeat_max = 50;

	double dt = 1.0;
	double time = 0.0;
	double dist = 0.0;

	for (unsigned i = 0; i < repeat_max; ++i) {
		dist += speed * dt;
		time += dt;

		printf("Elapsed time = %.10fs, Distance = %.10fm\n", time, dist);

		dt *= 0.5;
	}

	double dist_arch = 0.0;
	double dist_turtle = 0.0;
	double speed_arch = 10.0;
	double spped_turtle = 0.0001;
	double dt2 = 0.01;
	unsigned i;

	printf("Time = %fs, dt = %fs, Archilleus = %fm, turtle = %fm\n",
		time, dist, dist_arch, dist_turtle);

	for (i = 0; i < repeat_max; ++i) {
		dist_arch += speed_arch * dt2;
		dist_turtle += spped_turtle * dt2;
		time += dt2;

		printf("Time = %fs, dt = %fs, Archilleus = %fm, turtle = %fm\n",
			time, dist, dist_arch, dist_turtle);

		dt2 *= 0.5;
	}
	
	return 0;
}