#include "Application.h"
#include "stubs.h"

int main(){
	if(InitWindowFailed() | InitGlewFailed()){
		return EXIT_WITH_ERROR;
	}

	renderLoop();

	return EXIT_WITH_SUCCESS;
}

//◘