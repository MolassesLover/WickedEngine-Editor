#pragma once
#include "WickedEngine.h"

class Renderer : public wi::RenderPath3D
{
public:
    void Load() override;
    void Update(float dt) override;
};

class Editor : public wi::Application
{
    Renderer renderer;

public:
    void Initialize() override;
};

