/*******************************************************************************************
*
*   raylib [core] example - Basic window
*
*   Welcome to raylib!
*
*   To test examples, just press F6 and execute 'raylib_compile_execute' script
*   Note that compiled executable is placed in the same folder as .c file
*
*   To test the examples on Web, press F6 and execute 'raylib_compile_execute_web' script
*   Web version of the program is generated in the same folder as .c file
*
*   You can find all basic examples on C:\raylib\raylib\examples folder or
*   raylib official webpage: www.raylib.com
*
*   Enjoy using raylib. :)
*
*   Example originally created with raylib 1.0, last time updated with raylib 1.0
*
*   Example licensed under an unmodified zlib/libpng license, which is an OSI-certified,
*   BSD-like license that allows static linking with closed source software
*
*   Copyright (c) 2013-2024 Ramon Santamaria (@raysan5)
*
********************************************************************************************/

#include "raylib.h"

// Player structure
typedef struct Player {
    Vector2 position;
    float speed;
    } Player;

int main(void)
{
    const int screenWidth = 960;
    const int screenHeight = 540;

    InitWindow(screenWidth, screenHeight, "Space Invaders");
    
    Player player = {{(screenWidth/2) ,(screenHeight/2)}, 5.0f};

    SetTargetFPS(60); // Set target frames per second

    // Game loop
    while (!WindowShouldClose()) 
    {
        // Allow the player to move left, right, up and down using WASD or arrow keys
        if (IsKeyDown(KEY_RIGHT) || IsKeyDown(KEY_D)) player.position.x += player.speed;
        if (IsKeyDown(KEY_LEFT) || IsKeyDown(KEY_A)) player.position.x -= player.speed;
        if (IsKeyDown(KEY_UP) || IsKeyDown(KEY_W)) player.position.y -= player.speed;
        if (IsKeyDown(KEY_DOWN) || IsKeyDown(KEY_S)) player.position.y += player.speed;
        
        // Ensure the player stays within the screen boundaries
        // Prevent moving off the left edge
        if (player.position.x < 35) player.position.x = 35;
        
        // Prevent moving off the right edge        
        if (player.position.x + 35 > screenWidth) player.position.x = screenWidth - 35;
        
        // Prevent moving off the top edge        
        if (player.position.y < 5) player.position.y = 5;
        
        // Prevent moving off the bottom edge
        if (player.position.y + 45 > screenHeight) player.position.y = screenHeight - 45;

        // Start Drawing
        BeginDrawing();
        
        // Draw Background
        ClearBackground(BLACK);

        // Draw player ship
        DrawRectangle(5, 5, screenWidth-10, screenHeight-10, RAYWHITE);
        
        DrawTriangle(
            (Vector2){player.position.x, player.position.y},                          // Left corner
            (Vector2){player.position.x - 30.0f, player.position.y + 40.0f},          // Bottom-left corner
            (Vector2){player.position.x + 30.0f, player.position.y + 40.0f},          // Bottom-right corner
            MAROON);  // Color of the triangle (ship)
        // End Drawing
        EndDrawing();
    }

    // De-Initialization
    CloseWindow(); // Close window and OpenGL context

    return 0;
}