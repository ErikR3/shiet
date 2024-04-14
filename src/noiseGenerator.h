#ifndef NOISEGENERATOR_H
#define NOISEGENERATOR_H
#include <FastNoiseLite.h>
#include <vector>


    class noiseGenerator
    {
        public:
            FastNoiseLite noise = FastNoiseLite();
            noiseGenerator();
            void startNoise(float x, float y);
            float generateNoise(float x, float y);
    };

#endif