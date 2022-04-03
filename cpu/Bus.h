#include <cstdint>
#include "cpu6502.h"    //importing 6502 class
#include <array>

class Bus
{
public:
    Bus();
    ~Bus();


public:  //Devices connected to the bus
    cpu6502 cpu;

    std::array<uint8_t, 64 * 1024 > ram;




public:     //Bus read and write
    void write(uint16_t addr, uint8_t data);
    uint8_t read(uint16_t addr, bool bReadOnly = false);

};

