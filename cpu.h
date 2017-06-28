#ifndef CPU_H
#define CPU_H
#include "ram.h"

class CPU
{
public:
    CPU(RAM *Memory);
    ~CPU();

    void Run();


private:
    QByteArray ProgramCounter;
    QByteArray Register_0;
    QByteArray Register_1;
    bool OverflowError;
};

#endif // CPU_H