#include <iostream>
#include <vector>
#include <string>
#include "PostRequest.h"
#include "GetRequest.h"
#include "PutRequest.h"
#include "Server.h"
#include "Response.h"
#include "Request.h"

using namespace std;

int main()
{

	Web::Server Server;									//Objekt von Server mit Typ "Server" wird erstellt (auf den Namespace Web wird zugegriffen)
	Web::Request Request("PUT", "Test");				//Objekt von Request mit Typ "Request" mit den Parametern (PUT und Test) wird erstellt

	Web::Response x = Server.Request(Request);			//Objekt x vom Typ Response bekommt den Wert von Server.Request(Request)

	x.addField(Request.getrequestType());				//An das Objekt X wird der String vom requestType hinzugefügt

	cout << x.getresponseCode() << endl;
	for (string x : x.getheaderFields()) {				//For Each Schleife
		cout << x << endl;
	}
	cout << x.getBody() << endl;

	return 1;
}
