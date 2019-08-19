#pragma once
#include "pch.h"
#include "../NativeCpp/Entity.h"

using namespace System;
namespace CLI
{
    public ref class EntityWrapper : public ManagedObject<Core::Entity>
    {
        public:

			EntityWrapper(String^ name, float xPos, float yPos);
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
