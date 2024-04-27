#include <string>
#include <iostream>

#include "player.h"

int main()
{
    avmedia::win::Player player;

    player.create("https://gstreamer.freedesktop.org/data/media/sintel_trailer-480p.webm");
    player.start();

    getchar();

    return 0;
}