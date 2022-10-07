#include <stdio.h>

struct complex
{
    double real;
    double imag;
};

struct complex complex_add(struct complex c1, struct complex c2);

int main(void) {
	struct complex c1= {1.0, 2.0};
    struct complex c2= {2.0, 3.0};

	struct complex c3;
	c3 = complex_add(c1, c2);
	printf("%f+%fi\n", c3.real,c3.imag);
	return 0;;
}

struct complex complex_add(struct complex c1, struct complex c2)
{
    struct complex result;

    result.real = c1.real + c2.real;
    result.imag = c1.imag + c2.imag;

    return result;
}