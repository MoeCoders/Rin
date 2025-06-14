#include <iostream>
// #include <vector> // Not currently needed
// #include <memory> // Not currently needed

// spdlog for logging
#include "spdlog/spdlog.h"
#include "spdlog/sinks/stdout_color_sinks.h"

// EnTT
#include <entt/entt.hpp>

// SDL - Commented out for EnTT test
// #include <SDL2/SDL.h>
// #include <SDL2/SDL_syswm.h>

// Dawn - Commented out for EnTT test
// #include <dawn/webgpu.hpp>
// #include <dawn/dawn_proc.h>
// #include <dawn/native/DawnNative.h>

// Global logger
std::shared_ptr<spdlog::logger> console;

// Define simple components for EnTT test
struct Position {
    float x, y;
};

struct Velocity {
    float dx, dy;
};

struct TagComponent {}; // Example of a tag component

void RunEnTTTest() {
    if (!console) {
        try {
            console = spdlog::stdout_color_mt("EnTT_TestConsole");
        } catch (const spdlog::spdlog_ex& ex) {
            std::cerr << "Log init failed for EnTT test: " << ex.what() << std::endl;
            return;
        }
    }
    console->info("=== Starting EnTT Test ===");

    entt::registry registry;
    console->info("entt::registry created.");

    // Create entity 1 with Position
    auto entity1 = registry.create();
    registry.emplace<Position>(entity1, 10.0f, 20.0f);
    console->info("Entity 1 created with Position component (10, 20).");
    if (registry.all_of<Position>(entity1)) {
         console->info("Entity 1 confirmed to have Position.");
    }

    // Create entity 2 with Position and Velocity
    auto entity2 = registry.create();
    registry.emplace<Position>(entity2, 5.0f, 15.0f);
    registry.emplace<Velocity>(entity2, 1.0f, 0.5f);
    console->info("Entity 2 created with Position (5, 15) and Velocity (1, 0.5).");
     if (registry.all_of<Position, Velocity>(entity2)) {
         console->info("Entity 2 confirmed to have Position and Velocity.");
    }

    // Create entity 3 with only Velocity and a Tag
    auto entity3 = registry.create();
    registry.emplace<Velocity>(entity3, 0.2f, 0.7f);
    registry.emplace<TagComponent>(entity3);
    console->info("Entity 3 created with Velocity (0.2, 0.7) and TagComponent.");
    if (registry.all_of<Velocity, TagComponent>(entity3) && !registry.any_of<Position>(entity3)) {
         console->info("Entity 3 confirmed to have Velocity and Tag, but no Position.");
    }


    console->info("Iterating entities with Position component:");
    auto view_pos = registry.view<Position>();
    for (auto entity : view_pos) {
        Position& pos = view_pos.get<Position>(entity);
        console->info("  Entity [{}] has Position: x={}, y={}", entt::to_integral(entity), pos.x, pos.y);
    }

    console->info("Iterating entities with both Position and Velocity components:");
    int count_pos_vel = 0;
    auto view_pos_vel = registry.view<Position, Velocity>();
    for (auto entity : view_pos_vel) {
        Position& pos = view_pos_vel.get<Position>(entity);
        Velocity& vel = view_pos_vel.get<Velocity>(entity);
        console->info("  Entity [{}] has Position: x={}, y={} and Velocity: dx={}, dy={}",
                      entt::to_integral(entity), pos.x, pos.y, vel.dx, vel.dy);
        count_pos_vel++;
    }
    if (count_pos_vel == 0) {
        console->info("  No entities found with both Position and Velocity.");
    } else {
        console->info("  Found {} entity/entities with both Position and Velocity.", count_pos_vel);
    }

    console->info("=== EnTT Test Completed ===");
    spdlog::drop_all(); // Clean up loggers
}


int main(int argc, char* argv[]) {
    // Comment out SDL and Dawn initialization for this EnTT test
    /*
    try {
        console = spdlog::stdout_color_mt("GalgameEngineConsole");
    } catch (const spdlog::spdlog_ex& ex) {
        std::cerr << "Log init failed: " << ex.what() << std::endl;
        return 1;
    }
    console->info("Starting GalgameEngine (Full App - currently disabled for EnTT test)...");

    // InitSDL();
    // InitDawn();
    // ... main loop ...
    // Cleanup();
    */

    RunEnTTTest(); // Run only the EnTT test

    return 0;
}

/*
// Full SDL/Dawn structure (commented out for EnTT test)

// SDL_Window* sdlWindow = nullptr;
// Dawn objects
// std::unique_ptr<dawn::native::Instance> instance;
// wgpu::Adapter adapter;
// wgpu::Device device;
// wgpu::Queue queue;
// wgpu::Surface surface;
// wgpu::SwapChain swapChain;

void InitSDL() { ... }
void InitDawn() { ... }
void Render() { ... }
void Cleanup() { ... }
*/
