#ifndef GAME_H
#define GAME_H

#define MAX_PLAYERS 300
#define MAX_ROOMS 501
#define MAX_NAME_LENGTH 17

typedef struct {
    int level;
    char name[MAX_NAME_LENGTH];
} Player;

extern int N, M;
extern Player players[MAX_PLAYERS];
extern int rooms[MAX_PLAYERS];
extern Player games[MAX_ROOMS][MAX_PLAYERS];
extern int room_sizes[MAX_ROOMS];
extern int room_count;

int compare(const void* a, const void* b);
void process_players();

#endif 
