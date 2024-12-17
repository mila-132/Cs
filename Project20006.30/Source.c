#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_PLAYERS 300
#define MAX_ROOMS 501
#define MAX_NAME_LENGTH 17

typedef struct {
    int level;
    char name[MAX_NAME_LENGTH];
} Player;

int N, M;
Player players[MAX_PLAYERS];
int rooms[MAX_PLAYERS];
Player games[MAX_ROOMS][MAX_PLAYERS];
int room_sizes[MAX_ROOMS];

int compare(const void* a, const void* b) {
    Player* playerA = (Player*)a;
    Player* playerB = (Player*)b;
    return strcmp(playerA->name, playerB->name);
}

void inputPlayers() {
    scanf("%d %d", &N, &M);

    for (int i = 0; i < N; i++) {
        scanf("%d %s", &players[i].level, players[i].name);
    }
}

void processPlayerMatching() {
    int room_count = 0;
    rooms[room_count] = players[0].level;
    games[room_count][room_sizes[room_count]++] = players[0];

    for (int i = 1; i < N; i++) {
        int now_level = players[i].level;
        int flag = 1;

        for (int j = 0; j <= room_count; j++) {
            if (abs(rooms[j] - now_level) <= 10) {
                if (room_sizes[j] < M) {
                    games[j][room_sizes[j]++] = players[i];
                    flag = 0;
                    break;
                }
            }
        }

        if (flag) {
            room_count++;
            rooms[room_count] = now_level;
            games[room_count][room_sizes[room_count]++] = players[i];
        }
    }
}

void outputRoomsStatus() {
    for (int i = 0; i < MAX_ROOMS; i++) {
        if (room_sizes[i] > 0) {
            qsort(games[i], room_sizes[i], sizeof(Player), compare);

            if (room_sizes[i] == M) {
                printf("Started!\n");
            }
            else {
                printf("Waiting!\n");
            }

            for (int j = 0; j < room_sizes[i]; j++) {
                printf("%d %s\n", games[i][j].level, games[i][j].name);
            }
        }
    }
}

int main() {
    inputPlayers();

    processPlayerMatching();

    outputRoomsStatus();

    return 0;
}
