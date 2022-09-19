#include <stdio.h>

void getSensorData(double * p);

int main(void)
{
    double sensorData[3];
    getSensorData(sensorData);

    printf("Distance between left sensor and obstacle: %lf\n", sensorData[0]);
    printf("Distance between intermediate sensor and obstacle: %lf\n", sensorData[1]);
    printf("Distance between right sensor and obstacle: %lf\n", sensorData[2]);
    return 0;
}
void getSensorData(double * p)
{
    p[0] = rand() % 100;
    p[1] = rand() % 100;
    p[2] = rand() % 100;
}