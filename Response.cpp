#include "Response.h"

	Web::Response::Response(int responseCode, string body) {		//Konstruktor definition
		Web::Response::responseCode = responseCode;
		Web::Response::body = body;
	}

	void Web::Response::addField(string anhang) {
		Web::Response::headerFields.push_back(anhang);
	}

	int Web::Response::getresponseCode() const {
		return Web::Response::responseCode;
	}

	vector<string> Web::Response::getheaderFields() const {	//Definition
		return Web::Response::headerFields;
	}

	string Web::Response::getBody() const {					//Definition
		return Web::Response::body;
	}
