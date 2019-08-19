#pragma once
#include "pch.h"

using namespace System;

namespace CLI 
{
    template<class T>
    public ref class ManagedObject
    {
        protected:
            T* instance;
        public:

            ManagedObject(T* instance)
                : instance(instance)
            {
            }

            T* GetInstance();

            virtual ~ManagedObject()
            {
                if (instance != nullptr)
                {
                    delete instance;
                }
            }

            !ManagedObject()
            {
                if (instance != nullptr)
                {
                    delete instance;
                }
            }
            
    };
}

using namespace System::Runtime::InteropServices;
static const char* string_to_char_array(String^ string)
{
    const char* str = (const char*)(Marshal::StringToHGlobalAnsi(string)).ToPointer();
    return str;
}

static void int_array_conversion(array<int>^ data)
{
    pin_ptr<int> arrayPin = &data[0];
    unsigned int size = data->Length;
}
