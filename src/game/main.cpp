#include "pie.h"

#include <SDL2\SDL.h>

int main(int c, char** args) {

	Jam::Flavor flavor;
	flavor.title = "My Test Game";

	Jam::Pie pie(flavor);

	pie.bake();


	return 0;
}