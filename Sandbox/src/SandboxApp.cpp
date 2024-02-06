#include <Bling.h>


class SandBox : public Bling::Application 
{
public:
	SandBox()
	{

	}

	~SandBox()
	{

	}
};

Bling::Application* Bling::CreateApplication() 
{
	return new SandBox();
}