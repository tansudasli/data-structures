#on linux/Mac/windows
cmake . -B out
make -C out

#on IDE - clion
#cmake --build cmake-build-debug --target all -- -j 30