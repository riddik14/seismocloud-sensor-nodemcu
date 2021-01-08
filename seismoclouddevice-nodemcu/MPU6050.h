#ifndef __MPU6050_H
#define __MPU6050_H

#include "common.h"

#include <Arduino.h>
#include <Wire.h>

static const uint8_t D0   = 16;
static const uint8_t D1   = 5;
static const uint8_t D2   = 4;
static const uint8_t D3   = 0;
static const uint8_t D4   = 2;
static const uint8_t D5   = 14;
static const uint8_t D6   = 12;
static const uint8_t D7   = 13;
static const uint8_t D8   = 15;
static const uint8_t D9   = 3;
static const uint8_t D10  = 1;



#define MPU_ADDRESS   0x68
#define WIRE_SDA      D4
#define WIRE_SCL      D3

#ifdef DEBUG
#define CALIBRATION_SECONDS  3
#else
#define CALIBRATION_SECONDS  10
#endif

void MPU6050_begin();
void MPU6050_probe();
void MPU6050_calibrate();

extern float Tmp;
extern double acceleroX, acceleroY, acceleroZ;

#endif
