#include "noiseGenerator.h"

noiseGenerator::noiseGenerator()
{
    FastNoiseLite noise = FastNoiseLite();

    noise.SetNoiseType(FastNoiseLite::NoiseType_Perlin);
    noise.SetSeed(69);
}

void noiseGenerator::startNoise(float x, float y)
{
    float coords[16][16];
    for (int i = 0; i < 16; i++)
    {
        for (int j = 0; j < 16; j++)
        {
            
        }
    }
    
    
}

