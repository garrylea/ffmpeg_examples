#include <stdio.h>
#include <libavutil/log.h>


int main(int argc, char *argv[])
{
    av_set_log_level(AV_LOG_DEBUG);

    av_log(NULL, AV_LOG_DEBUG, "hello, world!\n");

    return 0;
}
