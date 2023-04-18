#include "../Engine/Engine.h"


int main()
{
	Engine engine;
	if (!engine.InitWindow("Game", 800, 600))
	{
		return -1;
	}

	while (engine.isRunning())
	{
		engine.StartUpdate();

		engine.FinishUpdate();
	}
	return 0;
}