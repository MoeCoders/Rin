-- Project configuration
set_project("GalgameEngine")
set_version("0.1.0")

-- Set C++ standard
set_languages("cxx20")

-- Define target platforms
add_rules("mode.debug", "mode.release")

-- Add dependencies
add_requires("spdlog")
add_requires("libsdl2", {alias = "sdl2"}) -- Use libsdl2 as per xmake's recommendation
add_requires("entt")
-- Dawn integration will be handled differently, removing direct require for now.
-- add_requires("dawn")

-- Define target
target("GalgameEngine")
    set_kind("binary")
    add_files("src/*.cpp")
    add_includedirs("include")
    # Minimal packages for EnTT test
    add_packages("spdlog", "entt")
    # add_packages("sdl2") # Temporarily commented out

    -- Add Dawn SDK paths (hypothetical) - Temporarily commented out
    -- add_includedirs("external/dawn-sdk/include")
    -- if is_plat("linux") then
    --     add_linkdirs("external/dawn-sdk/lib/linux/x86_64")
    -- elseif is_plat("windows") then
    --     add_linkdirs("external/dawn-sdk/lib/windows/x86_64")
    -- elseif is_plat("macosx") then
    --     add_linkdirs("external/dawn-sdk/lib/macosx/x86_64")
    -- end
    -- add_links("dawn_native", "dawn_proc", "dawn_utils")


    -- Add more specific configurations if needed for different platforms
    if is_plat("windows") then
        -- Windows specific settings
    elseif is_plat("linux") then
        -- Linux specific settings
    elseif is_plat("macosx") then
        -- macOS specific settings
    end
