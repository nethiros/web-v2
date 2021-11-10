#include "Server.h"

string Web::Server::getdatenStruktur(string key) {

	return DatenStruktur[key];
}

void Web::Server::add(string key, string value) {

	DatenStruktur.insert(std::make_pair(key, value));
}

Web::Response Web::Server::Request(Web::Request& r) {
	if (r.getrequestType() == "GET") {
		auto keyValuePair = DatenStruktur.find(r.getrequestResource());
		if (keyValuePair == DatenStruktur.end()) {
			std::ifstream stream(r.getrequestResource());
			if (stream.is_open()) {
				std::string str((std::istreambuf_iterator<char>(stream)),
					std::istreambuf_iterator<char>());
				DatenStruktur.insert(std::make_pair(r.getrequestResource(), str));
				// wurde hinzugefügt.
				return Web::Response(201, DatenStruktur[r.getrequestResource()]);
			}
			else {
				//datei wurde nicht gefunden
				return Web::Response(404, "NOT FOUND");
			}
		}
		else {
			// datei ist bereits in struktur.
			return Web::Response(200, DatenStruktur[r.getrequestResource()]);
		}
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