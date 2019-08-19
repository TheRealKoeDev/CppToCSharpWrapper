#pragma once

namespace Core
{
	__declspec(dllexport) class Entity
    {
        public:
            const char* m_Name;
        private:
            float  m_XPos, m_YPos;
        public:
			__declspec(dllexport) Entity(const char* name, float xPos, float yPos);

			__declspec(dllexport) void Move(float deltaX, float deltaY);

			__declspec(dllexport) inline float GetXPosition() const { return m_XPos; };
			__declspec(dllexport) inline float GetYPosition() const { return m_YPos; };
    };
}

