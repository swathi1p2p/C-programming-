#include <stdio.h>

struct player {
    char name[50];
    int runs;
};

int main() {
    int num_players, total_runs = 0;
    printf("Enter the number of players: ");
    scanf("%d", &num_players);
    struct player players[num_players];

    for(int i=0; i<num_players; i++) {
        printf("Enter name and runs of player %d: ", i+1);
        scanf("%s %d", players[i].name, &players[i].runs);
        total_runs += players[i].runs;
    }

    printf("The total runs scored by the team is: %d", total_runs);
    return 0;
}