#ifndef SERVER_H
#define SERVER_H
#include <map>
#include "Response.h"
#include "Request.h"

namespace Web {
	class Server {
	private:
		map<string, string> datenStruktur;
	public:
		string getdatenStruktur(string key);
		Response Request(Request& r);
	};
}

#endif