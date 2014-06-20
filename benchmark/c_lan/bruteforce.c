#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

// Password (Number)
#define PASSWORD "PASSWD"

// Length of password
#define PASSLENGTH 6

// "0" of ASCII
#define ASCII_0 48 
#define ASCII_Z 90 
// Measuring function
void brute_force() {
	char estimated[PASSLENGTH + 1];
	for (estimated[0] = ASCII_0; estimated[0] <= ASCII_Z; estimated[0] += 1) {
		for (estimated[1] = ASCII_0; estimated[1] <= ASCII_Z; estimated[1] += 1) {
			for (estimated[2] = ASCII_0; estimated[2] <= ASCII_Z; estimated[2] += 1) {
				for (estimated[3] = ASCII_0; estimated[3] <= ASCII_Z; estimated[3] += 1) {
					for (estimated[4] = ASCII_0; estimated[4] <= ASCII_Z; estimated[4] += 1) {
						for (estimated[5] = ASCII_0; estimated[5] <= ASCII_Z; estimated[5] += 1) {
							// printf("ESTIMATE => %s\n", estimated);
							if (strncmp(estimated, PASSWORD, PASSLENGTH) == 0) {
								printf("PASSWORD => %s\n", estimated);
								return;
							}
						}
					}
				}
			}
		}
	}
	printf("Cannot crack...\n");
	return;
}

int main() {
	clock_t start, stop;
	double diff;

	start = clock();
	brute_force();
	stop = clock();

	diff = (double)(stop - start) / CLOCKS_PER_SEC;
	printf("clock 関数 で計測: %.3f[sec]\n", diff);

	return 0;
}
