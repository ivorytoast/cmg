#pragma once

#ifdef CMG_PLATFORM_WINDOWS

extern Cmg::Application* Cmg::CreateApplication();

int main(int argc, char** argv) 
{
	auto app = Cmg::CreateApplication();
	app->Run();
	delete app;
}

#endif