#include <stdio.h>

extern test_detector(char *datacfg, char *cfgfile, char *weightfile, char *filename, float thresh, float hier_thresh, char *outfile, int fullscreen);

int main(int argc, char **argv)
{
    if(argc < 2){
        fprintf(stderr, "usage: %s <function>\n", argv[0]);
        return 0;
    }
    float thresh = 0.24;
    char *filename =  argv[1];
    char *outfile = 0;
    int fullscreen = 0;
    test_detector("cfg/coco.data", "cfg/yolo.cfg", "yolo.weights", filename, thresh, .5, outfile, fullscreen);
    return 0;
}

