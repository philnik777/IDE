#include <Window.hpp>

int main()
{
	auto mainWindow = GUI::Window::create("IDE");
	mainWindow->visible(true);
	mainWindow->setCloseCallback([mainWindow]() { mainWindow->close(); });
	mainWindow->loop();
}
