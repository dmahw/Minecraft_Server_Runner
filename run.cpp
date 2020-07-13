#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <iostream.h>

struct ServerData {
    int id,
    char *msg
    pthread_mutex_t msgLock
}

struct AutosaveData {
    int id,
}

int main (int argc, char **argv) {
    printf("MAIN >>> Initializing processes...\n");

    pthread_t server;
    pthread_t autosave;

    struct ServerData serverData;
    struct AutosaveData autosaveData;

    if (pthread_mutex_init(&serverData.msgLock, NULL) != 0) {
        printf("MAIN >>> Failed to initialize: serverData.msgLock")
        return 1
    }

    
    // thread that constantly loops and does a command every so often
    // run server and pipe standard input and stuff
}