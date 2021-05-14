#include <stdio.h>

int main () {
    int h1, h2, m1, m2, ti, tf;

    while (1) { //repete infinitamente
    	scanf ("%d %d %d %d", &h1, &m1, &h2, &m2);

    	if (h1==0 && h2==0 && m1==0 && m2==0) {
    		break;
    	}

        ti = (h1 * 60) + m1;
        tf = (h2 * 60) + m2;

        if (ti < tf) {
        	printf ("%i\n", tf-ti);
        } else {
        	printf ("%i\n", 24*60+(tf-ti));
        }
    }

    return 0;
}
