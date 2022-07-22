#include "raylib.h"

int main() {
	InitWindow(800, 600, "Raylib Game Template");

	SetTargetFPS(
		GetMonitorRefreshRate(
			GetCurrentMonitor()
		)
	);

	while(!WindowShouldClose()) {
		BeginDrawing();
			ClearBackground(GRAY);
		EndDrawing();
	}

	return 0;
}
