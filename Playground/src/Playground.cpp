#include <Hazel.h>

class Playground : public Hazel::Application
{
public:
	Playground(){};
	~Playground() {};
};

Hazel::Application* Hazel::CreateApplication()
{
	return new Playground();
}
