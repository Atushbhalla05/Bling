#pragma once

#ifdef BL_PLATFORM_WINDOWS

extern Bling::Application* Bling::CreateApplication();

int main(int argc, char** argv)
{
	auto app = Bling::CreateApplication();
	app->Run();


	delete app;
}

#endif