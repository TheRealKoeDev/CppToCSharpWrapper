#pragma once
#include "pch.h"

using namespace System;

namespace CLI
{
		EntityWrapper::EntityWrapper(String^ name, float xPos, float yPos)
			: ManagedObject(new Core::Entity(string_to_char_array(name), xPos, yPos))
		{
			Console::WriteLine("Creating a new Entity-wrapper object!");
		}

		void EntityWrapper::Move(float deltaX, float deltaY)
		{
			Console::WriteLine("The Move method from the Wrapper was called!");
			instance->Move(deltaX, deltaY);
		}

		float EntityWrapper::YPosition::get()
		{
			return instance->GetYPosition();
		}

		void EntityWrapper::YPosition::set(float value)
		{
		}

		float EntityWrapper::XPosition::get()
		{
			return instance->GetYPosition();
		}

		void EntityWrapper::XPosition::set(float value)
		{
		}
}
