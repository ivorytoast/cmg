#pragma once

#include "Core.h"

namespace Cmg {
	class CMG_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	// To be defined in Client
	Application* CreateApplication();
}

