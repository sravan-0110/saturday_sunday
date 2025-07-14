candidates = ["Alice", "Bob", "Charlie"]
votes = {name: 0 for name in candidates}
def display_candidates():
    print("\nCandidates:")
 for i, name in enumerate(candidates, 1):
        print(f"{i}. {name}")
def vote():
    display_candidates()
    choice = int(input("Enter the number of your chosen candidate: "))
     if 1 <= choice <= len(candidates):
        selected = candidates[choice - 1]
        votes[selected] += 1
print(f"Thanks for voting for {selected}!")
    else:
        print("Invalid choice. Try again.")
def show_results():
    print("\n--- Voting Results ---")
for name, count in votes.items():
        print(f"{name}: {count} votes")
        winner = max(votes, key=votes.get)
    print(f"\n🏆 Winner: {winner}")
    num_voters = int(input("Enter number of voters: "))
for _ in range(num_voters):
    vote()

show_results()
print("completed")
print("line added")

