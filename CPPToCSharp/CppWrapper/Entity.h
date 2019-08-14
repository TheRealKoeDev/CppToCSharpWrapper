#pragma once
#include "ManagedObject.h"
#include "../NativeCpp/Core.h"
using namespace System;
namespace CLI
{
    public ref class Entity : public ManagedObject<Core::Entity>
    {
        public:

        Entity(String^ name, float xPos, float yPos);
        void Move(float deltaX, float deltaY);

        property float XPosition
        {
            public: float get();
            private: void set(float value);
        }

        property float YPosition
        {
            public: float get();
            private: void set(float value);
        }
    };
}
