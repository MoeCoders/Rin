{
    files = {
        "src/main.cpp"
    },
    depfiles_format = "gcc",
    depfiles = "main.o: src/main.cpp include/main.h\
",
    values = {
        "/usr/bin/gcc",
        {
            "-m64",
            "-fvisibility=hidden",
            "-fvisibility-inlines-hidden",
            "-O3",
            "-std=c++20",
            "-Iinclude",
            "-Ibuild/.gens/GalgameEngine/linux/x86_64/release/platform/windows/idl",
            "-isystem",
            "/home/swebot/.xmake/packages/s/spdlog/v1.15.3/281ab689e3ca4a04813dc400d53c7ac7/include",
            "-isystem",
            "/home/swebot/.xmake/packages/l/libsdl2/2.32.2/a4526c7932494d70a40ff416884febda/include",
            "-isystem",
            "/home/swebot/.xmake/packages/l/libsdl2/2.32.2/a4526c7932494d70a40ff416884febda/include/SDL2",
            "-DNDEBUG"
        }
    }
}