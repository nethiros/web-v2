#ifndef SERVER_H
#define SERVER_H
#include <map>
#include <fstream>
#include <streambuf>
#include "Response.h"
#include "Request.h"

namespace Web {
	class Server {
	private:
		map<string, string> DatenStruktur;
	public:
		string getdatenStruktur(string key);
		void add(string key, string value);
		Response Request(Request& r);
	};
}

#endif