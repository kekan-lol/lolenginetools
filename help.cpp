#include "Header.h"
using namespace std;

void help() {
	cout << "Usage: LOL-EngineTools [command] [path] [path]\n\n";
	cout << "Commands:\n";
	cout << "get [/path/to/zip] - get precompiled zip archive with LOL-Engine (harder to edit and no Less.js support)\n\n";
	cout << "getsource [/path/to/folder] - get source code ready for compilation (requires git)\n\n";
	cout << "getupgrade [/path/to/zip] - get a zip archive for upgrading old version of LOL-Engine to newest. More info:\n";
	cout << "lol-by-kekan.epizy.com/lolengine/help/upgrade/\n\n";
	cout << "make [/path/to/folder] [/path/to/zip] (optional)[--enableLess] - compile source code and pack into a zip archive\n\n";
	cout << "makenopack [/path/to/source] [/path/to/folder] - compile source code without packing it into zip.\n\n";
	cout << "makeupgrade [/path/to/source] [/path/to/zip] - compile the installer from source code\n";
	cout << "More info: lol-by-kekan.epizy.com/lolengine/help/upgrade/\n\n";
	cout << "help - print out this text and exit\n\n";
	cout << "(all download operations except getsource require curl)\n\n";
	exit(0);
}
