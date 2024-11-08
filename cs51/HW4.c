#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct node {
    int goals;
    double minutes;
    struct node* next;
} nodeType;


int main() {
    nodeType *first = NULL;
    nodeType *temp = NULL;
    nodeType *p = NULL;
    int game_goals;
    double game_minutes;

    printf("Enter the number of goals allowed in the current game, or enter -1 to quit: ");
    scanf("%d", &game_goals);

    while (game_goals != -1) {
        printf("Enter minutes played: ");
        scanf("%d", &game_minutes);
        temp = (nodeType*)malloc(sizeof(nodeType));
        temp -> goals = game_goals;
        temp -> minutes = game_minutes;
        temp -> next = NULL;
        if (first == NULL) {
            first = temp;
        } else {
            p = first;
            while (p->next != NULL) { p = p->next; }
            p -> next = temp;
        }
        printf("Enter the number of goals allowed in the current game, or enter -1 to quit: ");
        scanf("%d", &game_goals);
        }
    p = first;
    int game_count = 1;
    double goalTot = 0;
    double minTot = 0;
    printf("\nGame\tGoals\tMinutes\n");
    printf("%d\t%d\t%d\n", game_count, p -> goals, p -> minutes );
    goalTot += p -> goals;
    minTot += p -> minutes;

    while (p -> next != NULL) {
        game_count++;
        p = p -> next;
        printf("%d\t%d\t%d\n", game_count, p -> goals, p -> minutes );
        goalTot += p -> goals;
        minTot += p -> minutes;
    }
    
    printf("\nGoals Against Average is %f", (goalTot / minTot) * 60.0);

    printf("\nAuthor: Gabriel Carrera Rosas");
    return 0;
}
