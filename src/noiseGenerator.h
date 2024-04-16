#ifndef NOISEGENERATOR_H
#define NOISEGENERATOR_H
#include <FastNoiseLite.h>
#include <vector>

class noiseGenerator
{
public:
    int size = 16;
    FastNoiseLite noise = FastNoiseLite();
    noiseGenerator();
    void startNoise(float x, float y);
    std::vector<std::vector<float>> generateNoise(float x, float y);
};

#endif