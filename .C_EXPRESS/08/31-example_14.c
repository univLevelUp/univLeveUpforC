#include <stdio.h>
#include <math.h>

double get_distance(double x1, double y1, double x2, double y2) {
	return sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
}
int main(void) {
	double a = 0, b = 0, c = 0, d = 0;
	printf("frist x, y: ");
	scanf("%lf %lf", &a , &b);
	printf("scenode x, y: ");
	scanf("%lf %lf", &c, &d);
	printf("distance: %f", get_distance(a, b, c, d));
	return 0;
}