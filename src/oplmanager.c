#include <stdio.h>
#include <string.h>

#define HELP_SHORT "-h"
#define HELP_LONG "--help"

void help() {
    printf("Usage: oplmanager [OPTION]... [-OPL] OPL PATH\n\n");
    printf("Mandatory arguments to long options are mandatory for short options too.\n");
    printf("      --OPL                    opl path where are your OPL Structure Folders\n");
    printf("  -c, --cover                  download all game covers\n");
    printf("  -b, --backcover              downlaod all game back covers\n");
    printf("  -i, --icon                   download all game disc images\n");
    printf("  -l, --label                  download all game labels\n");
    printf("you can specify more than one option to download more arts at the same time.\n");
    printf("  -n, --no-clobber             do not overwrite an existing file\n");
    printf("  -v, --verbose                explain what is being done\n");
    printf("  -h, --help                   display this help and exit\n");
}

int main(int argc, char *argv[])
{
    if (argc == 1 || (argc == 2 && strcmp(argv[1], HELP_LONG) == 0 || strcmp(argv[1], HELP_SHORT) == 0)) {
        help();
        return 0;
    } 
}