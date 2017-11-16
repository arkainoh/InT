#ifndef SRC_MNIST_UTIL_MNIST_NN_H_
#define SRC_MNIST_UTIL_MNIST_NN_H_
#include <stdio.h>
#include <string.h>
#include <time.h>

#include "../parameter/W1.h"
#include "../parameter/W2.h"
#include "../parameter/W3.h"
#include "../parameter/W4.h"
#include "../parameter/W5.h"

#include "../parameter/B1.h"
#include "../parameter/B2.h"
#include "../parameter/B3.h"
#include "../parameter/B4.h"
#include "../parameter/B5.h"

#include "../parameter/parameter.h"

void getError(float y[OUTPUT_LENGTH], int label, float e[OUTPUT_LENGTH]);
float getLoss(float y[OUTPUT_LENGTH], int label);
void backOL(float e[OUTPUT_LENGTH], float iv[HL_LENGTH], float ov[OUTPUT_LENGTH]);
void backHL4(float e[OUTPUT_LENGTH], float iv[HL_LENGTH], float ov[HL_LENGTH], float newEH[HL_LENGTH]);
void backHL3(float prevEI[HL_LENGTH], float iv[HL_LENGTH], float ov[HL_LENGTH], float newEH[HL_LENGTH]);
void backHL2(float prevEI[HL_LENGTH], float iv[HL_LENGTH], float ov[HL_LENGTH], float newEH[HL_LENGTH]);
void backHL1(float prevEI[HL_LENGTH], float iv[INPUT_LENGTH], float ov[HL_LENGTH]);

void passIL(float x[INPUT_LENGTH], float result[HL_LENGTH]);
void passHL2(float x[HL_LENGTH], float result[HL_LENGTH]);
void passHL3(float x[HL_LENGTH], float result[HL_LENGTH]);
void passHL4(float x[HL_LENGTH], float result[HL_LENGTH]);
void passOL(float x[HL_LENGTH],  float result[OUTPUT_LENGTH]);

void xavierInitialization(float *mat, int fan_in, int fan_out);
void normalDistribution(float *mat, int fan_in, int fan_out);
void uniformDistribution(float *mat, int fan_in, int fan_out);
void constantInitialization(float *mat, int fan_in, int fan_out, float val);
void weightInitialization_xavier(void);
void weightInitialization_uniform(void);
void setLearningRate(float val);

#endif