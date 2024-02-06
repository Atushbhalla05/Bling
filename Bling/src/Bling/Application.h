#pragma once

#include "Core.h"


namespace Bling {

	class BLING_API Application
	{

	public:
		Application();
		virtual ~Application();

		void Run();
	};

	//To Be defined in Client
	Application* CreateApplication();

}

