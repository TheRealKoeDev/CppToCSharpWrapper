#pragma once
#include "pch.h"

namespace CLI 
{
    /*template<class T>
    ManagedObject<T>::ManagedObject(T* instance): m_Instance(instance)
    {
    }
    
    template<class T>
    ManagedObject<T>::~ManagedObject()
    {
        if (m_Instance != nullptr)
        {
            delete m_Instance;
        }
    }

    template<class T>
    ManagedObject<T>::!ManagedObject()
    {
        if (m_Instance != nullptr)
        {
            delete m_Instance;
        }
    }*/

    template<class T>
    T* ManagedObject<T>::GetInstance()
    {
        return instance;
    }
}

