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
    switch (choice) {
        case 1: votesA++; break;
        case 2: votesB++; break;
        case 3: votesC++; break;
        default: spoiledVotes++; printf("Invalid vote counted as spoiled.\n");
    }
}
void showVotes() {
    printf("\n--- Voting Results ---\n");
    printf("Candidate A: %d votes\n", votesA);
    printf("Candidate B: %d votes\n", votesB);
    printf("Candidate C: %d votes\n", votesC);
    printf("Spoiled Votes: %d\n", spoiledVotes);
}
void findWinner() {
    printf("\n--- Winner ---\n");
    if (votesA > votesB && votesA > votesC)
        printf("Candidate A wins!\n");
    else if (votesB > votesA && votesB > votesC)
        printf("Candidate B wins!\n");
    else if (votesC > votesA && votesC > votesB)
        printf("Candidate C wins!\n");
    else
        printf("It's a tie or no votes cast.\n");
}
int main() {
    int option;

    do {
        printf("\n--- Voting Menu ---\n");
        printf("1. Cast Vote\n");
        printf("2. View Votes\n");
        printf("3. Show Winner\n");
        printf("0. Exit\n");
        printf("Enter option: ");
        scanf("%d", &option);
 switch(option) {
            case 1: castVote(); break;
            case 2: showVotes(); break;
            case 3: findWinner(); break;
            case 0: printf("Exiting...\n"); break;
            default: printf("Invalid option. Try again.\n");
        }
  } while (option != 0);

    return 0;
}
