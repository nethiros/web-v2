#include "Server.h"

string Web::Server::getdatenStruktur(string key){

	return 0;
}

	Web::Response Web::Server::Request(Web::Request& r) {
		if (r.getrequestType() == "GET") {
			return Web::Response(100, "GET-Befehl");
		}
		else if (r.getrequestType() == "POST") {
			return Web::Response(200, "Post-Befehl");
		}
		else if (r.getrequestType() == "PUT") {
			return Web::Response(300, "Put-Befehl");
		}
		else {
			return Web::Response(404, "Befehl nicht gefunden");
		}
	}