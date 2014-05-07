
#include "../../QDMVC/DMVC.h"

#include "QPinBallD.h"

int main(int argc, char *argv[])
{
	DMVCApp* app = new DMVCApp(argc, argv);

	Map model;
	model.registerMethod();
	model.gameStart();

	return app->exec();
}
