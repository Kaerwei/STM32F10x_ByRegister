#include "main.h"

int main(int argc, char *argv[])
{
    sys_stm32_clock_init(9); // 72MHz
    delay_init(72);

    while (1)
    {
    }
}
