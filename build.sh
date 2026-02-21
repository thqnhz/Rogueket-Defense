rm -rf build

conan install . --build=missing

cmake --preset conan-release -DCMAKE_EXPORT_COMPILE_COMMANDS=ON
cmake --build --preset conan-release

# this is for clangd
ln -sf build/Release/compile_commands.json ./compile_commands.json
