#include <iostream>
#include <map>

void mapa() {
    std::map<size_t, std::string> discs {
        {1, "The Cat"},
        {2, "The Dog"},
        {3, "The Duck"}
    };
}

void start() {
    mapa();
}

int main() {
    start();
    return 0;
}