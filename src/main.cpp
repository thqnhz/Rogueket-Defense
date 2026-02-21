/* Copyright (C) 2026-present ThqnhZ
 * 
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 * */


#include "raylib.h"

int main() {
    ::InitWindow(1280, 720, "Rogueket Defense");
    while (!::WindowShouldClose()) {
        ::BeginDrawing();
        ::ClearBackground(::BLACK);
        ::DrawText("Rogueket Defense", 0, 0, 32, ::RAYWHITE);
        ::EndDrawing();
    }
    return 0;
}

