#include "noiseGenerator.h"

noiseGenerator::noiseGenerator()
{
    noise.SetNoiseType(FastNoiseLite::NoiseType_Perlin);
    noise.SetSeed(69);
}

void noiseGenerator::startNoise(float x, float y)
{
    float c[16][16];
    for (int i = 0; i < 16; i++)
    {
        for (int j = 0; j < 16; j++)
        {
            c[i][j] = noise.GetNoise(x, y);
        }
    }
    
    
}

