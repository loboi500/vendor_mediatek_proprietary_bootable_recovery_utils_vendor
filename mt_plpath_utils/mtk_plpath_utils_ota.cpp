#include <stdint.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main(void) {
    char cmdbuf[128] = {0,};
    int res = 0;
    snprintf(cmdbuf, sizeof(cmdbuf), "/system/bin/mtk_plpath_utils");
    res = system(cmdbuf);
    printf("%s %d\n", cmdbuf, res);
    return res;
}
