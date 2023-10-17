#include <stdio.h>

struct computer {
    int peripherals;
    char monitor;
    double cpu;
    int keys[100];
};

enum colour {
    RED,
    GREEN,
    BLUE,
    PINK,
    YELLOW
}

int main(void) {
    int i = 0;
    struct computer my_computer = make_computer(5, 't', 4.425);
    // my_computer.peripherals = 5;
    // my_computer.monitor = 't';
    // my_computer.cpu = 4.5567;
    // my_computer.keys = {3, 4, 5, 6, 8, 8}

    enum colour my_colour = BLUE;

    struct computer your_computer;

    return 0;
}

struct computer make_computer(int peripherals, char monitor, ...) {
    struct computer new_computer;
    my_computer.peripherals = peripherals;
    my_computer.monitor = 't';
    my_computer.cpu = 4.5567;
    my_computer.keys = {3, 4, 5, 6, 8, 8}
    return new_computer;
}