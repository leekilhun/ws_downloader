/*
 * sys.c
 *
 *  Created on: 2022. 9. 13.
 *      Author: gns2l
 */





#include "sys.h"
#include "uart.h"




void sysInit(void)
{
}



void delay(uint32_t ms)
{
  uint32_t pre_time;

  pre_time = millis();
  while(1)
  {
    if (millis()-pre_time >= ms)
    {
      break;
    }
  }
}

uint32_t millis(void)
{
  double ret;

  LARGE_INTEGER freq, counter;

  QueryPerformanceCounter(&counter);
  QueryPerformanceFrequency(&freq);

  ret = (double)counter.QuadPart / (double)freq.QuadPart * 1000.0;

  return (uint32_t)ret;
}

uint32_t micros(void)
{
  LARGE_INTEGER freq, counter;
  double ret;

  QueryPerformanceCounter(&counter);
  QueryPerformanceFrequency(&freq);

  ret = (double)counter.QuadPart / (double)freq.QuadPart * 1000000.0;

  return (uint32_t)ret;
}
