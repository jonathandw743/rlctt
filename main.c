#include <raylib.h>
#include <stdio.h>

void info() {
  printf("available: %d\n", IsGamepadAvailable(0));
  printf("axis count: %d\n", GetGamepadAxisCount(0));
  printf("name: %s\n", GetGamepadName(0));
  printf("dpaddown down: %d\n",
         IsGamepadButtonDown(0, GAMEPAD_BUTTON_LEFT_FACE_DOWN));
  printf("west down: %d\n",
         IsGamepadButtonDown(0, GAMEPAD_BUTTON_RIGHT_FACE_LEFT));
  printf("last button pressed: %d\n", GetGamepadButtonPressed());
  printf("\n");
}

int main(void) {
  SetConfigFlags(FLAG_WINDOW_RESIZABLE);
  InitWindow(1600, 900, "test");
  SetTargetFPS(0);
  info();
  // clang-format off
  for (int c = 0;
    // c < 10 &&
    !WindowShouldClose()
  ; c++) {
  // clang-format off
    info();
    BeginDrawing();
    EndDrawing();
  }
  CloseWindow();
}
