#include <stdio.h>

int votesA = 0, votesB = 0, votesC = 0, spoiledVotes = 0;
void castVote() {
    int choice;
    printf("\nVote for your candidate:\n");
    printf("1. Candidate A\n");
    printf("2. Candidate B\n");
    printf("3. Candidate C\n");
    printf("Enter your choice (1-3): ");
    scanf("%d", &choice);
