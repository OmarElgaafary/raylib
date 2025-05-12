#include <raylib.h>

int main()
{	
	int ballX = 100;
	int ballY = 100;
	InitWindow(1000, 1000, "Raylib game, made by the one and only omar adly!");
	SetTargetFPS(60);
	Color color = {0,130, 225, 125};
	while (!WindowShouldClose())
	{
		if (IsKeyDown(KEY_RIGHT))
			ballX += 5;
		else if (IsKeyDown(KEY_LEFT))
			ballX -= 5;
		else if (IsKeyDown(KEY_UP))
			ballY -= 5;
		else if (IsKeyDown(KEY_DOWN))
			ballY += 5;

		BeginDrawing();
		ClearBackground(color);
		DrawCircle(ballX, ballY,20, WHITE);
		EndDrawing();
	}

	
	CloseWindow();

	return 0;
}
