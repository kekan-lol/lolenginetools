#include "Header.h"

void getprecompiled(std::string installpath) {
	std::cout << "Downloading file...\n\n";
	std::string downloadURL = "github.com/kekan-lol/lolengine/blob/main/lolengine.zip";
	std::string downloadCommand = "curl -L -o \"" + installpath + "\" " + downloadURL;
	system(downloadCommand.c_str());
	exit(0);
}