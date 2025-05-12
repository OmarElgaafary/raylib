#include <raylib.h>

int main()
{	
	int ballX = 100;
	int ballY = 100;
	InitWindow(1000, 1000, "Raylib game, made by the one and only omar adly!");
	SetTargetFPS(60);

	while (!WindowShouldClose())
	{
		if (ballX <= 900 && ballY <= 100) {
			ballX += 10;
		} 
		if (ballX >= 900 && ballY <= 900)
		{
			ballY += 10;
		}

		if (ballY >= 900) {
			ballX -= 10;
		}
		if (ballX <= 100 && ballY <=900) {
			ballY -= 10;
		}
		

		BeginDrawing();
		ClearBackground(BLACK);
		DrawCircle(ballX, ballY,25, WHITE);
		EndDrawing();
	}

	
	CloseWindow();

	return 0;
}
