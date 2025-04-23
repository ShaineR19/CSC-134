// Shaine Ransford
// 4/21/2025
// M6T1
// CSC-134

#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;

// Define constants for directions
enum Direction 
{
    NORTH = 0,
    EAST = 1,
    SOUTH = 2,
    WEST = 3,
    NORTH_EAST = 4,
    NORTH_WEST = 5,
    NUM_DIRECTIONS = 6
};

// Direction strings for output
const string DIRECTION_NAMES[NUM_DIRECTIONS] = 
{
    "north", "east", "south", "west", "northwest", "northeast",
};

// Define constants for rooms
enum Room 
{
    BEDROOM = 0,
    LIVING_ROOM = 1,
    KITCHEN = 2,
    BACKYARD = 3,
    GARAGE = 4,
    PORCH = 5,
    NUM_ROOMS = 6
};

int main()
{
    // Room names array
    string roomNames[NUM_ROOMS] = 
    {
        "Bedroom",
        "Living Room",
        "Kitchen",
        "Backyard",
        "Garage",
        "Porch"
    };
    
    // Room descriptions array
    string roomDescriptions[NUM_ROOMS] = 
    {
        "A bedroom with a lavish bed and a walk-in closet.",
        "A living room with a large couch but a small TV.",
        "A medium sized-kitchen with marble countertops.",
        "A large backyard with stone pathways and a pool.",
        "A heated garage with a an assortment of power tools.",
        "A porch with a swing and a view of the street."
    };
    
    // Adjacency list using a 2D array
    // connections[from_room][direction] = to_room or -1 if no connection
    int connections[NUM_ROOMS][NUM_DIRECTIONS];
    
    // Initialize all connections to -1 (no connection)
    for (int i = 0; i < NUM_ROOMS; i++) 
    {
        for (int j = 0; j < NUM_DIRECTIONS; j++)
        {
            connections[i][j] = -1;
        }
    }
    

    // Define the connections between rooms using the Room enum
    // Bedroom connections
    connections[BEDROOM][NORTH] = -1;    // Entrance Hall -> North -> Library
    connections[BEDROOM][NORTH_EAST] = -1;    // No connection north
    connections[BEDROOM][NORTH_WEST] = -1;    // No connection north
    connections[BEDROOM][EAST] = -1;     // Entrance Hall -> East -> Kitchen
    connections[BEDROOM][SOUTH] = -1;         // No connection south
    connections[BEDROOM][WEST] = LIVING_ROOM;      // Entrance Hall -> West -> Garden
    
    // Living Room connections
    connections[LIVING_ROOM][NORTH] = PORCH;    // No connection north
    connections[LIVING_ROOM][NORTH_EAST] = -1;    // No connection north
    connections[LIVING_ROOM][NORTH_WEST] = -1;
    connections[LIVING_ROOM][EAST] = BEDROOM;    // No connection east
    connections[LIVING_ROOM][SOUTH] = BACKYARD;    // Library -> South -> Entrance Hall
    connections[LIVING_ROOM][WEST] = KITCHEN;    // No connection west
    
    // Kitchen connections
    connections[KITCHEN][NORTH] = GARAGE;    // No connection north
    connections[KITCHEN][NORTH_EAST] = -1;    // No connection north
    connections[KITCHEN][NORTH_WEST] = -1;
    connections[KITCHEN][EAST] = LIVING_ROOM;    // No connection east
    connections[KITCHEN][SOUTH] = BACKYARD;   // Kitchen -> South -> Basement
    connections[KITCHEN][WEST] = -1;    // Kitchen -> West -> Entrance Hall
    
    // Garden connections
    connections[BACKYARD][NORTH] = -1;
    connections[BACKYARD][NORTH_WEST] = KITCHEN;    // No connection north
    connections[BACKYARD][NORTH_EAST] = LIVING_ROOM;
    connections[BACKYARD][EAST] = -1;    // Garden -> East -> Entrance Hall
    connections[BACKYARD][SOUTH] = -1;    // No connection south
    connections[BACKYARD][WEST] = -1;    // No connection west
    
    // Basement connections
    connections[GARAGE][NORTH] = -1;    // Basement -> North -> Kitchen
    connections[GARAGE][NORTH_EAST] = -1;    // No connection north
    connections[GARAGE][NORTH_WEST] = -1;    // No connection north
    connections[GARAGE][EAST] = -1;    // No connection east
    connections[GARAGE][SOUTH] = KITCHEN;    // No connection south
    connections[GARAGE][WEST] = -1;    // No connection west

    // Basement connections
    connections[PORCH][NORTH] = -1;    // Basement -> North -> Kitchen
    connections[PORCH][NORTH_EAST] = -1;    // No connection north
    connections[PORCH][NORTH_WEST] = -1;    // No connection north
    connections[PORCH][EAST] = -1;    // No connection east
    connections[PORCH][SOUTH] = LIVING_ROOM;    // No connection south
    connections[PORCH][WEST] = -1;    // No connection west
    
    // Game state
    int currentRoom = BEDROOM; // Start in the Entrance Hall
    bool gameRunning = true;
    
    // Game loop
    while (gameRunning) 
    {
        // Display current room information
        cout << "\nYou are in the " << roomNames[currentRoom] << endl;
        cout << roomDescriptions[currentRoom] << endl;
        
        // Show available exits
        cout << "Exits: ";
        bool hasExits = false;
        for (int dir = 0; dir < NUM_DIRECTIONS; dir++) 
        {
            if (connections[currentRoom][dir] != -1) 
            {
                cout << DIRECTION_NAMES[dir] << " ";
                hasExits = true;
            }
        }
        if (!hasExits) 
        {
            cout << "none";
        }
        cout << endl;
        
        // Get player input
        string command;
        cout << "\nWhat would you like to do? ";
        cin >> command;
        
        // Process movement commands
        if (command == "north" || command == "n") 
        {
            if (connections[currentRoom][NORTH] != -1) 
            {
                currentRoom = connections[currentRoom][NORTH];
            } 
            else 
            {
                cout << "You can't go that way." << endl;
            }
        } 
        else if (command == "east" || command == "e") 
        {
            if (connections[currentRoom][EAST] != -1) 
            {
                currentRoom = connections[currentRoom][EAST];
            }
            else 
            {
                cout << "You can't go that way." << endl;
            }
        } 
        else if (command == "south" || command == "s") 
        {
            if (connections[currentRoom][SOUTH] != -1) 
            {
                currentRoom = connections[currentRoom][SOUTH];
            }
            else
            {
                cout << "You can't go that way." << endl;
            }
        } 
        else if (command == "west" || command == "w") 
        {
            if (connections[currentRoom][WEST] != -1) 
            {
                currentRoom = connections[currentRoom][WEST];
            } 
            else 
            {
                cout << "You can't go that way." << endl;
            }
        } 
        else if (command == "northeast" || command == "ne") 
        {
            if (connections[currentRoom][NORTH_EAST] != -1) 
            {
                currentRoom = connections[currentRoom][NORTH_EAST];
            } 
            else 
            {
                cout << "You can't go that way." << endl;
            }
        } 
        else if (command == "northwest" || command == "nw") 
        {
            if (connections[currentRoom][NORTH_WEST] != -1) 
            {
                currentRoom = connections[currentRoom][NORTH_WEST];
            } 
            else 
            {
                cout << "You can't go that way." << endl;
            }
        } 
        else if (command == "quit" || command == "q") 
        {
            gameRunning = false;
        } 
        else 
        {
            cout << "I don't understand that command." << endl;
        }
    }
    
    cout << "Thanks for playing!" << endl;
    return 0;
}