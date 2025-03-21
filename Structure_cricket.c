#include <stdio.h>
#include <string.h>

// Structure to store individual cricket player details
typedef struct cricket 
{
    char name[50];   // Player's name
    char tname[50];  // Team name
    float baverage;  // Batting average
} crick;

// Structure to store team names
struct team 
{
    char Team_name[15]; // Name of the team
};

// Function to count and display players from each team
void Team_counting(crick players[], int total_players, struct team team_name[]) 
{
    for (int i = 0; i < 12; i++) 
    { // Loop through the 12 teams
        int found = 0; // Flag to check if players exist for the team
        printf("\nTeam: %s:-\n", team_name[i].Team_name);
        printf("---------------------------\n");

        for (int j = 0; j < total_players; j++) // Loop through all players
        { 
            if (strcmp(players[j].tname, team_name[i].Team_name) == 0) // Compare player's team name with the current team 
            { 
                printf("%s - %.2f\n", players[j].name, players[j].baverage); // Print player's name and batting average
                found = 1; // Mark that at least one player was found
            }
        }

        if (!found) 
        { // If no players found for the team
            printf("No players found for this team.\n");
        }
    }
}

int main() 
{
    // Array of cricket players with their names, teams, and batting averages
    struct cricket players[50] = {
        {"Virat Kohli", "India", 59.3}, {"Rohit Sharma", "India", 49.8}, {"Shubman Gill", "India", 47.5},
        {"Steve Smith", "Australia", 61.2}, {"David Warner", "Australia", 45.7}, {"Marnus Labuschagne", "Australia", 50.9},
        {"Joe Root", "England", 50.5}, {"Ben Stokes", "England", 42.1}, {"Jonny Bairstow", "England", 39.2},
        {"Babar Azam", "Pakistan", 56.8}, {"Mohammad Rizwan", "Pakistan", 48.3}, {"Fakhar Zaman", "Pakistan", 44.1},
        {"Kane Williamson", "New Zealand", 54.6}, {"Devon Conway", "New Zealand", 47.9}, {"Tom Latham", "New Zealand", 42.5},
        {"Quinton de Kock", "South Africa", 45.3}, {"Aiden Markram", "South Africa", 43.9}, {"Temba Bavuma", "South Africa", 41.5},
        {"Shai Hope", "West Indies", 51.2}, {"Nicholas Pooran", "West Indies", 39.5}, {"Shimron Hetmyer", "West Indies", 40.8},
        {"Tamim Iqbal", "Bangladesh", 44.6}, {"Shakib Al Hasan", "Bangladesh", 41.7}, {"Mushfiqur Rahim", "Bangladesh", 43.1},
        {"Dimuth Karunaratne", "Sri Lanka", 45.2}, {"Kusal Mendis", "Sri Lanka", 42.3}, {"Angelo Mathews", "Sri Lanka", 44.8},
        {"Rahmanullah Gurbaz", "Afghanistan", 40.1}, {"Ibrahim Zadran", "Afghanistan", 38.7}, {"Najibullah Zadran", "Afghanistan", 36.4},
        {"Paul Stirling", "Ireland", 42.8}, {"Andrew Balbirnie", "Ireland", 39.6}, {"Harry Tector", "Ireland", 37.9},
        {"Jos Buttler", "England", 41.4}, {"Travis Head", "Australia", 47.3}, {"Rassie van der Dussen", "South Africa", 50.7},
        {"David Malan", "England", 38.5}, {"Mitchell Marsh", "Australia", 42.2}, {"Glenn Maxwell", "Australia", 35.6},
        {"Hardik Pandya", "India", 40.3}, {"Suryakumar Yadav", "India", 41.1}, {"Ishan Kishan", "India", 39.2},
        {"Usman Khawaja", "Australia", 45.9}, {"Henry Nicholls", "New Zealand", 42.7}, {"Daryl Mitchell", "New Zealand", 41.3},
        {"Temba Bavuma", "South Africa", 39.4}, {"Craig Ervine", "Zimbabwe", 38.8}, {"Sikandar Raza", "Zimbabwe", 37.6}
    };

    // Array of teams participating
    struct team team_name[] = {
        {"India"}, {"Australia"}, {"England"}, {"Pakistan"},
        {"New Zealand"}, {"South Africa"}, {"West Indies"},
        {"Bangladesh"}, {"Sri Lanka"}, {"Afghanistan"},
        {"Ireland"}, {"Zimbabwe"}
    };

    int total_players = 50; // Number of players in the list

    // Call function to display players grouped by team
    Team_counting(players, total_players, team_name);

    return 0; // End of program
}
