#include <stdio.h>
int main() {
    int raw, time, dd, hh, mm, ss;
    scanf("%d", &time);
    raw = time;
    dd = time / 86400;
    time = time % 86400;
    hh = time / 3600;
    time = time % 3600;
    mm = time / 60;
    time = time % 60;
    ss = time;
    printf("%d s = %d d %d h %d m %d s", raw, dd, hh, mm, ss);
    return 0;
}