#include "Server.h"
int main() {
	auto r =  Web::Request::Request("GET","test.txt");
	auto s = new Web::Server;
	auto t = s->Request(r);
	std::cout << t.getresponseCode() << endl;
	std::cout << t.getBody();
}