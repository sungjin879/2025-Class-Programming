#include <stdio.h>

#define DT 0.01
#define G 9.81
#define MAX_STEP 10000

void step(double pos[2], double vel[2]) {
    vel[1] = vel[1] - G * DT;
    pos[0] = pos[0] + vel[0] * DT;
    pos[1] = pos[1] + vel[1] * DT;
}

int main(void) {
    double pos[2] = { 0.0, 0.0 };
    double vel[2];
    double t = 0.0;
    double maxH = 0.0;
    double range = 0.0;
    int i;

    double sin75 = 0.965925826;
    double cos75 = 0.258819045;

    vel[0] = 15.0 * cos75;
    vel[1] = 15.0 * sin75;

    for (i = 0; i < MAX_STEP; i++) {
        if (pos[1] < 0.0) break;

        step(pos, vel);
        t += DT;

        if (pos[1] > maxH) maxH = pos[1];
        range = pos[0];
    }

    printf("체공시간: %.3f s\n", t);
    printf("최고높이: %.3f m\n", maxH);
    printf("수평사거리: %.3f m\n", range);

    return 0;
}
