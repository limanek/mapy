#include <iostream>
#include <string>
#include <map>

void print(const std::map<size_t, std::string>& map) {
    for (const auto& pair : map) {
        std::cout << pair.first << " | " << pair.second << '\n';
    }
}

void mapa() {
    std::map<size_t, std::string> discs {
        {1, "The Cat"},
        {2, "The Dog"},
        {3, "The Duck"}
    };
    print(discs);
    std::cout << "\n After adding a new element\n";
    discs[4] = "Harry Potter";
    print(discs);
    std::cout << "\nAfter modification of a new element\n";
    discs[4] = "Harry Potter and the Philosopher's Stone";
    print(discs);
}

void start() {
    mapa();
}

int main() {
    start();
    return 0;
}