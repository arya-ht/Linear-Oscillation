#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*
 *created by Arya HajiTaheri
 */
#define PI 3.14159265358979323846
int main(void) {
	double omega = 0.01, dt = 0.01, posX = 10.0, velocity = 0.0, time = 0.0;
	double gravity, length;
	double tmpx = 10.0, tmpvelocity = 0.0;

	while (time < (4 * PI / omega)) {
		posX = tmpx + dt*tmpvelocity;
		velocity = tmpvelocity - pow(omega, 2)*tmpx;
		tmpx = posX;
		tmpvelocity = velocity;
		time += dt;
	}

	printf("time= %lf posX= %lf velocity= %lf\n", time, posX, velocity);
	printf("\n");
	system("pause");
	return 0;
}
