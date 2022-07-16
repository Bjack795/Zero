#pragma once

#ifdef ZERO_PLATFORM_WINDOWS

//funzione che definiremo da un'altra parte, implementata nel client
extern Zero::Application* Zero::CreateApplication(); 

int main(int argc, char** argv) {

	auto app = Zero::CreateApplication();
	app->Run();
	delete app;
}

#endif // ZERO_PLATFORM_WINDOWS

