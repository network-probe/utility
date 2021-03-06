#include <iostream>

using namespace std;

std::string GetHTTPBodyString(std::string http_data)
{
	std::string body_string;
	size_t pos = http_data.find("\r\n\r\n");
	if(pos != std::string::npos)
	{
		body_string = http_data.substr(pos+4);
	}

	return body_string;
}


int main()
{
	std::string text = "GET /tutorials/other/top-20-mysql-best-practices/ HTTP/1.1\r\n	\
						Host: code.tutsplus.com\r\n	\
						User-Agent: Mozilla/5.0 (Windows; U; Windows NT 6.1; en-US; rv:1.9.1.5) Gecko/20091102 Firefox/3.5.5 (.NET CLR 3.5.30729)\r\n	\
						Accept: text/html,application/xhtml+xml,application/xml;q=0.9,*/*;q=0.8\r\n	\
						Accept-Language: en-us,en;q=0.5\r\n	\
						Accept-Encoding: gzip,deflate\r\n	\
						Accept-Charset: ISO-8859-1,utf-8;q=0.7,*;q=0.7\r\n	\
						Keep-Alive: 300\r\n	\
						Connection: keep-alive\r\n	\
						Cookie: PHPSESSID=r2t5uvjq435r4q7ib3vtdjq120\r\n	\
						Pragma: no-cache\r\n	\
						Cache-Control: no-cache\r\n\r\n	\
						ABCDEFGHIJKLMN";


	std::cout << GetHTTPBodyString(text) << std::endl;

	return 0;
}
