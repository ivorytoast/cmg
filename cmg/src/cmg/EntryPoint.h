#pragma once

#ifdef CMG_PLATFORM_WINDOWS

extern Cmg::Application* Cmg::CreateApplication();

int main(int argc, char** argv) 
{
	Cmg::Log::Init();
	CMG_CORE_WARN("Initialized Log!");
	int a = 5;
	CMG_CORE_INFO("Hello! Var={0}", a);

	auto app = Cmg::CreateApplication();
	app->Run();
	delete app;
}

#endif