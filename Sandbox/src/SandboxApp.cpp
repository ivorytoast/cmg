#include <CMG.h>

class Sandbox : public Cmg::Application
{
public:
	Sandbox()
	{

	}

	~Sandbox()
	{

	}
};

Cmg::Application* Cmg::CreateApplication()
{
	return new Sandbox();
}