#include <Zero.h>

class Sandbox : public Zero::Application
{
public:
	Sandbox() {

	}
	~Sandbox() {

	}
};

Zero::Application* Zero::CreateApplication()
{
	return new Sandbox();
}