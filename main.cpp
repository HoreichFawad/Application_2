#include "mbed.h"
#include "HS4001.hpp"
using namespace mbed;
I2C i2c(PB_14,PB_13);

int main()
{
  HS4001 hs4001(i2c);
  hs4001.getManufacturerId();
}
